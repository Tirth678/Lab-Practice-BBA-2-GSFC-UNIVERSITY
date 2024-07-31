#include <stdio.h>
#include <ctype.h>
int main() {
    char value;
    printf("Enter an alphabet: ");
    scanf(" %c", &value);
    if (islower(value)) {
        printf("%c\n", toupper(value));
    } else if (isupper(value)) {
        printf("%c\n", tolower(value));
    } else {
        printf("Invalid input\n");
    }
    return 0;
}
