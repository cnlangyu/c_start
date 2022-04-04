/**
 * @file 20-struct.c
 * @author langyu95@foxmail.com
 * @brief 结构体
 * @version 0.1
 * @date 2022-04-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>

struct Book
{
    char title[128];
    char author[40];
    float price;
    unsigned int date;
    char publisher[40];
};

void test02(void){
    struct Book book = {
        .title = "title",
        .author = "langyu"
    };

    printf(book.title);
    printf("\n");
    printf(book.author);
    printf("\n");
}

void test01(void){
    struct Book book;
    printf("title:");
    scanf("%s", book.title);
    printf("author: ");
    scanf("%s", book.author);
    printf("price:");
    scanf("%f", &book.price);
    printf("date: ");
    scanf("%d", &book.date);
    printf("publisher:");
    scanf("%s", book.publisher);
    printf("wancheng -----\n\n");
    printf("name \t%s\n", book.title);
    printf("author \t%s\n", book.author);
    printf("price \t%f\n", book.price);
    printf("date \t%d\n", book.date);
    printf("publisher \t%s\n", book.publisher);
}

void main(void){
    // test01();
    test02();

}