#include <iostream>
#include <vector>
using namespace std;

int x;
string y;

int h=0;
vector <string> names;

// returns the number, doubled
int doubleNum(int a) {
   return a * 2;
}
// toupper(char c)
string makeUpperCase(string name) {
    string newString = "";
    for (int i = 0; i < name.size(); i++) {
        newString += toupper(name[i]);
    }
    return newString;
}

int main() {
    string upperBasem = makeUpperCase("Basem");
    cout << upperBasem << endl;

    cout << "How many people would you like to plan for? ";
    cin >> x;
    cin.ignore();
    for(int i=0; i<x; i++){
        cout << "Enter the name for person " << i+1 << ":";
        getline (cin,y);
        string upperName = makeUpperCase(y);
        names.push_back(upperName);
    }


    string Search = "";
    cout << "Who would you like to search for (or enter \"QUIT\" to quit)? ";
    getline(cin,Search);
    string upperSearch = makeUpperCase(Search);
    while (Search != "QUIT" && Search != "quit") {
        int count=0;
        for (int i=0; i<x; i++){
            if(upperSearch==names[i]){
                cout << "This person is allowed." << endl;
                count++;
            }

        }
        if (count==0){
            cout <<"This person is NOT allowed."<< endl;
        }
        cout << "Who would you like to search for (or enter \"QUIT\" to quit)? ";
        getline(cin,Search);

    }
    if (Search == "QUIT"){
        cout << endl;
        cout << "Enjoy your party!" << endl;
    }

    return 0;
}