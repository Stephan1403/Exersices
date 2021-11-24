#include <stdio.h>

int main(){

    printf("Output for the first for-loop:\n");
    for(int i = 75; i>=15; i=i-5){
        printf("%d ", i);
    }

    printf("\nOutputfor the second for-loop:\n");
    for(int i = 1; i<48; i++){
        //filter all numbers that are divisible by 3 or 7
        if(i % 3 == 0 || i % 7 == 0){
            continue;   
        }
        printf("%d ", i);
        
    }

}