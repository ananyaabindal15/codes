#include <cs50.h>
#include <stdio.h>

int main(void)
{
   // Get the size of the grid
   int n;
   do
   {
    n = get_int ("Height: ");
   }
    while ( n < 1 || n > 8);

    // Print grid of bricks
    for (int i = 0 ; i < n ; i++)
    {
        // Print blankspaces
        for (int j = n - 1 ; j > i ; j--)
            printf(" ");

        // Print hashes
        for (int j = 0 ; j <= i ; j++)
            printf("#");

    printf("\n");
    }
}

