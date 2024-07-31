#include<stdio.h>
int main(){
    char value;
    printf("enter department name\n");
    scanf("%c", &value);
    if(value == 'a'){
        printf("Administratation\n");
    }
    else if(value == 'f'){
        printf("Finance\n");
    }
    else if(value == 'i'){
        printf("Information Technology\n");
    }
    else{
        printf("Enter a valid input\n");
    }

    return 0;
}