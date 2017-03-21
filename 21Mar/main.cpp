#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    ifstream infile;
    infile.open("../few.txt");
    if (infile.is_open()) {
        cout << "It's good!" << endl;

        double temp;
        double sum = 0;
        int howMany = 0;
        int numOverAvg = 0;

        vector<double> temps;
        vector<string> imageFileNames;

        while(infile >> temp) {
            sum += temp;
            howMany++;
            temps.push_back(temp);
        }

        cout << "the first temperature is " << temps[0] << endl;
        cout << "the last temperature is " << temps[temps.size() - 1] << endl;

        double average = sum / howMany;
        cout << "Average is " << sum / howMany << endl;


        for (int i = 0; i < temps.size(); i++) {
            if (temps[i] > average) {
                numOverAvg++;
            }
        }
        for (double t : temps) {
            cout << " " << t << endl;
        }

        cout << "There are " << numOverAvg << " days over the average" << endl;

    } else {
        cout << "I've done something wrong :(" << endl;
        cout << "Error: " << strerror(errno) << endl;
    }

    return 0;
}