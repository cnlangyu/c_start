/**
 * @file 22-struct-assignment.c
 * @author langyu95@foxmail.com
 * @brief 结构体之间的赋值
 * @version 0.1
 * @date 2022-04-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>

struct Date
{
    int year;
    int month;
    int day;
};

struct Book{
    char title[128];
    char author[40];
    float price;
    struct Date date;
};

struct Book getInput(struct Book book){
    printf("input name:"); 
    scanf("%s", book.title);
    printf("input author:");
    scanf("%s", book.author);
    printf("input price:");
    scanf("%f", &book.price);
    printf("input date date:");
    scanf("%d-%d-%d", &book.date.year,&book.date.month,&book.date.day);
    return book;
}

void printBook(struct Book book){
    printf("name = \t %s\n", book.title);
    printf("author = \t %s\n", book.author);
    printf("price = \t %f\n", book.price);
    printf("date = \t %d-%d-%d\n", book.date.year, book.date.month, book.date.day);
}

void test02(void){
    struct Book b1, b2;
    printf("input info for book\n");
    b1 = getInput(b1);
    putchar('\n');
    printf("input b2 info\n");
    b2 = getInput(b2);

    printf("\n\n ok \n\n");

    printf("printf book b1 ==========\n");
    printBook(b1);
    printf("printf book b2 ==========\n");
    printBook(b2);

}

void test01(void){
    struct Test
    {
        int x; int y;
    } t1, t2;
    t1.x = 3;
    t1.y = 4;

    t2 = t1;
    printf("t2.x = %d, t2.y = %d\n", t2.x, t2.y);
}

void main(void){
    // test01();
    test02();
}