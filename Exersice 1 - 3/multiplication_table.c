#include <stdio.h>

/* Display the small 1 x 1 */

//TODO: implement adequate whitespaces

int main()
{

    int var = 1;

    do
    { //from top to bottom

        int multiplicator = 1;
        int result;

        do
        { //from left to right
            result = var * multiplicator;

            if (var != 10)  //row 1-9
            {

                if(result<10)  printf("%d x %d = %d    ", var, multiplicator, result);  //usually 4 whitespaces
                else           printf("%d x %d = %d   ", var, multiplicator, result);

            }
            else  //row 10
            {

                if(result<10)   printf("%d x %d = %d   ", var, multiplicator, result);
                else            printf("%d x %d = %d  ", var, multiplicator, result);

            }

            multiplicator++;
            
        } while (multiplicator <= 10);

    
        printf("\n");   //new line after each row

        var++;

    } while (var <= 10);
}