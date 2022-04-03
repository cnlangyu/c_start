#include<stdio.h>

void test00(){
    const float pi = 3.14;
    printf("%.3f\n", pi);
}

void test01(){
    int num = 4;
    const int cnum = 44;
    const int *pc = &cnum;
    printf("num = %d, cnum = %d, pc = %d\n", num, cnum, *pc);
    printf("num = %p, cnum = %p, pc = %p\n", &num, &cnum, pc);

    printf("------------\n");
    // *pc = 1024; //error
    pc = &num;
    printf("num = %d, cnum = %d, pc = %d\n", num, cnum, *pc);
    printf("num = %p, cnum = %p, pc = %p\n", &num, &cnum, pc);

    num = 1024;
    printf("num = %d, cnum = %d, pc = %d\n", num, cnum, *pc);
    printf("num = %p, cnum = %p, pc = %p\n", &num, &cnum, pc);

}

//const pointer
void test02(){
    int n1 = 4;
    int n2 = 8;
    const int *pn = &n1;
    int * const p = &n2;
    const int * const cpc = NULL;

    printf("n1 = %d, n2 = %d, pn = %d, p = %d\n", n1, n2, *pn, *p);
    printf("n1 = %p, n2 = %p, pn = %p, p = %p\n", &n1, &n2, pn, p);

    pn = &n2;
    //p = &n1; // error
    printf("n1 = %d, n2 = %d, pn = %d, p = %d\n", n1, n2, *pn, *p);
    printf("n1 = %p, n2 = %p, pn = %p, p = %p\n", &n1, &n2, pn, p);


}

void main(){
    // test00();
    // test01();
    test02();
}