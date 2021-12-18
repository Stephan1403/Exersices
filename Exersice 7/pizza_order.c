#include <stdio.h>
#include <string.h>
#include <stdbool.h>

//enum declaration
enum pizza_type {salami, hawaii, margherita, diavola, tonno, carlo, number_of_pizzas};
enum pizza_size {small, medium, large, family, number_of_sizes};
    

//print all pizzas with the corresponding numbers
void diplay_pizza_types(){
    char type[20] = "";
    enum pizza_type p_type;

    printf("Available pizza types: \n");    
    for(p_type = 0; p_type < number_of_pizzas; p_type++){
        switch (p_type){
        case 0: strcpy(type, "Pizza Salami"); break;
        case 1: strcpy(type, "Pizza Hawaii"); break;
        case 2: strcpy(type, "Pizza Margherita"); break;
        case 3: strcpy(type, "Pizza Diavola"); break;
        case 4: strcpy(type, "Pizza Tonno"); break;
        case 5: strcpy(type, "Pizza Carlo"); break;
        }

        printf("%d: %s\n", p_type, type);
    }
}


//print all pizza sizes and their corresponding numbers
void diplay_pizza_sizes(){
    char size[10] = "";
    enum pizza_size p_size;

    printf("\nAvailable pizza sizes: \n");  
    for(p_size = 0; p_size < number_of_sizes; p_size++){
        switch (p_size){
            case 0: strcpy(size, "Small"); break;
            case 1: strcpy(size, "Medium"); break;
            case 2: strcpy(size, "Large"); break;
            case 3: strcpy(size, "Family"); break;
            }

            printf("Size %d: %s\n", p_size, size);
    }
}





int main(){
    enum pizza_type p_types;

    struct pizza
    {
        enum pizza_type    type_of_pizza;
        enum pizza_size    size_of_pizza;
        
    };
    
    struct pizza ordered_pizzas[10];    //struct of pizza with 10 instances

    int i = 1;
    bool continue_adding_pizzas = false;
    do
    {   
        continue_adding_pizzas = false;


        printf("\n\nPlease choose your pizza #1: \n\n");
    
        //pizza_type input
        diplay_pizza_types();
        printf("\nYour choice: ");
        scanf("%u", &ordered_pizzas[0].type_of_pizza); 

        //pizza_size input
        diplay_pizza_sizes();
        printf("\nYour choice: ");
        scanf("%u", &ordered_pizzas[0].size_of_pizza);

        printf("Do you want to order another pizza? (y/n) ");       //TODO: flash buffer here
        char con;
        if(con == 'y')  continue_adding_pizzas = true;
        else continue_adding_pizzas = false;


        
    } while (i <= 10 && continue_adding_pizzas);
    

}