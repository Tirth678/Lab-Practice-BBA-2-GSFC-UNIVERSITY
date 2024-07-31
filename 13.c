#include<stdio.h>
int main(){
    int day;
    printf("enter day\n");
    scanf("%d", &day);
    if( day == 1){
        printf("Monday\n");
    }
    else if(day == 2){
        printf("Tuesday\n");
    }
    else if(day == 3){
        printf("Wednusday\n");
    }
    else if(day == 4){
        printf("Thursday\n");
    }
    else if(day == 5){
        printf("Friday\n");
    }
    else if(day == 6){
        printf("Satuday\n");
    }
    else if(day == 7){
        printf("Sunday\n");
    }
    else{
        printf("Invalid input\n");
    }

    return 0;
}