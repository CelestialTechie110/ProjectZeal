// F3: REVERSE A WORD
#include <stdio.h>

int main()
{
    char str[50]; // To store the Word
    int length = 0;  // For storing length of the word
    int i;  // Control variable for loop

    printf("Enter the Word you want to Reverse:\n");
    scanf("%s", str);  // Reads string until there is space, no built-in string functions used

   
    while (str[length] != '\0') // Calculate Length of the String
    {
        length++;
    }

    printf("Reversed Word is:\n"); // Print characters in reverse order
    for (i = length - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
    
}
