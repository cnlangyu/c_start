#include<stdio.h>
#include<string.h>

void test01(){
    char a[] = "langyu";
    printf("a[0] -> %p, a[1] -> %p, a[2] -> %p\n", &a[0], &a[1],&a[2]);
}

void test02(){
    char a[] = "langyu";
    char *p = a;

    printf("*p = %c, *(p + 1) = %c, *(p+2) = %c\n", *p, *(p+1), *(p+2));
    printf("p = %s, (p + 1) = %s, (p+2) = %s\n", p, (p+1), (p+2));
    printf("print out a [%s] \n", p);
    printf("&a[0] = [%p], &a[1] = [%p], &a[2] = [%p]\n",&a[0], &a[1], &a[2]);

}

/**
 * 和test02比较，*(p+1)并非是指针地址+1，而是指针指向下一个元素 
 * int 占4位
 */
void test03(){
    int a[] = {1,2,3,4,5};
    int *p = a;
    printf("*p = %d, *(p + 1) = %d, *(p+2) = %d\n", *p, *(p+1), *(p+2));
    printf("&a[0] = [%p], &a[1] = [%p], &a[2] = [%p]\n",&a[0], &a[1], &a[2]);
    printf("&p = [%p], &(p+1) = [%p], &(p+2) = [%p]\n", p, (p+1), (p+2));
}

void test04(){
    char *str = "langyu is a Hack!";

    for (int i = 0; i < strlen(str); i++){
        printf("%c", str[i]);
    }
    printf("\n end. \n");

}

void main(){
    // test01();
    // test02();
    // test03();
    test04();
    
}