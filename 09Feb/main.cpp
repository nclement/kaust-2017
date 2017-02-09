#include <iostream>
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
        cout << "My guess is: " << guess << " vs " << sqrt(N) << endl;
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
    double price, price2, area, area2, z;
    for (int people2 = 1; people2 <= 100; people2++) {
        // Run the following code for 1 <= people2 <= 100

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
    }
}

int main() {
    //ifCheck();
    //printPeopleArea();
    //pizzaArea();
    newtons();

    return 0;
}