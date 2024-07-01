#include <iostream>
using namespace std;

int main() {

    srand((unsigned) time(NULL));  // Provided a seed value to generate random number

    int minLimit, maxLimit;
    cout << "Enter minimum and maximum limits respectively: " << endl;
    cin >> minLimit >> maxLimit;   // Taking minimum and maximum limits to generate random number

    int range = maxLimit - minLimit + 1; // Defining range

    int random = minLimit + (rand() % range); // Generating random number between range

    int guess;
    cout << "Guess the random number: " << endl;
    cin >> guess;  // Taking a number from a user as a guess

    while (guess != random) {
        if (guess < random) {
            cout << "Try again! Guess is too low." << endl;
        } else {
            cout << "Try again! Guess is too high." << endl;
        }
        cout << "Guess the random number: " << endl;
        cin >> guess;
    }  // Code to deal with the situation when guessed number is not equal to random number

    cout << "Congratulations! You guessed the number correctly." << endl; // Till here the number is guessed correctly.


    return 0;
}