#include<stdio.h>
int main(){
    int a,b;
    char c;
    printf("enter first value\n");
    scanf("%d", &a);
    printf("enter second value\n");
    scanf("%d", &b);
    printf("enter operation\n");
    scanf(" %c", &c);
    if(c == '+'){
        printf("result = %d\n", a+b);
    }
    else if(c == '-'){
        printf("result = %d\n", a-b);
    }
    else if(c == '*'){
        printf("result = %d\n", a*b);
    }
    else if(c == '/' && b != 0){
        printf("result = %d\n", a/b);
    }

    return 0;
}