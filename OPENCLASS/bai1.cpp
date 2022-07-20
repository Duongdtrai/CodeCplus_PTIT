#include<stdio.h>

int main(){

    printf("Hello world");
    printf("\tPham Tung Duong\n");
    char a[100];
    gets(a);

    int k = strlen(a);
    printf("%d",k);
    return 0;
}
