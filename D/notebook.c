#include <stdio.h>
#include <string.h>
#include <stdlib.h> //malloc and friends

#define SIZE_NOTE 100


//Reads a one line note pass pointer of pointer to note
void enter_note(int* lines, char* (**notebook_pointer) ){
    //params: pointer to lines, pointer to notebook

    //reallocate memory 
    (*lines) ++;                                                                     //increase lines by 1
    *notebook_pointer = realloc(*notebook_pointer, (*lines) * sizeof(char*));
    notebook_pointer[(*lines) -1] = malloc(SIZE_NOTE * sizeof(char));               //malloc because it´s the first initialisation


    printf("Size notebook = %d * %ld: %ld \n", (*lines), sizeof(char*), (*lines) * sizeof(char*));
    //TODO: third line returns segmentation fault ----- *notebook_pointer[(*lines)-1] = malloc(SIZE_NOTE * sizeof(char));
             

    //read new line
    char note[SIZE_NOTE];
    printf("Enter a new note:");
    fgets(note, SIZE_NOTE, stdin);


    //add line to notebook at position lines (last empty line)
    strcpy(*notebook_pointer[(*lines)-1], note);
}




//display all written notes, req: lines + p_notebook(derefrenced) = notebok itself
void show_notes(int lines, char **notebook ){

    printf("\nNotes stored so far:");
    for(int line=0; line < lines; line++){
            printf("Note #%d : %s", line+1, notebook[line]);
    }

}



int main(){

    //declaration & initialisation
    int lines = 0;                                  // == (height of notebook array + 1), starting with 1
    char** notebook = malloc(sizeof(char*));        //initalise notebook
    char*** p_notebook = &notebook;                 //pointer to notebook (wich is a 2d array in itself)


for(int i = 0; i < 10; i++){

/*
    lines ++;                                                             //increase lines by 1
    notebook = realloc(notebook, (lines) * sizeof(char*));
    notebook[(lines) -1] = malloc(SIZE_NOTE * sizeof(char));               //malloc because it´s the first initialisation


    //read new line
    char note[SIZE_NOTE];
    printf("Enter a new note:");
    fgets(note, SIZE_NOTE, stdin);


    //add line to notebook at position lines (last empty line)
    strcpy(notebook[(lines)-1], note);
*/

   enter_note(&lines, p_notebook);
}

    show_notes(lines, *p_notebook); 
}








/*
void menu(char user_input, int len, char *notebook[len] ){
    switch (user_input)
    {
    case 1:
        enter_note(); 
        break;
    case 2:
        show_notes(len, notebook[len]);
        break;
    case 3:
        printf("Programm stoped"); 
        //TODO: goto 
        break;
    default:
        menu(user_input, len, notebook);  //recursive call -- ( inefficient )
    }
}
*/