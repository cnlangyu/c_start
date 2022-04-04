/**
 * @file 16-hanoi.c
 * @author langyu95@foxmail.com
 * @brief The Hanoi recursive solution: 汗诺塔递归实现
 * @version 0.1
 * @date 2022-04-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>

void hanoi(int n, char x, char y, char z){
    if(n <= 1){
        printf("%c -> %c\n", x, z);
    }
    else {
        hanoi(n - 1, x, z, y);
        printf("%c -> %c\n", x, z);
        hanoi(n - 1, y, x, z);
    }

}

void main(void){
    int n = 1;
    printf("input hanoi layer n: ");
    scanf("%d", &n);
    hanoi(n, 'x', 'y', 'z');
    printf("This Hanoi comp!!\n\n");
}