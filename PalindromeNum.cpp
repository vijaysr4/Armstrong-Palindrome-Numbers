#include <iostream>
using namespace std;

// Function to check the condition for palindrome numbers
int checkPal(string str) {
    // calculating the string length
    int len = str.length();

    // Traversing through the string upto half its length
    for (int i = 0; i < len/2; i++) {
        // Comparing 'i'th element with len-i th element from the end 
        if (str[i] != str[len - i - 1])
            return false;
    }
    return true;
}

int main() {
    // taking number as string
    string st;
    cout << "Enter Number: ";
    // User Input
    cin >> st;

    if (checkPal(st) == true) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }

    return 0;
}