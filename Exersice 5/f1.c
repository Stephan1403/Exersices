#include <stdio.h>



void statistics(int n1, int n2, int n3){
    int sum = n1 + n2 + n3; 
    float avg = (float)sum / 3;

    printf("n1=%d n2=%d n3=%d --> sum=%d, avg=%.2f\n", n1, n2, n3, sum, avg);
}



int main(){


for(int i = 0; i <= 5; i++){

    for(int n = 0; n <= 5; n++){

        for(int r = 0; r <= 5; r++){
            //output
            statistics(i, n, r);
        }

    }

}













/*

    //Declaration
    int numbers[3]; //array with 3 values
    int n1, n2, n3;


    //Input
    printf("Enter a first number: ");
    scanf("%d", &numbers[0]);
    printf("Enter a second number: ");
    scanf("%d", &numbers[1]);
    printf("Enter a third number: ");
    scanf("%d", &numbers[2]);



    for(int f = 0; f < 3; f++){        //first input (n1 | n2 | n3)
        n1 = numbers[f];    //1: x1, 2: x2, 3: x3

        for(int s = 0; s < 3; s++){        //second input
            if(s == f) continue; 
            n2 = numbers[f];

            for(int t = 0; t < 3; t++){        //third input
                if(t == s || t == f) continue; 
                n3 = numbers[t];

                //output
                statistics(n1, n2, n3);
            }

        }


    }
*/

}

