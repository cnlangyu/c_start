/**
 * Secondary pointer
 * @file 06-double-point.c
 * @author langyu
 * @brief Secondary pointer learn
 * @version 0.1
 * @date 2022-04-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>

void test01(){
    int num = 4;
    int *p = &num;
    int **pp = &p;

    printf("num = %d, *p = %d, **pp = %d\n", num, *p, **pp);
    printf("num = %p, p = %p, *pp = %p\n", &num, p, *pp);
    printf("&p = %p, pp = %p\n", &p, pp);
}

//pointer array and secondary pointer
void test02(){
    char *a[] = {
        "C",
        "c++",
        "java",
        "python", 
        "go"
    };

    char **ap = NULL;
    char **apa[5];

    ap = &a[4];
    apa[0] = &a[0];
    apa[1] = &a[1];
    apa[2] = &a[2];
    apa[3] = &a[3];
    apa[4] = &a[4];

    printf("ap = %s\n", *ap);
    for(int i = 0; i < 5; i++){
        printf("apa[%d] = %s\n", i, *(*apa + i));
        printf(" - apa[%d] = %s\n", i, *apa[i]);
    }
}

void main(){
    // test01();
    test02();
}