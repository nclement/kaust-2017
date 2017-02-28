#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int x = 6;
    // Create an output file that has the following format:
    //   NUMBER1 HAILSTONE_NUMBER1
    //   NUMBER2 HAILSTONE_NUMBER2
    //
    // Goes from 1 to 10000

    ofstream output;
    output.open("HailStone.txt");


    for(int i=1; i<=10000; i++) {
        int n = i;
        int stepNum = 0;
        while (n > 1) {
            if (n % 2 == 0) {
                cout << n << " is even, so I take half: ";
                n = n / 2;
                cout << n << endl;
            } else {
                cout << n << " is odd, so I take 3n + 1: ";
                n = 3 * n + 1;
                cout << n << endl;
            }
            stepNum++;
        }
        if (n == 1) {
            cout << "The process took " << stepNum << " steps to reach 1" << endl;
        }
        output << i << " " << stepNum << endl;
    }

    output << "Hello, world!" << " " << x << endl;
    output.close();
}