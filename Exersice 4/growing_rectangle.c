#include <stdio.h>
#include <unistd.h> //containing sleep function

#define clear() printf("\033[H\033[J")      //ovverride commands
#define gotoxy(x,y) printf("\033[%d;%dH", (y), (x))     //TODO: position depending on current position (terminal not empty, etc.)


//draw rectangle function
void rectangle(int width, int height, int x, int y){
    for(int i = 0; i < width; i++){

        for(int ordinate = y; ordinate <= y + width; ordinate++){

            //whitespaces
            if( !(i == 0 || i == width - 1) && !(ordinate == y || ordinate == y + width) ) continue;


            gotoxy(x+i, ordinate);   //x equals x + current position in loop (i)
            printf("#");
        }


    }
   
}


void rectangle_animation(int s_widht, int s_height, int loops){

    
    for(int l = loops; l > 0; l--){

    clear();
    rectangle(s_widht, s_height, loops, loops);
    fflush(stdout); //force output from buffer
    sleep(500 * 1000); //wait 500 milliseconds  //-------repair

    //change varibales
    s_widht += 2; s_height += 2;
    loops--; //used for distance

    }

}


int main(){

    /*      !!!!!!!!!!!!TODO
    int amount_rectangles;
    printf("How many rectancles do you want to draw?\n");
    scanf("%d", &amount_rectangles);    //only continue, when a number is entered
    */

    
   while (1)
   {
       rectangle_animation(5, 6, 5);
   }
   
    

   


    //printf("\033[2J");
    //gotoxy(9, 9);
    //rectangle(5, 5);
    //printf("\n\n");
       


}

