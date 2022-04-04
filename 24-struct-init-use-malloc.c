/**
 * @file 22-struct-assignment.c
 * @author langyu95@foxmail.com
 * @brief 用molloc给结构体初始化空间
 * @version 0.1
 * @date 2022-04-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>
#include<stdlib.h>

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

void getInput(struct Book *book){
    printf("input name:"); 
    scanf("%s", book->title);
    printf("input author:");
    scanf("%s", book->author);
    printf("input price:");
    scanf("%f", &book->price);
    printf("input date date:");
    scanf("%d-%d-%d", &book->date.year,&book->date.month,&book->date.day);
}

void printBook(struct Book *book){
    printf("name = \t %s\n", book->title);
    printf("author = \t %s\n", book->author);
    printf("price = \t %f\n", book->price);
    printf("date = \t %d-%d-%d\n", book->date.year, book->date.month, book->date.day);
}

void test01(void){
    struct Book *b1, *b2;
    b1 = (struct Book *)malloc(sizeof(struct Book));
    b2 = (struct Book *)malloc(sizeof(struct Book));
    if(b1 == NULL || b2 == NULL){
        exit(1);
    }

    printf("input info for book\n");
    getInput(b1);
    putchar('\n');
    printf("input b2 info\n");
    getInput(b2);

    printf("\n\n ok \n\n");

    printf("printf book b1 ==========\n");
    printBook(b1);
    printf("printf book b2 ==========\n");
    printBook(b2);
    
    free(b1);
    free(b2);

}

void main(void){
    test01();
}