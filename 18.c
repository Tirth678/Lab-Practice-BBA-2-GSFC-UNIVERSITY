#include<stdio.h>
#include<ctype.h>
int main(){
    char value;
    printf("enter any value\n");
    scanf("%c", &value);
    if(isupper(value)){
        printf("%c is capital and a character\n");
    }
    else if(islower(value)){
        printf("%c is small and a character");
    }
    else if(isspace(value)){
        printf("%c is a space\n");
    }
    else if(isdigit(value)){
        printf("%c is a digit\n");
    }
    else{
        printf("%c is a symbol\n");
    }
}