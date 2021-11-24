#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){

    //input
    int lower_border, upper_border;

    do{

    printf("Enter lower border: ");
    scanf("%d", &lower_border);

    printf("Enter upper border: ");
    scanf("%d", &upper_border);

    printf("\n");

    }while ( (lower_border == upper_border) || (lower_border > upper_border) );
   
    


    //declaration
    int random_num;


    //output
    srand(time(NULL)); //time past since programm start

    printf("I will generate 10 random numbers between %d and %d ...\n", lower_border, upper_border);
    for(int i = 0; i < 10; i++){
        random_num = ( rand() % (upper_border - lower_border + 1) ) +  lower_border;




        printf("%d ", random_num);


    }


}