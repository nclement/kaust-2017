#include <iostream>

using namespace std;

void dayOfWeek() {
    int month;
    int day;
    int year;
    cout << "Enter the month: ";
    cin >> month;
    cout << "Enter the day: ";
    cin >> day;
    cout << "Enter the year: ";
    cin >> year;

    int y= year - (14 - month) / 12;
    int x = y + y / 4 - y / 100 + y / 400;
    int m = month + 12 * ((14 - month) / 12) -2;
    int d = (day + x + (31 * m) / 12) % 7;
    cout << d << endl;

}

void temperature() {
    double temp;
    cout << "Enter the temperature: ";
    cin >> temp;

    // If it's > 100, say "wow it's hot"
    // If it's < 50, say "brr it's cold"
    if (temp > 100) {
        cout << "wow it's hot" << endl;
    } else if (temp < 50) {
        cout << "brr it's cold" << endl;
    } else {
        cout << "It's a normal temperature" << endl;
    }
}

void giveChange() {
    int amount;
    cout << "Enter the amount of change: ";
    cin >> amount;
    int remaining = amount;

    // 1. Print out the number of quarters, dimes,
    // nickels, and pennies the user should receive.
    int numoneHundred = remaining/100;
    remaining = remaining%100;
    int numfifty = remaining/50;
    remaining = remaining%50;
    int numTwenty = remaining/20;
    remaining = remaining%20;
    int numten = remaining/10;
    remaining = remaining%10;
    int numfive = remaining/5;
    remaining = remaining%5;
    int numone = remaining;

    cout << "Give:\n";
    if (numoneHundred>1)
    {
        cout << numoneHundred << " Hundereds" << endl;
    }
    else if (numoneHundred == 1)
    {
        cout << "One Hundred" << endl;
    }
    else {
        cout << "give 'em nothing" << endl;
    }
    
    cout << numfifty << " fifties\n";
    cout << numTwenty << " twenties\n";
    cout << numten << " tens\n";
    cout << numfive << " fives\n";
    cout << numone << " ones\n";

    // 2. English is weird. If I have:
    //    0 quarters (don't say anything)
    //    1 quarter
    //    2 quarters
    //    Second step is to use proper English.



}

int main() {
    //dayOfWeek();
    //temperature();
    giveChange();

    /*
    double cost;
    cout << "Enter the cost: ";
    cin >> cost;
    cout << "The tip shoud be " << cost * 0.20 << endl;
     */

    return 0;
}