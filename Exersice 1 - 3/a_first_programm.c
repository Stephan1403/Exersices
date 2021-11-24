#include <stdio.h>

int main(){

    int var1, var2, var3; 

    printf("Enter variable 1\n");
    scanf("%d", &var1);

    printf("Enter variable 2\n");
    scanf("%d", &var2);

    printf("Enter variable 3\n");
    scanf("%d", &var3);


//Calculations
    int sum = var1 + var2 + var3;
    printf("\nSum: %d", sum);

    int product = var1 * var2 * var3;
    printf("\nProduct: %d", product);

    float average = sum / 3;
    printf("\nAverage: %f\n", average);

}

/*
    Compile:
        gcc -o {saved name} {file name}
        example: gcc -o Programm a_first_programm.c

    Run: 
        /.G1   

*/