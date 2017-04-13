#include <iostream>
#include <fstream>
#include <set>

using namespace std;

// toupper(char c)
string fixWord(string name) {
    string newString = "";
    for (int i = 0; i < name.size(); i++) {
        if (isalpha(name[i])) {
            newString += tolower(name[i]);
        }
    }
    return newString;
}

int main() {
    ifstream inf;
    //inf.open("../aesops_fables.txt");
    //inf.open("../the_odyssey.txt");
    inf.open("../brothers_k.txt");
    set<string> words;

    int numWords = 0;
    string s;
    while(!inf.eof()) {
        inf >> s;
        string newWord = fixWord(s);
        words.insert(newWord);
        numWords++;
    }
    cout << "The number of words is: " << numWords << endl;
    cout << "The number of unique words is: " << words.size() << endl;

    int w = 0;
    for (string s : words) {
        w++;
        cout << s << endl;

        if (w > 150) {
            break;
        }

    }

    string Search = "";
    cout << "Who would you like to search for (or enter \"\" to quit)? ";
    cin >> Search;

    while (Search != "" && Search != "") {

        if (words.find(Search) != words.end()) {
            cout << "Found the word!" << endl;

            auto found = words.find(Search);

            found--;
            cout << *found << endl;
            found++;
            cout << *found << endl;
            found++;
            cout << *found << endl;

        } else {
            cout << "The word is not in the set" << endl;
        }

        cout << "Who would you like to search for (or enter \"\" to quit)? ";
        cin >> Search;
    }
    if (Search == "QUIT"){
        cout << endl;
        cout << "Enjoy your day!" << endl;
    }


    return 0;
}