#include <stdio.h>

/*
Expected output:

Counting from 1 to 10:
1 2 3 4 5 6 7 8 9 10:
Counting from -5 to -15:
-5 -6 -7 -8 -9 -10 -11 -12 -13 -14 -15
Good bye!
*/

int main()
{
    int i = 1;
    int x = -5;

    //loop 1
    printf("Counting from 1 to 10:\n");
   
    do
    {
        printf("%d ", i);
        i++;

    } while (i <= 10);

    //loop 2
    printf("\nCounting from -5 to -15:\n");
    
    do
    {
        printf("%d ", x);
        x--;

    }while(x >= -15);

    printf("\nGood bye!\n");

}