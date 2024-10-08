// Tutorial3_Conditions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// Run on the assumption everything is under 'std'
using namespace std;

int main()
{
    // Assigning integers
    int a = 5;
    int b = 1;
    int c = 90;
    int d = -5;
    int e = 2;

    // A. Boolean checking if what is in a is lesser than b, labelled 'alpha'. It's pulling from above ints.
    bool alpha = a < b;

    cout << alpha << "\n\n";

    // B. See above
    bool bravo = a > b;

    cout << bravo << "\n\n";

    // C. Checking for equality -> Relational operatator

    bool charlie = a == b;

    cout << charlie << "\n\n";

    // D. Checking for inequality
    bool delta = c != c;

    cout << delta << "\n\n";

    //E. BIDMAS usage
    bool echo = (d * e) == (a * e);
    
    cout << echo << "\n\n";

    // The 0 printed = false, the 1 printed = true
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
