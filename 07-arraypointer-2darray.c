#include<stdio.h>

void test00(){
    int array[] = {0,1,2,3,4,5,6,7,8,9};
    int *p = array;
    for(int i = 0; i< 10; i++){
        printf("%d ", *(p+i));
    }
    printf("\n");

}

void test01(){
    int array[3][4] = {
        {0,1,2,3},
        {4,5,6,7},
        {8,9,10,11}
    };

    /*
    int **pp = array;
    */
    int (*pp)[4] = array;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            printf("%2d ", *(*(pp + i) + j));
        }
        printf("\n");
    }
}
void main(){
    // test00();
    test01();
}