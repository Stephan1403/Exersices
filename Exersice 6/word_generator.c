#include <stdio.h>

int main(){
   
char syl[3][8]; //buffer is 8 for now TODO: make varaible

//input
//fgets(syl[0], 8, stdin);      //for input with spaces


printf("Enter syllable 1: ");
scanf("%s", syl[0]);

printf("Enter syllable 2: ");
scanf("%s", syl[1]);

printf("Enter syllable 3: ");
scanf("%s", syl[2]);



for(int i=0; i<3; i++){

    for(int n=0; n<3; n++){

        printf("%s%s\n", syl[i], syl[n]);

    }

}









}