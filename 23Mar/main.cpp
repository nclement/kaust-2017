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
    cout << endl;

    vector<string> names;
    vector<int> id;

    for(int i=0;i<users;i++)
    {
        cout << "Enter Student " << i+1 << " Name: ";
        string x;
        cin >> x;
        names.push_back(x);
        cout << endl << "Enter Student " << i+1 << " ID: ";
        int n;
        cin >> n;
        id.push_back(n);
    }

    // Print out the database
    for (int i = 0; i < users; i++) {
        cout << "Student " << i + 1 << ": "
             << names[i] << " with id " << id[i] << endl;
    }

    // Search the database
    string searchName = "";
    while(searchName != "QUIT") {

        cout << "What name do you want to search for [type QUIT to quit]? ";
        cin >> searchName;

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
    }

    return 0;
}