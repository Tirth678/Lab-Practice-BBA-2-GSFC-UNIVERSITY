#include<stdio.h>
int main(){
    int student1, student2;
    printf("enter age of student 1\n");
    scanf("%d", &student1);
    printf("enter age of student 2\n");
    scanf("%d", &student2);
    if(student1 == student2){
        printf("both have the same age\n");
    }
    else if(student1>student2){
        printf("first student is elder then second student\n");
    }
    else if(student1<student2){
        printf("second student is elder then first sutdent\n");
    }

    return 0;
}