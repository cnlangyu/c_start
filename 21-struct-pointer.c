/**
 * @file 21-struct-pointer.c
 * @author langyu95@foxmail.com
 * @brief 结构体指针
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


struct Book
{
    char title[128];
    char author[40];
    float price;
    struct Date date;
    char publisher[40];
} book = {
    "<C>",
    "langyu",
    111.2,
    {2022, 04,03},
    "qh"
};

void test02(void){
    struct Book *pb = &book;
    printf("name \t%s\n", (*pb).title);
    printf("author \t%s\n", (*pb).author);
    printf("price \t%f\n", (*pb).price);
    printf("date \t%d-%d-%d\n", (*pb).date.year, pb->date.month, pb->date.day);
    printf("publisher \t%s\n", (*pb).publisher);

    printf("\n\n=========== two =============\n\n");

    printf("name \t%s\n", pb->title);
    printf("author \t%s\n", pb->author);
    printf("price \t%f\n", pb->price);
    printf("date \t%d-%d-%d\n", pb->date.year, pb->date.month, pb->date.day);
    printf("publisher \t%s\n", pb->publisher);
}

void test01(void){
    printf("name \t%s\n", book.title);
    printf("author \t%s\n", book.author);
    printf("price \t%f\n", book.price);
    printf("date \t%d-%d-%d\n", book.date.year, book.date.month, book.date.day);
    printf("publisher \t%s\n", book.publisher);

}

void main(void){
    // test01();
    test02();
}