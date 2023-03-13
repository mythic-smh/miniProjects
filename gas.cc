#include <iostream> // Always start off with this
using namespace std;

int main() { 
    // Introducing the program
    cout << "Welcome to The Shell!" << endl;
    // Ask user which type of gas they would like
        cout << "You will choose which gas you would like you have. You have the options of 1. Regular 2. Mid grade 3. Premium. Please write which a number for which gas type you would like." << endl;
    // Now make variables for each number 1,2,3
    int gasType;
    cin >> gasType;
    float gasPrice;
    if (gasType == 1) {
    gasPrice = 1.56;
    }
    else if (gasType == 2) {
    gasPrice = 1.72;
    }
    else if (gasType == 3) {
    gasPrice = 1.82;
    }
    // Ask user how much gas they filled up
    cout << "Please type in the amount of gas you would like in litres:" << endl;
    int GasAmount;
    cin >> GasAmount;
    // Print out how much is the cost
    int FinalPrice = GasAmount * gasPrice;
    cout << "Your final price is " << FinalPrice << " dollars" << endl;
    return 0;
}
