#include<stdio.h>
int main (){
    int var1 = 20;
    // int var2 = 23;
    // int var3 = 93;

    // printf("%x\n",&var1);
    // printf("%x\n",&var2);
    // printf("%x\n",&var3);
    int *p = &var1;
    printf("%d",*p);

    return 0;


}