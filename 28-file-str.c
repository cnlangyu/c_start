/**
 * @file 28-file-str.c
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

    FILE *fp;
    if( NULL == (fp = fopen("kaile", "w")) ){
        printf("File langyu w open fail\n");
        exit(EXIT_FAILURE);
    }

    for(int i = 0; i < 1000; i++){
        fputs("HelloWorld, My name is zhoukl\n", fp);
    }
    fclose(fp);

    if(NULL == (fp = fopen("kaile", "r"))){
        printf("File kaile r open fail\n");
        exit(EXIT_FAILURE);
    }

    char buffer[1024];
    while (!feof(fp))
    {
        fgets(buffer, 1024, fp);
        printf("%s", buffer);
    }
    fclose(fp);
}

void main(){
    test00();
}