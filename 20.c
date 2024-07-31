#include<stdio.h>
#include<string.h>
int main(){
    int seat, sub1, sub2, sub3, sub4, sub5;
    char name[50];
    printf("enter seat number of student\n");
    scanf("%d", &seat);
    printf("enter name of student\n");
    scanf("%s", &name);
    printf("enter marks of first subject\n");
    scanf("%d", &sub1);
    printf("enter marks of second student\n");
    scanf("%d", &sub2);
    printf("enter marks of third subject\n");
    scanf("%d", &sub3);
    printf("enter marks of fourth student\n");
    scanf("%d", &sub4);
    printf("enter marks of fifth subject\n");
    scanf("%d", &sub5);
    if((sub1+sub2+sub3+sub4+sub5)/5 <=100 && sub1<20 && sub2<20 && sub3<20 &&sub4<20 && sub5<20){
        printf("Roll number of student = %d\n", seat);
        printf("Name of student = %s\n", name);
        printf("status: PASSED\n");

    }

    return 0;
}
// kr rha solve