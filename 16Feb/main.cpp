#include <iostream>

/**
 * This program will print out the following ASCII art picture:

 Top
     /**\
    //**\\
   ///**\\\
  ////**\\\\
 /////**\\\\\


 Middle
+=*=*=*=*=*=*+
|../\..../\..|
|./\/\../\/\.|
|/\/\/\/\/\/\|
|\/\/\/\/\/\/|
|.\/\/..\/\/.|
|..\/....\/..|
+=*=*=*=*=*=*+
|\/\/\/\/\/\/|
|.\/\/..\/\/.|
|..\/....\/..|
|../\..../\..|
|./\/\../\/\.|
|/\/\/\/\/\/\|
+=*=*=*=*=*=*+

 Bottom
     /**\
    //**\\
   ///**\\\
  ////**\\\\
 /////**\\\\\

 */

using namespace std;

void top(int size) {
    for(int i=1; i<= 2 * size - 1;i++){
        for (int k=1; k<=size*2-i; k++) {
            cout<<" ";
        }

        for (int j = 1 ; j<=i;j++){
            cout<<"/";
        }
        cout<<"**";


        for (int j = 1 ; j<=i;j++){
            cout<<"\\";
        }

        cout<<endl;
    }
}

void bar(int width) {
    cout << "+";
    for(int b=0; b < 2 * width; b++){
        cout << "=*";
    }
    cout << "+";
    cout << endl;
}
void uptriangle(int height){
    for (int x = 0; x<height; x++) {
        cout << "|";
        for (int z = 0; z<height - 1 - x; z++)
            cout << ".";
        for (int c = 0; c<1+x; c++)
            cout << "/\\";
        for (int z = 0; z<2 * height - 2 - 2*x; z++)
            cout << ".";
        for (int c = 0; c<1+x; c++)
            cout << "/\\";
        for (int z = 0; z<height - 1 - x; z++)
            cout << ".";
        cout << "|";
        cout << endl;
    }
}
void downtriangle(int height){
    for (int x = 0; x<height; x++) {
        cout << "|";
        for (int z = 0; z < 0 + x; z++)
            cout << ".";
        for (int c = 0; c < height - x; c++)
            cout << "\\/";
        for (int z = 0; z < 2 * x; z++)
            cout << ".";
        for (int c = 0; c < height - x; c++)
            cout << "\\/";
        for (int z = 0; z < 0 + x; z++)
            cout << ".";
        cout << "|";
        cout << endl;
    }
}

void middle(int size) {
    bar(size);
    uptriangle(size);
    downtriangle(size);
    bar(size);
    downtriangle(size);
    uptriangle(size);
    bar(size);
}

void bottom(int size) {
    top(size);
}

// Asks user how many stars to print out (size),
// then prints them out:
//
// *
// **
// ***
void stars() {
    int l;
    cout<<"Size= ";
    cin>>l;

    for (int i=1; i<=l; i++){
        for(int j=1; j<=i; j++) {
            cout << "*";
        }
        cout<<endl;
    }

}

// Asks the user how many lines they want
// Prints out the following (4 lines):
//    *
//   **
//  ***
// ****
void stars2() {
    int l;
    cout<<"Size= ";
    cin>>l;

    for (int i=1; i<=l; i++){
        for (int k= 1; k<= l-i; k++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++) {
            cout << "*";
        }
        cout<<endl;
    }

}

void fibanoci() {
    int num;
    cout << "Enter the fib number: ";
    cin >> num;

    if (num <= 1) {
        cout << 0;
    }
    if (num <= 2) {
        cout << " 1";
    }
    int N1=0;
    int N2= 1;
    //cout << N1;
    //cout << " " <<N2;
    for(int i=1; i<=num - 2; i++){
        int N3= N1 + N2;
        cout<<" "<< N3;
        N1=N2;
        N2=N3;
    }
}

int main() {
    int size;
    cout << "Enter the size of the rocket: ";
    cin >> size;

    /*
    while (size < 0) {
        if (size < 0) {
            cout << "You're a moron. Try again: ";
            cin >> size;
        }
        if (size < 0) {
            cout << "You're a bigger idiot. Try again: ";
            cin >> size;
        }
        if (size < 0) {
            cout << "Do you have peanuts for brains? Try again: ";
            cin >> size;
        }
        if (size < 0) {
            cout << "Do you even think?? Try again: ";
            cin >> size;
        }
    }
     */
    while (size < 0) {
        cout << "You're a bigger idiot. Try again: ";
        cin >> size;
    }

    top(size);
    middle(size);
    bottom(size);
    //stars();
    //stars2();
    //fibanoci();
    return 0;
}


