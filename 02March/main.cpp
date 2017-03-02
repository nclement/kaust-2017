#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

void isPrime(int n) {
    // Tests for
    //   n % 1 == 0
    //   n % 2 == 0
    //   ...
    //   n % n == 0?



    int factors = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            factors++;
        }
    }

    if (factors == 1) {
        cout << "it's prime!" << endl;
    } else {
        cout << "nope, it's not prime!" << endl;
    }
}

void getPrimes() {
    int num;
    cout << "Enter a number, or -1 to quit: ";
    cin >> num;
    while(num != -1) {
        isPrime(num);
        cout << "Enter a number, or -1 to quit: ";
        cin >> num;
    }
}

void averageUser() {
    // Step 1: Prompt the user for how many numbers they have
    cout << "How many numbers would you like to enter? ";
    int howMany;
    cin >> howMany;
    // Step 2: Ask the user for that many numbers
    double sum = 0;
    for (int i = 1; i <= howMany; i++) {
        cout << "Enter number " << i << ": ";
        double number;
        cin >> number;
        sum += number; // sum = sum + number
    }
    // Step 3: Output the average.
    cout << "The average is " << sum / howMany << endl;
}

int main() {
    ifstream infile;
    infile.open("campmabry_tmax_1015_F.txt");
    if (infile.is_open()) {
        cout << "It's good!" << endl;

        double temp;
        double sum = 0;
        int howMany = 0;

        while(infile >> temp) {
            sum += temp;
            howMany++;
        }
        cout << "Average is " << sum / howMany << endl;

    } else {
        cout << "I've done something wrong :(" << endl;
        cout << "Error: " << strerror(errno) << endl;
    }

    return 0;
}