#include <stdio.h>

int main()
{

    printf("1. With a for-loop:\n");
    for (int num = 17; num < 30; num = num + 3){
        printf("%d ", num);
    }

    printf("\n2. With a while-loop:\n");
    int num = 17;
    while (num < 30)
    {
        printf("%d ", num);
        num = num + 3; 
    }
    
    printf("\n3. With a do-while-loop:\n");
    int var = 17;
    do
    {
        printf("%d ",var);
        var = var + 3; 
    } while (var < 30);
    
    printf("\n"); //new line


}