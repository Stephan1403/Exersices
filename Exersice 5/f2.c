#include <stdio.h>
#include <time.h>

/*
int a = 0, b = 1, num;
int len = 5000;

void fib(int a, int b){
    num = a + b;
    a = b; //a -> new a (b)
    b = num; 
    len--;
    printf("%d ", num);
    if(len > 0){
        fib(a, b);
    }
}
*/
int fib(int n){
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else    
        return fib(n-1) + fib(n-2);
}


int fib_iterative(int n){

    int a = 0, b = 1, sum = 0; 

    for(int i=1; i<=n; i++){
        if (i == 1){ 
            sum=b;
            continue;
        }

        //Debug: printf("%d-ter Durchlauf:   a = %d,  b = %d,  sum = %d\n\n", i, a, b, sum);
        sum = a + b; 
        a = b;
        b = sum;
    }
    return sum; 

}

/*
double time(int fn()){
    int start_t, end_t;

    start_t = clock();
    fn(40);
    end_t = clock();

    //diffrence
    return (double)(end_t - start_t) / CLOCKS_PER_SEC; 
}
*/




int main(){

    printf("Function Test:\n");
    printf("F(8) is according to fib: %d\n", fib(8));
    printf("F(8) is according to fib_iterative: %d\n", fib_iterative(8));
    printf("F(14) is according to fib: %d\n", fib(14));
    printf("F(14) is according to fib_iterative: %d\n\n", fib_iterative(14));

    printf("Speed Test:\n");
    int start_t, end_t;

    start_t = clock();
    printf("Sum according to fib is %d\n", fib(40));
    end_t = clock();
    printf("Time needed using fib is %f\n", (double)(end_t - start_t) / CLOCKS_PER_SEC);

    start_t = clock();
    printf("Sum according to fib_iterative is %d\n", fib_iterative(40));
    end_t = clock();
    printf("Time needed using fib_iterative is %f\n", (double)(end_t - start_t) / CLOCKS_PER_SEC);


}