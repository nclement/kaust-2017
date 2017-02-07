#include <iostream>
#include <iomanip>
using namespace std;

void printPeopleArea() {
    int small, medium, large, people;
    double price, price2, area, area2;
    int people2 = 1;
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
    cout << "For " << people2 << " people, area per person is: " << area2 << endl;

}

void simpleForLoop() {
    for (int i = 8; i <= 8; i -= 1000) {
        cout << i << ": I am so smart" << endl;
        cout << "  next: " << i - 1000 << endl;
    }
}

int main() {
    printPeopleArea();


    return 0;
}