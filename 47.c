#include <stdio.h>
int findOccurrence(char *str, char ch) {
    int count = 0;
    while (*str) {
        if (*str == ch) {
            count++;
        }
        str++;
    }
    return count;
}
int main() {
    char str[100], ch;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter a character to find: ");
    scanf("%c", &ch);
    int occurrence = findOccurrence(str, ch);
    printf("The character '%c' occurs %d times in the string.\n", ch, occurrence);
    return 0;
}
