/**
 * @file 27-file.c
 * @author langyu95@foxmail.com
 * @brief 
 * @version 0.1
 * @date 2022-04-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>
#include<stdlib.h>

void test00(){

    FILE *fp1;
    if((fp1 = fopen("hello.txt", "r")) == NULL){
        printf("file r open error\n");
        exit(EXIT_FAILURE);
    }
    FILE *fp2;
    if(NULL == (fp2 = fopen("langyu.txt", "w"))){
        printf("file langyu.txt r open fail\n");
        exit(EXIT_FAILURE);
    }
    int ch;
    while (EOF != (ch = fgetc(fp1)))
    {
        fputc(ch, fp2);
    }
    fclose(fp1);
    fclose(fp2);
    

}

void main(){
    test00();
}