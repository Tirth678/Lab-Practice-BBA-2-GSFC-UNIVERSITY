#include<stdio.h>
int swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int student1, student2;
    printf("enter total marks of first student\n");
    scanf("%d", &student1);
    printf("enter total marks of second marks\n");
    scanf("%d", &student2);
    swap(&student1, &student2);
    printf("oops! the marks got mixed up! %d and %d\n", student1, student2);

    
    return 0;
}
