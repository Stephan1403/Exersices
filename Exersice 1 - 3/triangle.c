#include <stdio.h>

int main(){

    //dec
    int max_rows, spaces, star_length;
    int row_lenght;

    printf("Number of rows for triangle? ");
    scanf("%d", &max_rows);
    printf("\n");

    row_lenght = (max_rows * 2) - 1;


    for(int row = 1; row <= max_rows; row++){   //goes trouth all rows

        //initalization
        star_length = (row * 2) - 1; //e.g. first row => 1
        spaces = (row_lenght - star_length) / 2;


        for(int i = 1; i <= row_lenght; i++){  //for (length of row)

            if(i <= spaces || i > (star_length + spaces)) printf(" ");
            else printf("#");

            
        }

        printf("\n");





    }   




}