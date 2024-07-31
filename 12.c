
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
    char c = '5'; // or any value of your choice
    if(isdigit(c)){
        printf("%c is a digit\n", c);
    }
    else{
        printf("%c is not a digit\n", c);
    }

    return 0;
}