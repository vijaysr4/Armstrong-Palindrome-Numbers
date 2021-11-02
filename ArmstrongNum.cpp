#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// Function to calculate order of the number
int order(int x) {
    int n = 0;

    // same as declaring while(x != 0)
    while (x) {
        n++;
        x = x/10;
    }
    // returns the n-order of elements present in x
    return n;
}

// Function to check the condition for Armstrong
bool isArmstrong(int x) {

    // Invoke the order function
    int n = order(x);
    int temp = x;
    int sum = 0;

    while (temp) {
        int r = temp % 10;
        sum += (pow(r, n) + 0.5); // Adding 0.5 to the power function because of int format
        temp /= 10; 
    }
    // If the Armstrong condition satisfies 
    return (sum == x);
}

int main() {
    int x;
    // User Input
    cout << "Enter Number: \n";
    cin >> x; 

    // Invoke the Armstrong function
    isArmstrong(x)? cout << " true\n" : cout << " false\n";

    return 0;
}