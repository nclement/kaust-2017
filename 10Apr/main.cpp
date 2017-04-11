#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

string decToBin(int n, int nBits) {
    string ret = "";
    for (int i = nBits - 1; i >= 0; i--) {
        int pow2 = pow(2, i);
        if (n >= pow2) {
            ret += "1 ";
            n -= pow2;
        } else {
            ret += "0 ";
        }
    }

    return ret;
}

vector<bool> decToBinVec(int n, int nBits) {
    vector<bool> ret;
    for (int i = nBits - 1; i >= 0; i--) {
        int pow2 = pow(2, i);
        if (n >= pow2) {
            ret.push_back(true);
            n -= pow2;
        } else {
            ret.push_back(false);
        }
    }

    return ret;
}

vector<bool> getValues(int n, int nBits) {
    vector<bool> results;
    for (int i = 0; i < n; i++) {
        cout << " " << i + 1 << "/" << n << ": "
             << decToBin(i, nBits) << "is ";
        bool res;
        cin >> res;
        results.push_back(res);
    }

    return results;
}

vector<char> varNames(int n) {
    vector<char> vars;
    for (int i = 0; i < n; i++) {
        vars.push_back('a' + i);
    }
    return vars;
}

int getTrueValues(vector<char> names, vector<bool> truths) {
    // Count the number of true values.
    int nTruths = 0;
    for (int i = 0; i < truths.size(); i++) {
        if (truths[i]) nTruths++;
    }

    cout << "Your boolean table has " << nTruths << " entries that correspond to true. "
         << "I will call the inputs ";
    for (int i = 0; i < names.size() - 1; i++) {
        cout << names[i] << ", ";
    }
    cout << "and " << names[names.size() - 1] << ".\n";

    return nTruths;
}

void printExpression(vector<bool> truths, int numTrue, vector<char> varNames) {
    cout << "Your boolean expression is:\n";
    cout << "out = ";
    bool first = true;
    for (int i = 0; i < truths.size(); i++) {
        // See if this is a line we're supposed to do.
        if (truths[i]) {
            // Need to do something special on the first line.
            if (first) {
                first = false;
            } else {
                cout << "     + ";
            }
            // Everyone prints out the values.
            cout << "(";
            vector<bool> line = decToBinVec(i, varNames.size());
            for (int i = 0; i < line.size() - 1; i++) {
                if (!line[i]) cout << "~";
                cout << varNames[i] << " * ";
            }
            // Make sure to print out the last thing (since it doesn't need the "*" afterward)
            int lastPos = line.size() - 1;
            if (!line[lastPos]) cout << "~";
            cout << varNames[lastPos] << ")\n";
        }
    }
}

/**
 * Prints out the binary form of number n, given nBits bits
 *
 * For example, 5265 with 12 bits should produce 1010010010001
 *
 * @param n The number to print out
 * @param nBits The number of bits in the solution
 */
void printBinary(int n, int nBits) {
    for (int i = nBits - 1; i >= 0; i--) {
        int power = pow(2, i);
        if (power <= n) {
            n -= power;
            cout << "1";
        } else {
            cout << "0";
        }
    }
    cout << endl;
}

int main() {
    printBinary(5265, 13);

    cout << "How many inputs does your circuit have? ";
    int n;
    cin >> n;
    vector<char> names = varNames(n);

    int numLines = pow(2, n);
    cout << "Your boolean table has " << numLines << " total lines. "
         << "Enter 0 or 1 for each true or false value here:\n";
    vector<bool> truths = getValues(numLines, n);

    int numTrue = getTrueValues(names, truths);
    printExpression(truths, numTrue, names);

    cout << "\nNow go create the circuit!\n";
    return 0;
}