#include<stdio.h>
int main(){
    int a;
    printf("enter a value\n");
    scanf("%d", &a);
    if(a == 0){
        printf("value is equal to 0\n");
    }
    else if(a>0){
        printf("value is positive\n");
    }
    else{
        printf("value is negative\n");
    }

    return 0;
}