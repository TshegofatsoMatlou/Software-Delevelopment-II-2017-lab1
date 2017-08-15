//Vincent Tshegofatso Matlou and Oscar Mahlangu
//Guessing-game
//27 July 2017

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	
	int chances = 5; //Number of chances for the user to try
	int user_input = 0; //User input variable
	
	srand(time(0)); //Generates new random numbers everytime this code runs
	int random_number = 1 + (rand()%100); //Generates a random number and stores it in random_number variable
	
	cout<<"Guess a number between 1 and 100. You have 5 chances. "<< endl; 
	cin >> user_input; //takes in input from user and stores it in user_input variable
	
	while(chances != 0){
		
		if(user_input == random_number){ // compares the user input to the random number
			cout << "You win" << endl; // Prints out message in inverted commas if above condition (line 23) is met
			break; // Breaks out of the loop if condition in line 23 is met
		}
		else if(user_input < random_number){
			cout << "Guess higher" << endl;
		}
		else if(user_input > random_number){
			cout << "Guess lower" << endl;
		}
		
		chances--; // decrements chances by 1
		
		cin >> user_input;
	}
	
	if(chances == 0){ // checks if chances variable is 0
		cout << "You lose" << endl; //Outputs message in inverted commas if above condition (line 38) is met
	}
	
	//cout << random_number << endl;
}