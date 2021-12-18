#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <time.h>


//returns random word containing between 2 and 5 given syllables
void generate_word(int number_of_syllables, char syllables[6][10], char word[60]){
    int x;

    for(int i=0; i<number_of_syllables; i++){
        x = rand() % 6;         //generate random index between 0 and 5
        strcat(word, syllables[x]); //add syllables at index x to the word

    }
}




int main(){
    srand(time(NULL));
    char syllables[6][10]={{"tan"}, {"han"}, {"klam"}, {"ro"}, {"ba"}, {"lo"}};  //syllables stored in array
    char stored_syllables[60] = {"\nSyllables stored: "};   //syllables stored as one string
    

    for(int i=0; i<6; i++){
        printf("Enter syllable %d\n", i+1);
        scanf("%s", syllables[i]);

        //appending syllables[i] to stored_syllables
        strcat(stored_syllables, syllables[i]); 
        strcat(stored_syllables, " "); 
    }

    printf("%s\n\n", stored_syllables);


//generating words
int letters, no_syllables;

for(int i=1; i<=7; i++){
    char word[60] = {""};
    no_syllables = rand() % 4 + 2;


    generate_word(no_syllables, syllables, word );             //store new value at word address

    letters = strlen(word);                                        //string length
    printf("Generated word #%d has %d letters : %s\n", i, letters, word);    
}
  


    

}