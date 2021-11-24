#include <stdio.h>

int main(){

    //input
    int width, height;

    printf("Height of rectangle? ");
    scanf("%d", &height);

    printf("Width of rectangle? ");
    scanf("%d", &width);
    printf("\n");

    //top
    for(int i = width; i > 0; i--) printf("#");
    printf("\n");

    //middle
    for(int i = height - 2; i > 0; i--){
        
        printf("#");
        for(int i = width - 2; i > 0; i--) printf(" ");
        printf("#\n");

    }

    //bottom
    for(int i = width; i > 0; i--) printf("#");
    printf("\n");

}