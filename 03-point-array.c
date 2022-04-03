#include<stdio.h>

void test01(){
    char str[] = "Langyu start learn C Language.";
    char *pstr = str;
    int count = 0;
    while (*pstr++ != '\0')
    {
        count++;
    }
    printf("Total has %d char\n", count);

}

// point array
void test02(){
    int a = 1, b = 2, c = 3, d = 4, e = 5;
    int *p1[5] = {&a, &b, &c, &d, &e};
    for (int i = 0; i < 5; i++){
        printf("%d\n", *p1[i]);
    }
}
// point array used demo
void test03(){
    char *p[5] = {
        "Hello",
        "My Name Is zhoukl",
        "Your let's go? ",
        "hi",
        "fjiesoajfeoi"
    };
    for(int i =0; i< 5; i++){
        printf("this line = [%s]\n", p[i]);
    }
}

// array point
void test04(){
    int temp[5] = {1,2,3,4,5};
    int (*p)[5] = &temp;
    for(int i = 0; i< 5; i++){
        printf("%d\n", *(*p + i));
    }
}

void main(){
    // test01();
    // test02();
    // test03();
    test04();
}