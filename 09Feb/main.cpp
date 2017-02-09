#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void somethingElse() {
    int x = 10;
    cout << "Help" << endl;
}

void newtons() {
    cout << "Enter a number: ";
    int N;
    cin >> N;
    double guess = N/2;
    cout << "My guess is: " << guess << " vs " << sqrt(N) << endl;
    for (int i = 1; i <= 10; i++) {
        guess = (N / guess + guess) / 2.0;
        cout << "My guess is: " << setprecision(20) << guess << " vs " << sqrt(N) << endl;
    }
}

void ifCheck() {
    int tempo;
    cout << "Enter the tempo: ";
    cin >> tempo;

    if (tempo > 140) {
        cout << "this is dubstep" << endl;
    } else if (tempo < 30) {
        cout << "this is waltz" << endl;
    } else if (tempo < 20) {
        cout << "this is less than 20" << endl;
    } else {
        cout << "I don't know what this is" << endl;
    }
}

void pizzaArea() {
    int people2;
    cout << "Enter the number of people: ";
    cin >> people2;

    int people = people2;
    int large = people / 7;
    people = people % 7;
    int medium = people / 3;
    people = people % 3;
    int small = people;
    double area = (large) * (8 * 8) * (3.14159);
    area = area + (medium) * (7 * 7) * (3.14159);
    area = area + (small) * (5 * 5) * (3.14159);
    double area2 = area / people2;
    cout << "For " << people2 << " people, area per person is: " << area2 << "in^2" << endl;
}

void printPeopleArea() {

    int small, medium, large, people;
    double area, area2;
    double maxArea = -1; // Sentinel value
    int maxAreaPeople = 0;
    double minArea = -1;
    int minAreaPeople = 0;

    for (int i = 1; i <= 100; i++) {
        // Run the following code for 1 <= people2 <= 100
        int people2 = i;
        people = people2;
        large = people / 7;
        people = people % 7;
        medium = people / 3;
        people = people % 3;
        small = people;
        area = (large) * (8 * 8) * (3.14159);
        area = area + (medium) * (7 * 7) * (3.14159);
        area = area + (small) * (5 * 5) * (3.14159);
        area2 = area / people2;
        cout << "For " << people2 << " people, area per person is: " << area2 << "in^2" << endl;

        // Before the loop, I sent maxArea to be -1, so I know it's a bad value
        if (maxArea < 0) {
            // Set these both to a valid thing.
            maxArea = area2;
            minArea = area2;
        }

        // Check and see if we're greater than the max
        if (area2 > maxArea) {
            maxArea = area2;
            // Remember the number of people we used.
            maxAreaPeople = people2;
        }
        // See if we're less than the min
        if (area2 < minArea) {
            minArea = area2;
            minAreaPeople = people2;
        }
    }

    cout << "The max area is " << maxArea << " with " << maxAreaPeople << " people" << endl;
    cout << "The min area is " << minArea << " with " << minAreaPeople << " people" << endl;
}

int main() {
    //ifCheck();
    //printPeopleArea();
    //pizzaArea();
    newtons();

    return 0;
}