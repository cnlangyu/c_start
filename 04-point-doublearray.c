#include<stdio.h>

void test01(){
    int array[4][5] = {0};
    int k = 0;
    //init
    for(int i = 0; i < 4; i++){
        for( int j = 0; j < 5; j++){
            array[i][j] = k++;
        }
    }
    printf("*(array + 1) = %p \n", *(array + 1));
    printf("array[1]:%p \n", array[1]);
    printf("&array[1][0]: %p\n", &array[1][0]);
    printf("**(array + 1): %d\n", **(array + 1));
    printf("*(*(array + 1) + 3) : %d \n", *(*(array+1) + 3));
}

// array point and double array
void test02(){
    int array[2][3] = {
        {1,2,3},
        {4,5,6}
    };

    int (*p)[3] = array;
    
    printf("**(p + 1) : %d\n", **(p+1));
    printf("**(array + 1): %d\n", **(array + 1));
    printf("array[1][0]: %d\n", array[1][0]);


    printf("*(*(p + 1) + 2) : %d\n", *(*(p+1) + 2));
    printf("*(*(array + 1) + 2): %d\n", *(*(array + 1) + 2));
    printf("array[1][2]: %d\n", array[1][2]);
}


void main(){
    // test01();
    test02();
}