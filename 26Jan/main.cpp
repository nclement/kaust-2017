#include <iostream>

using namespace std;

void top2bottom() {

}

void _this_() {

}

/**
 * bad
 *
void 2hot2handle() {

}
 */

void top() {
    cout << "  ______" << endl;
    cout << " /      \\" << endl;
    cout << "/        \\" << endl;
}

void bottom() {
    cout << "\\        /" << endl;
    cout << " \\______/" << endl;
}

void hat() {
    // Draw the hat
    top();
    cout << "+--------+" << endl;
}

void stopSign() {
    // Draw the Stop Sign
    top();
    cout << "|  STOP  |" << endl;
    bottom();

    cout << "\n";
}

void cupPlate() {
    // Draw the cup and plate
    bottom();
    cout << "+--------+" << endl;
    cout << "\n";
}

void cap() {
    // Draw the cap
    top();
    cout << "\n";
}

void say10() {
    cout << "All work and no play makes Jack a dull boy" << endl;
    cout << "All work and no play makes Jack a dull boy" << endl;
    cout << "All work and no play makes Jack a dull boy" << endl;
    cout << "All work and no play makes Jack a dull boy" << endl;
    cout << "All work and no play makes Jack a dull boy" << endl;
    cout << "All work and no play makes Jack a dull boy" << endl;
    cout << "All work and no play makes Jack a dull boy" << endl;
    cout << "All work and no play makes Jack a dull boy" << endl;
    cout << "All work and no play makes Jack a dull boy" << endl;
    cout << "All work and no play makes Jack a dull boy" << endl;
}

void say20() {
    say10();
    say10();
}

int main() {
    cap();

    cupPlate();

    stopSign();

    hat();
    cout << "All work and no play makes Jack a dull boy" << endl;
    cout << "All work and no play makes Jack a dull boy" << endl;
    cout << "All work and no play makes Jack a dull boy" << endl;
    cout << "All work and no play makes Jack a dull boy" << endl;
    cout << "All work and no play makes Jack a dull boy" << endl;
    cout << "All work and no play makes Jack a dull boy" << endl;
    cout << "All work and no play makes Jack a dull boy" << endl;
    cout << "All work and no play makes Jack a dull boy" << endl;
    cout << "All work and no play makes Jack a dull boy" << endl;
    cout << "All work and no play makes Jack a dull boy" << endl;
    cout << "All work and no play makes Jack a dull boy" << endl;
    cout << "All work and no play makes Jack a dull boy" << endl;
    cout << "All work and no play makes Jack a dull boy" << endl;
    cout << "All work and no play makes Jack a dull boy" << endl;

    cout << "All work and no play makes Jack a dull boy" << endl;
    cout << "All work and no play makes Jack a dull boy" << endl;
    cout << "All work and no play makes Jack a dull boy" << endl;
    cout << "All work and no play makes Jack a dull boy" << endl;

    return 0;
}