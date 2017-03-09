#include <iostream>
#include <fstream>
using namespace std;


void tempDiffs () {
    ifstream in;
    in.open("../data.txt");
    if(!in.is_open()) {
        cout << "Error: Couldn't open the file." << endl;
        return;
    }

    int days = 0, lines = 0;
    double maximum = -10000, minimum = 10000, total;

    double tmax, tmin;

    while(!in.eof()) {
        //cout << "Enter the minimum for this day: ";
        in >> tmin;
        //cout << "Enter the maximum for this day: ";
        in >> tmax;
        cout << "The difference was " << tmax - tmin << endl;
    }
}

// Take all
void birthdays() {
    ifstream inf;
    inf.open("../gpas.txt");

    // Ignore the first line.
    string firstLine;
    getline(inf, firstLine);

    int studentID;
    double gpa;
    string name;

    while (!inf.eof()) {
        inf >> studentID;
        inf >> gpa;
        getline(inf, name);

        cout << "Student id [" << studentID << "] gpa " << gpa << " and name [" << name << "]\n";
    }
}

int main() {
    double r;
    cout <<"Enter the minimum rating: ";
    cin>>r;
    std::wcout.imbue(std::locale("en_US.UTF-8"));
    wcout << "hello" << endl;
    int number;
    ifstream ratings;
    ratings.open("/Users/nclement/Teaching/kaust/2017/in_class/ratings.list.txt");
    if (ratings.is_open()){
        while (!ratings.eof()) {
            ratings >> number;
        }
    }
    // Read from the ratings.list.txt file
    // Ask the user for the minimum rating
    // Search through the file and print out all movies that have a rating higher
    // than the user-specified amount.

    return 0;
}
