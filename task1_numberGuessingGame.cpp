#include <iostream>
using namespace std;

int main() {

    srand((unsigned) time(NULL));  // Provided a seed value to generate random number

    int minLimit, maxLimit;
    cout << "Enter minimum and maximum limits respectively: " << endl;
    cin >> minLimit >> maxLimit;   // Taking minimum and maximum limits to generate random number

    int range = maxLimit - minLimit + 1; // Defining range

    int random = minLimit + (rand() % range); // Generating random number between range

    

    return 0;
}