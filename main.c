#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    int loopAddition = 0;

    char symbol[25];

    double number;

    double number2;

    double percents;

    int i;

    double sum = 0;

    double result = 0;

    void printMenu(void);

    void addition(void);

    void subscription(void);

    void multiplication(void);

    void division(void);

    void findPercents(void);

    void findFactoriel(void);

    void onStep(void);

    void findModulus(void); //find remainder



int main()
{

    printMenu();

    do {

        printf("\n -- Enter your choice: ");

        scanf("%s", symbol);

        printf("\n");

        //system("cls");

        switch(symbol[0]) {

            case 'h':
            case 'H': printMenu();
            break;

            case '+' :  addition();
            break;

            case '-' : subscription();
            break;

            case 'x' : multiplication();
            break;

            case '/' : division();
            break;

            case '%' : findPercents();
            break;

            case '!' : findFactoriel();
            break;

            case '^' : onStep();
            break;

            case '?' : findModulus();
            break;

            case 'q':
            case 'Q': printf("\n -- GoodBye! --\n");
            break;

            case 'c':
            case 'C': system("cls");
            break;

            default: printf("\n -- Invalid choice! --\n");
            break;
        }

    } while(symbol[0] != 'q' && symbol[0] != 'Q');


    printf("\n\n\n");
    return 0;
}

printMenu() {

    printf("\n -- Calculator --");
    printf("\n\n oo Enter \'q\' or \'Q\' for quit");
    printf("\n oo Enter \'h\' or \'H\' for see all options");
    printf("\n oo Enter \'c\' or \'C\' for clear screen");

    printf("\n____________________________________________");

    printf("\n\n -- Enter + for addition");
    printf("\n -- Enter - for subscription");
    printf("\n -- Enter x for multiplication");
    printf("\n -- Enter / for division");
    printf("\n -- Enter %% for find percents of number");
    printf("\n -- Enter ! for find factorial of number");
    printf("\n -- Enter ^ for enter number and step");
    printf("\n -- Enter ? for find Modulus/Remainder of numbers");

    printf("\n");

}

addition() {

 printf(" -- How much numbers you want to addition: ");

                scanf("%d", &loopAddition);

                for(i = 0; i < loopAddition; i++) {

                    printf("\n -- Enter your number[%d]: ", i+1);

                    scanf("%lf", &number);

                    sum = sum + number;

                }

                printf("\n -- Result of addition of %d numbers is %.2f --\n", loopAddition, sum);

                sum = 0;

}

subscription() {

        printf(" -- Enter your number 1: ", number);

        scanf("%lf", &number);

        printf("\n -- Enter your number 2: ", number2);

        scanf("%lf", &number2);

        result = number - number2;

        printf("\n -- %.2f - %.2f = %.2f -- \n", number, number2, result);

}

multiplication() {

        printf(" -- Enter your number 1: ", number);

        scanf("%lf", &number);

        printf("\n -- Enter your number 2: ", number2);

        scanf("%lf", &number2);

        result = number * number2;

        printf("\n -- %.2f x %.2f = %.2f -- \n", number, number2, result);

}

division() {


        printf(" -- Enter your number 1: ", number);

        scanf("%lf", &number);

        printf("\n -- Enter your number 2: ", number2);

        scanf("%lf", &number2);

        if(number2 == 0) {
            printf("\n -- You can\'t divide with 0\n");
        } else {

            result = number / number2;

            printf("\n -- %.2f / %.2f = %.2f -- \n", number, number2, result);
        }

}

findPercents() {


        printf(" -- Enter your number: ", number);

        scanf("%lf", &number);

        printf("\n -- Enter percent you want to find: ", percents);

        scanf("%lf", &percents);

        result = number * percents / 100;

        printf("\n -- %.2f%% of number %.2f = %.2f -- \n", percents, number, result);

}

findFactoriel() {

     printf(" -- Enter your number: ", number);

        scanf("%lf", &number);

        sum = number;

        for(i = (number-1); i > 0; i-- ) {

            sum = sum * i;

        }

        printf("\n -- The factorial of number %.2f is %.2f -- \n", number, sum);

        sum = 0;

}

onStep() {

        printf(" -- Enter your number: ", number);

        scanf("%lf", &number);

        printf("\n -- Enter the step for the number: ", number2);

        scanf("%lf", &number2);

        result = pow(number, number2);

        printf("\n -- %.2f on step %.2f = %.2f -- \n", number, number2, result);

}

findModulus() {

        int numberr;

        int numberr2;

        int res = 0;

        printf(" -- Enter your number 1: ", numberr);

        scanf("%d", &numberr);

        printf("\n -- Enter your number 2: ", numberr2);

        scanf("%d", &numberr2);

        res = numberr % numberr2;

        printf("\n -- %d modulo %d = %d -- \n", numberr, numberr2, res);

        res = 0;

}


