#include <stdio.h>

int main(void)
{
    char c;
    scanf("%c", &c);
    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        printf("Vowel");
    else
        printf("Consonant");
    return 0;
}