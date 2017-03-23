#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
    // Design a student database
    // Store student names and IDs.

    // 1. Ask the user how many people they would like to store
    // 2. For each person, do the following:
    //    2a. Ask for the name
    //    2b. Ask for the student ID
    // 3. Print out the database (each student and their ID)
    // 4. Query the database: Ask the user for a name, if it
    //    exists, tell the user the student ID.

    int users;
    cout << "Enter number of entries: ";
    cin >> users;
    // This will make sure we don't have any extra characters.
    string junk;
    getline(cin, junk); // throw away this stuff.
    cout << endl;

    vector<string> names;
    vector<int> id;

    for(int i=0;i<users;i++)
    {
        cout << "Enter Student " << i+1 << " Name: ";
        string x;
        // Use getline instead of cin to get the entire line (including spaces)
        getline(cin, x);

        names.push_back(x);
        cout << "Enter Student " << i+1 << " ID: ";
        int n;
        cin >> n;
        id.push_back(n);
        // This will make sure we don't have any extra characters.
        string junk;
        getline(cin, junk); // throw away this stuff.
    }

    // Print out the database
    for (int i = 0; i < users; i++) {
        cout << "Student " << i + 1 << ": "
             << names[i] << " with id " << id[i] << endl;
    }

    // Search the database
    string searchName = "";
    // "Prime the pump" here.
    cout << "What name do you want to search for [type QUIT to quit]? ";
    getline(cin, searchName);
    while(searchName != "QUIT") {
        int count = 0;
        for (int i = 0; i < users; i++) {
            if (searchName == names[i]) {
                cout << "Found name with id " << id[i] << endl;
                count++;
            }
        }

        if (count == 0) {
            cout << "No name found" << endl;
        }

        // Need to have this again at the end of the loop to ask the user
        // for more searching.
        cout << "What name do you want to search for [type QUIT to quit]? ";
        getline(cin, searchName);
    }

    cout << "Goodbye!" << endl;
    return 0;
}