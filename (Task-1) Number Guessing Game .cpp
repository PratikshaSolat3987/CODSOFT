#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main () {
	srand(time(0));
	//seed the random number generator with current time
	int randomNumber = rand() % 100+1;
	// Generate a random number between 1 and 100
	int guess;
	int attemps = 0; 
	cout<< "Welcome to the Number Guessing Game!" <<endl;
	cout<<"I have generated a ranadom number between 1 and 100. Can you guess it?" <<endl;
	do{
		cout<<"Enter your guess:";
		cin>> guess;
		'attempts++';
		if (guess> randomNumber)
		{
			cout<<"Too high! Try again." <<endl;
		} else if (guess< randomNumber){
			cout<<"Too low! Try again."<<endl;
		}else{
			cout<<"Congratulations! You guessed the correct numberin "<< 'attempts' <<"attempts." <<endl;
		}
	} while (guess!= randomNumber);
	return 0;
	} 
