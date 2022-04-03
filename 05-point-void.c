#include<stdio.h>

void test00(){
    // int a = void;
    int  num = 1024;
    int *pi = &num;
    char *ps = "langyu";
    void *pv;

    pv = pi;
    printf("pi = %p, pv = %p \n", pi, pv);
    printf("pi = %d, pv = %d \n", *pi, *(int*)pv);

    // ps = (char *) pv;

    pv = ps;
    printf("ps = %p, pv = %p \n", ps , pv);
    printf("ps = %s, pv = %s \n", ps , (char *)pv);

}

void test01(){
    int *p1;
    int *p2 = NULL;
    printf("%d\n", *p1); //wild pointer is a random num
    printf("%d\n", *p2); //NULL pointer error
}

void test02(){
    int *p = NULL;
    if(p == NULL){
        printf("The pointer is NULL\n");
    }
    else{
        printf("The pointer is not NULL\n");
    }

}

void main(){
    // test00();
    // test01();
    test02();
}