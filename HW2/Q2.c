#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define A 10

//Hasan Hut 150119764

void W(int n){  // Function to print W
    int i, j,counter = 0;
    int width = (2 * n) - 1;
    for (i = 0; i < n; i++) {
        for (j = 0; j <= width*2; j++) {
            if (j == counter || j == width - counter - 1 || j==width + counter -1  ||  j == width*2 - counter - 2)
                printf("*");
            else
                printf(" ");
        }
        counter++;
        printf("\n");
    }
}
void Y(int n){ // Function to print Y
    int i, j;
    int counter = 1;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (j == counter || j == n - counter+1)
                printf("*");
            else
                printf("  ");
        }
        printf("\n");
        if (i <= n / 2)
            counter++;
    }
}
void Z(int n){ // Function to print Z
    int i, j, counter = n - 1;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == counter)
                printf("*");
            else
                printf(" ");
        }
        counter--;
        printf("\n");
    }
}
void X(int n){ // Function to print X
    int i, j;
    int counter = 1;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (j == counter|| j == n - counter+1)
                printf("*");
            else
                printf(" ");
        }
        counter++;
        printf("\n");
    }
}
void end_game(){ //should the program end or continue?
    char go[A];  // includes Yes or No
    printf("Would you like to continue? (Y or N) : ");
            scanf("%s",go);
            if(strcmp(go,"Y")==0){
                main();
            }else if(strcmp(go,"N")==0){ // if entered N, will program close
                printf("Goodbye :)\n");
                exit(EXIT_SUCCESS);
            }else{
                printf("Goodbye :)\n"); // if entered nothing, will program close
                exit(EXIT_SUCCESS);
            }
}
int main(){
    int number;
    char letter[A]; //all available letters
    printf("Welcome to the letter pointer.\n");
    printf("Enter the size: ");
    int f=1;
    while(f){  //checks whether the entered number is greater than 5 and odd
        scanf("%d",&number);
        if(number >= 5 && number % 2 == 1){
            f--;
        }else{
            printf("Invalid Size.");
            printf("Enter the size again:");
        }
    }
    int m = 1;
    printf("Enter the letter: ");
    while(m>0){ //checks if the entered letter is correct
        scanf("%s",&letter);

        if(strcmp(letter,"W")==0){
            W(number); // Invoking W letter function
            end_game();
        }
        else if(strcmp(letter,"X")==0){
            X(number); // Invoking X letter function
            end_game();
        }
        else if(strcmp(letter,"Y")==0){
            Y(number); // Invoking Y letter function
            end_game();
        }
        else if(strcmp(letter,"Z")==0){
            Z(number); // Invoking Z letter function
            end_game();
        }
        else{
            printf("Invalid letter.");
            printf("Enter the letter again:");
        }
    }
}
