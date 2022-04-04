#include<stdio.h>

#define PI 3.14
#define R 6371
#define V PI * R * R * R * 4 / 3
// has param macro definition
#define MAX(x, y) (((x) > (y)) ? (x) : (y)) 
//warn
// #define SQUARE(x) x * x
#define SQUARE(x) ((x) * (x))

void test01(void);
void test02(void);
void test03(void);
void test04(void);

void main(){
    // test01();
    // test02();
    // test03();
    test04();
}

void test04(void){
    int x;
    scanf("%d", &x);
    printf("%d * %d = %d\n", x, x, SQUARE(x));
    printf("%d * %d = %d\n", x + 1, x + 1, SQUARE(x + 1));
}

void test03(void){
    int x, y;
    printf("input two int ");
    scanf("%d%d", &x, &y);
    printf("%d is max num\n", MAX(x, y));
}

void test01(void){
    int r;
    float s;
    printf("input ");
    scanf("%d", &r);
// #undef PI
    s = PI * r * r;
    printf("circle area = %0.4f\n", s);
}
void test02(void){
    printf("地球的体积大约:%f\n", V);
}
