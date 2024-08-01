#include <stdio.h>
#include <ctype.h>
int containsFourNumbers(const char *input) {
    int count = 0;
    int inNumber = 0;
    while (*input) {
        if (isdigit(*input)) {
            if (!inNumber) {
                count++;
                inNumber = 1;
            }
        } else {
            inNumber = 0;
        }
        input++;
    }
    return count == 4;
}
int main() {
    char input[100];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    if (containsFourNumbers(input)) {
        printf("The input contains exactly four numbers.\n");
    } else {
        printf("The input does not contain exactly four numbers.\n");
    }
    return 0;
}
