#include <stdio.h>

int main() {
    int studentClass, subjectsFailed, graceMarks = 0;
    printf("Enter the class obtained by the student (1 for First Class, 2 for Second Class, 3 for Third Class): ");
    scanf("%d", &studentClass);
    printf("Enter the number of subjects the student has failed in: ");
    scanf("%d", &subjectsFailed);
    switch(studentClass) {
        case 1: 
            if (subjectsFailed <= 3) {
                graceMarks = subjectsFailed * 5;
            }
            break;
        case 2: 
            if (subjectsFailed <= 2) {
                graceMarks = subjectsFailed * 4;
            }
            break;
        case 3: 
            if (subjectsFailed <= 1) {
                graceMarks = subjectsFailed * 5;
            }
            break;
        default:
            printf("Invalid class entered.\n");
            return 1; 
    }
    printf("Total grace marks: %d\n", graceMarks);
    return 0; 
}