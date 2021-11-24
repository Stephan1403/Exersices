#include <stdio.h>

int main(){

    //input
    int width, height;

    printf("Height of rectangle? ");
    scanf("%d", &height);

    printf("Width of rectangle? ");
    scanf("%d", &width);
    printf("\n");



    for(int i = 1; i <= (width * height); i++){ 

        //1st and last line
        if( (i <= width) || (i > (width * height - width)) ){

            //if(i == (width * height -width)) printf("\n");

            printf("#");
            if(i == width) printf("\n");

        }else{
        
        //all other lines
            if( (i + width - 1) % width == 0 ){   //1st place in row
                printf("#");
            }else if( ((i % width) == 0)){    //last place in row
                printf("#\n"); 
            }else{
                printf(" ");
            }
            
        
        }
    
    }
    printf("\n");

}