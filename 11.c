#include<stdio.h>
#include<stdlib.h>
int main(){
    char demn;
    printf("enter any value\n");
    scanf("%c", &demn);
    if(demn>='A' && demn<='Z' || demn>='a' && demn<='z'){
        printf("value is an alphabet! %s\n");
    }
    else{
        printf("value is not an alphabet\n");
    }

    return 0;
}