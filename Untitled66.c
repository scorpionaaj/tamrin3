#include <stdio.h>
#include <string.h>

int main()
{
    // Declare a string variable and assign it the value "1234,1222,yuer"
    char str[] = "1234,1222,yuer";

    // Declare an integer variable to store the index of the current character
    int index = 0;

    // Declare a character variable to store the delimiter
    char delimiter = ',';

    // Declare a pointer to a character and use strtok function to split the string by the delimiter
    char *token = strtok(str, &delimiter);

    // Loop through the tokens until NULL is reached
    while (token != NULL)
    {
        // Print the index and the token
        printf("index %d: %s\n", index, token);

        // Increment the index by 1
        index++;

        // Get the next token by calling strtok again with NULL as the first argument
        token = strtok(NULL, &delimiter);
    }

    // Print a newline for formatting
    printf("\n");

    // Declare another string variable and assign it the value "1234@1222@yuer"
    char str2[] = "1234@1222@yuer";

    // Change the delimiter to '@'
    delimiter = '@';

    // Reset the index to 0
    index = 0;

    // Use strtok function again to split the second string by the new delimiter
    token = strtok(str2, &delimiter);

    // Loop through the tokens until NULL is reached
    while (token != NULL)
    {
        // Print the index and the token
        printf("index %d: %s\n", index, token);

        // Increment the index by 1
        index++;

        // Get the next token by calling strtok again with NULL as the first argument
        token = strtok(NULL, &delimiter);
    }

    // Return 0 to indicate successful execution
    return 0;
}
