#include<stdio.h>
#include<math.h>

long test01(){
    return pow(2, 32) - 1;
}

int main(){
    long r = test01();
    printf("%ld\n", r);
    return 0;
}