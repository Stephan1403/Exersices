#include <stdio.h>

int main(){

    float c, r;

    printf("C:");
    scanf("%f", &c);

    printf("r:");
    scanf("%f", &r);

    int y = 0;

    //goes through 10 times
    do
    {
        c = c + c * (r / 100.0f);
        y = y + 1; //y++

        printf("\ny=%d: c=%.1f", y, c);
        
    } while (y<10);

    printf("\nGood Bye!\n");


}