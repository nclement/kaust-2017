#include <iostream>

using namespace std;

void practice() {
    // Remember:
    // 1. Order of operations (PEMDAS)
    // 2. int division is weird
    // 3. If you have a double and an int, it makes a double


    // Basem
    cout << 7 / 3 * 1.2 + 3 / 2 << endl;

    // Mirza
    cout << 2.5 + 10 / 3 * 2.5 - 6 / 4 << endl;
}

void variables() {
    // 1. Declare
    // 2. Initialize
    // 3. Use it

    double height;
    height = 79.4;
    double height2 = 68.3;

    int average = height + height2;
    average = average / 2;

    cout << "The average is: " << average << endl;

    int x = 5;   // x:5
    int y = 2;   // x:5, y:2
    int t = x;   // t:5, x:5, y:2
    x = y;       // t:5, x:2, y:2
    y = t;       // t:5, x:2, y:5

    cout << "x is: " << x << " and y is: " << y << endl;
}

void dayOfWeek() {
    int month = 2;
    int day = 17;
    int year = 2014;

    /*
     * For the Gregorian Calendar
       Given month, day, and year, calculate day of week
       months, 1 = January, 2 = February, ... 12 = December

        y = year - (14 - month) / 12
        x = y + y / 4 - y / 100 + y / 400
        m = month + 12 * ((14 - month) / 12) - 2
        d = (day + x + (31 * m) / 12) % 7

        0 = Sunday, 1 = Monday, 2 = Tuesday
     */

    // Should get 2

    int y= year - (14 - month) / 12;
    int x = y + y / 4 - y / 100 + y / 400;
    int m = month + 12 * ((14 - month) / 12) -2;
    int d = (day + x + (31 * m) / 12) % 7;
    cout << d << endl ;

}


int main() {
    dayOfWeek();

    return 0;
}