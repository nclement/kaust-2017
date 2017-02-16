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

void top() {

    for(int i=1; i<=5;i++){


        for (int k=1; k<=6-i; k++) {

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

void bar() {
    cout << "+";
    for(int b=0; b < 6; b++){
        cout << "=*";
    }
cout << "+";
    cout << endl;

}
void uparrow(){
    for(int i =1; i<=3; i++)
        cout<<
}
void middle() {
bar();
    bar();
    bar();
}

void bottom() {
    top();
}

int main() {
    top();
    middle();
    bottom();
    return 0;
}