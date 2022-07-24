#include <stdio.h>
void main(void)
{
    char alphabet;
    printf("Enter an alphabet: ");
    scanf("%c", &alphabet);
    if ((alphabet == 'a') || (alphabet == 'o') || (alphabet == 'i') || (alphabet == 'e') || (alphabet == 'u'))
    {
        printf("\n%c is avowel", alphabet);
    }
    else
    {
        printf("\n %c is consonant", alphabet);
    }
}