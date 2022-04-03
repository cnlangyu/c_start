#include<stdio.h>

void print_array(int a[10]){
    printf("function print_array sizeof = %ld\n", sizeof a);
    for(int i = 0; i < 10; i++){
        printf("a[%d] = %d, ", i, a[i]);
        a[i]++;
    }
    printf("\n");
}

void main(){
    printf("int = %ld\n", sizeof(int));
    int a[10] = {1,2,3,4,5,6,7,8,9,0};
    printf("function main sizeof = %ld\n", sizeof a);
    print_array(a);
    // print_array(a);
}