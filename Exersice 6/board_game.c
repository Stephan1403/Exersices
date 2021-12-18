#include <stdlib.h> //cotains random
#include <stdio.h>
#include <time.h>

/*Notes:
    Wird in einer Funktion ein Array übergeben, wird der Pointer übergeben.
    Allerdings kein Pointer auf den Array sondern auf den Inhalt des Arrays
    Wie kann man jetzt die Größe des Arrays herausfinden. Sizeof schaut immer wie groß der Inhalt ist
    Folglich immer 1 Byte (Char) ??????
*/




//Set all boarders and the whitespaces inbetween
void init_board(char *g){     //passing a 2d array  (60 characters for each of the 20 rows)

    for(int r=0; r<20; r++){

        for(int c=0; c<60; c++){
            
            if(r == 0 || r == 19 || c == 0 || c == 59){
                g[r*60 + c] = '#';
            }else{
                g[r*60 + c] = ' ';
            }
            
            
        }
        


    }
    
}


//optional: handle overlapping blocks

//Insert a random block at position (x, y) with a size from 3x3 to 6x6
void add_single_block(char *g, int x, int y, int size){
        int row_correction, column_correction;

        for(int r=0; r<size; r++){  

            for(int c=0; c<size; c++){
                row_correction = r;
                column_correction = c;

                //in case of overlapping change move direction of block (left instead of right, up instead of down)
                if(x + size >= 19) row_correction = -r;  //adjust row
                if(y + size >= 59) column_correction = -c;  //adjust column

                g[ (y+r) * 60 + x + c]  = '#'; //anchor point (all other coordinates depend on it)
            }

        }

}


/* When a array is passed to a function ist decays to 
/* a pointer that points to the first element (game[0][0])
*/

//Display the game_board in the console
void show_game_board(char (*g)[60]){    //passing a 2d array  (60 characters for each of the 20 rows)

    for(int r=0; r<20; r++){    //20 times - for all rows

        for(int c=0; c<60; c++){    //60 times - for all columns
            printf("%c", g[r][c]);
        }

        //after each row
        printf("\n");
    }

}



int main(){
    char game[20][60];  //with=60, height=20
    int x, y, size; //3 random numbers for each of these variables  
    srand(time(NULL)); //set random generator number
  

    init_board(game);
    
    

    for(int i=0; i<20; i++){
         //Generate random numbers
        x = (rand() % 58) + 1; //random number between 1 and 58
        y = (rand() % 18) + 1; //random number between 1 and 18
        size = (rand() % 4) + 3;    //random number between 3 and 6

        add_single_block(game, x, y, size);
    }

    show_game_board(game);
    
   


    return 0; 
}




