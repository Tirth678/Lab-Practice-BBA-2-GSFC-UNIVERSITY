#include<stdio.h>
int main(){
    int count;
    char variables[100];
    count = sizeof(variables)/sizeof(char);
    printf("%d", count);

    return 0;
}