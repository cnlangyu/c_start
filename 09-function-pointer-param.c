#include<stdio.h>


void swap(int x, int y ){
    int temp;
    printf("swap before p1 = %d, p2 = %d\n", x, y);
    int s = x;
    x = y;
    y = s;
    printf("swap after p1 = %d, p2 = %d\n", x, y);
}

void swapUsePoint(int *x, int *y){
    int t = *x;
    *x = *y;
    *y = t;
}

void main(){
    int x = 3, y = 5;
    printf("main call swap before x = %d, y = %d\n", x, y);
    // swap(x,y);
    swapUsePoint(&x, &y);
    printf("main call swap after x = %d, y = %d\n", x, y);
}