#include<stdio.h>

int main(){

    int op;

    printf("!!!!!!!!Welcome to the Hotel!!!!!!!!\n");
    printf("Select what you want -> \n");
    printf("1.Starters\n 2.Milk shakes\n 3.Deserts\n 4.Exit\n");

    
    scanf("%d",&op);

    switch(op)
    {
        case 1:
        printf("You have selected starters\n");
        break;

        case 2:
        printf("You have selected milk shakes\n");
        break;

        case 3:
        printf("You have selected deserts\n");
        break;

        case 4:
        printf("Thank you for visiting us\n");
        break;

        default:
        printf("Sorry try next time!\n");
        break;
    }

    return 0;


}