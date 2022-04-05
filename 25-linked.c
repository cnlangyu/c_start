/**
 * @file 25-linked.c
 * @author langyu95@foxmail.com
 * @brief 链表
 * @version 0.1
 * @date 2022-04-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct Book
{
    char name[128];
    char author[123];
    struct Book *next;
};

void getInput(struct Book *book){
    printf("name: ");
    scanf("%s", book->name);
    printf("autor: ");
    scanf("%s", book->author);
}

//head insert
void addBook(struct Book **library){
    struct Book *book;
    book = (struct Book *) malloc(sizeof(struct Book));
    if(book == NULL){
        printf("error malloc\n");
        exit(1);
    }
    getInput(book);
    if(*library != NULL){
        struct Book *temp = *library;
        *library = book;
        book->next = temp;

    }
    else{
        *library = book;
        book->next = NULL;
    }
}

// tail insert
void addBookEnd(struct Book **library){
    struct Book *book;
    static struct Book *tail;
    book = (struct Book *) malloc(sizeof(struct Book));
    if(book == NULL){
        printf("error malloc\n");
        exit(1);
    }
    getInput(book);
    if(*library != NULL){
        // struct Book *temp = *library;
        // for(;temp->next != NULL;){
        //     temp = temp->next;
        // }
        // temp->next = book;
        // book->next = NULL;
        tail->next = book;
        book->next = NULL;
    }
    else{
        *library = book;
        book->next = NULL;
    }
    tail = book;
}

void printLibrary(struct Book *library){
    struct Book *book;
    int count = 1;
    book = library;
    while (book != NULL)
    {
        printf("Book %d [name:%s | author %s]\n", count++, book->name, book->author);
        count++;
        book = book -> next;
    }
}

void releaseLibray(struct Book **library){
    while (*library != NULL)
    {
        struct Book *temp = *library;
        *library = temp->next;
        free(temp);
    }
    
}

struct Book *searchBook(struct Book *library, char *target){
    for(;library != NULL;){
        if(!strcmp(library->name, target) || !strcmp(library->author, target)){
            break;
        }
        library = library->next;
    }
    return library;
}

void printBook(struct Book *book){
    printf("Book [name:%s | author %s]\n", book->name, book->author);
}

void test01(void){
    struct Book *libary = NULL;
    addBookEnd(&libary);
    addBookEnd(&libary);
    addBookEnd(&libary);

    printLibrary(libary);
    printf("-------------------------\n");
    struct Book *search = searchBook(libary, "1");
    if(search == NULL){
        printf("no search\n");
    }else{
        printBook(search);
    }
    printf("\n\n-------------------------\n\n");
    printLibrary(libary);
    releaseLibray(&libary);
}

void main(void){
    test01();
}