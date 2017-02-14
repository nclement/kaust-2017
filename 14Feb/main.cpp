#include <iostream>
using namespace std;

void forRefresher() {
    // for (INIT ; COND ; UPDATE) {
    //
    // }
    //    1            2      4
    for (int i = 1; i <= 10; i++) {
        //     3
        cout << i*i << endl;
    }
    // 5




    // Repeat the following 10 times:
    cout << "Hello, world!" << endl;


    cout << "Second version:" << endl;
    int i = 1;
    cout << 1*1 << endl;
    i = i + 1; // i=2
    cout << 2*2 << endl;
    i = i + 1; // i=3
    cout << 3*3 << endl;
    i = i + 1; // i=4
    cout << 4*4 << endl;
    i = i + 1; // i=5
    cout << i*i << endl;
    i = i + 1; // i=6
    cout << i*i << endl;
    i = i + 1; // i=7
    cout << i*i << endl;
    i = i + 1; // i=8
    cout << i*i << endl;
    i = i + 1; // i=9
    cout << i*i << endl;
    i = i + 1; // i=10
    cout << i*i << endl;
    i = i + 1; // i=11
}

void numberSequences() {
    // 1
    for (int i = 1; i <= 19; i+=3) {
        cout << i << " ";
    }
    cout << endl;
    // 2
    for(int i=2; i<=19; i+=2){
        cout << i << " ";
    }
    cout << endl;
    // 3
    for (int i=25; i>=5; i-=4){
        cout << i << " ";
    }
    cout << endl;
    // 3, again
    for (int i = 1; i <= 7; i++) {
        // What to put here?
        cout << -4 * i + 29 << " ";
    }
    cout << endl;
    // 4
    int add = 2;
    int previous = 2;
    for (int i = 1; i <= 7; i++) {
        cout << previous + add << " ";
        previous = previous + add;
        add += 2;
    }
    cout << endl;
}

void box() {
    /*
     *    *******
     *    *     *
     *    *     *
     *    *     *
     *    *******
     */
    int width = 2;
    int height = 2;

    // Top stars
    for (int i = 1; i <= width; i++) {
        cout << "*";
    }
    cout << endl;

    // Middle star-space-star
    for (int i = 1; i <= height - 2; i++) {
        cout << "*";
        for (int j = 1; j <= width - 2; j++) {
            cout << " ";
        }
        cout << "*";
        cout << endl;
    }

    // Bottom stars
    for (int i = 1; i <= width; i++) {
        cout << "*";
    }
    cout << endl;
}

void triangle() {
    /* print out the following:

       1****
       22***
       333**
       4444*
       55555

     */

    // A
    for (int i = 1; i <= 5; i++) {
        // B
        for (int j = 1; j <= i; j++) {
            // C
            cout << i;
            // D
        }
        for (int k = 1; k <= 5 - i; k++) {
            cout << "*";
        }
        cout << endl;
        // F
    }
}

int main() {

    triangle();

    return 0;
}