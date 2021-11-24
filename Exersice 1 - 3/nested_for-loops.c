#include <stdio.h>

int main(){

    for(int i = 0; i < 10; i++){
        
        for(int number = 0; number <= i; number++){
            printf("%d ", number);
        }
        printf("\n");   //new line
    }


    for(int i = 0; i < 10; i++){
        
        for(int number = 0; number <= i; number++){
            printf("* ");
        }
        printf("\n");   //new line
    }

}