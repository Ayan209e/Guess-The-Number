#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(){
    srand(time(NULL));

    int result = (rand() % 100) + 1 ;
    return result;
}

void main(){

    system("cls");
    // Welcome
    printf("\n\n\t\t!!! Guess The Number !!!\n\n");
    printf("\t\tLet's Begin...\n");

    char choice;
    scanf("%c",&choice);

    // create variable to store the random number between 1 and 100
	int random_number = generateRandomNumber();
	
    system("cls");
    printf("\n\n\t\tI have generated a random number between 1 to 100\n");
    printf("\t\tNow It's Your Turn To Guess It..., Let's See If You Can Guess...   \n\n");
    // Ask for the first input from user
    printf("\t\tGuess The Number   ");
    
	// create variable to store user's guessed number and number of tries
	int user_guess, tries = 0;
	
	// start do while loop of the game
	do{
	   // take input from the user 
	   scanf("%d", &user_guess);
	   system("cls");
	   // if the guess is larger than the random number
	   if(user_guess > random_number){
	       
	       // tell the user the guess is greater than the number
	       printf("\n\n\t\tThe number you entered is greater");
	       tries++;
           printf("\n\n\n\t\tGuess a smaller number  ");
           
    
	   }
	   // else if the guess is smaller than the random number
	   else if(user_guess < random_number){
	       
	       // tell the user the guess is smaller than the number
	       printf("\n\n\t\tThe number you entered is smaller");
	       tries++;
           printf("\n\n\n\t\tGuess a bigger number  ");
	       
	   }
	   // else the guess is equal to the random number
	   else{
	       // user won the game
	       printf("\n\n\t\tCorrect Guess, You Won in %d tries!\n\n\n", tries);
           
	       
	   }
	    
	}
	while(user_guess != random_number);
}
