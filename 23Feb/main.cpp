#include <iostream>
#include <cstdlib>


using namespace std;

int main() {
    // Set the random seed, based off the current time.
    srand(time(NULL));
    cout << "The time is: " << time(NULL) << endl;
    // Random number between 0 and 104
    int randNum = rand() % 105;
    // Random number between -50 and 49
    int randNum2 = (rand() % 101) - 50;


    // Task 1:
    // Ask the user for the highest and lowest number
    // Generate a random number between the highest and lowest (inclusive)
    int high;
    cout<<"Enter the highest number";
    cin>>high;
    int low;
    cout<<"Enter the lowest number";
    cin>>low;
    int dif = (high - low) + 1;
    int faisal = (rand() % dif) + low;
    //cout<< "Don't cheat, but this is the number: " << faisal << endl;

    // Task 2:
    // Ask the user for an input until they enter the correct number:
    int userInput;
    cout << "Enter a guess: ";
    cin >> userInput;

    int numGuesses = 1;
    // Keep going as long as it's incorrect
    while (faisal != userInput) {
        // Report if it's high or low
        if (userInput > faisal) {
            cout << "Nope. Too high. ";
        } else {
            cout << "Nope. Too low. ";
        }

        // Make sure to guess again
        cout << "Guess again: ";
        cin >> userInput;
        numGuesses++;
    }
    cout << "Correct!" << endl;
    cout << "It took you " << numGuesses << " guesses" << endl;

}