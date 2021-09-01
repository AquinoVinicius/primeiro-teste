#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Get a positive integer from user, to 1 until 8.
    int n;
    do
    {
        n = get_int("Hello, choose an integer number between 1 and 8: ");
        // Verification of the number typed
        if (n < 1)
        {
            printf("Number less than 1! ");
        }
        else if (n > 8)
        {
            printf("Number greater than 8! ");
        }
    }
    while (n < 1 || n > 8);

    //The logic is: the first for is to start k as 0 and add a space after complete the follow sequence.
    for (int i = 0; i < n; i++)
    {
        //This for below server to add spaces to organize the Right-Aligning pyramid.
        // Note that space number is equal to a typed number "i" (that represent the lines) - 1 because the counter begins with 0.
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        // This final for is to created the columns.
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}