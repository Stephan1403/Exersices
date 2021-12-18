#include <stdio.h>
#include <stdlib.h> //malloc funciton

//http://juergenbrauer.org/teaching/pro1/exercises.html#D1


//Assing predefined values to the given array
void array_init(float *a, int len){
    //using integer division wich ignores rest
    for(int i = 0; i < len/2; i++){ a[i] = 123.0; }         //all values aboth half
    for(int i = len-1; i >= len/2; i--){ a[i] = 456.0; }    //values below half
    if(len % 2){ a[len/2] = 999.0; }                        //overwriting the value in the middle 
}

//print all values of and float array
void print_array(float *a, int len){
    for(int i = 0; i<len; i++)  printf("%.1f ", a[i]);
}



int main(){

    //declaration
    unsigned int size_array;

    while (1)
    {
         //Array size determination
        printf("\n\nEnter size of your array: ");
        scanf("%d", &size_array); 

        //stop criteria
        if(size_array == 0){ printf("programm stoped..."); break; }

        //allocate array
        float* dynamic_array = malloc( sizeof(float) * size_array );

        //out of memory -> NULL Pointer
        if(dynamic_array == NULL){ printf("Out of memory\n"); break; }

        //initalize and print array
        array_init(dynamic_array, size_array);
        print_array(dynamic_array, size_array);

        //delocation of array
        free(dynamic_array);    
    }
    


   
}