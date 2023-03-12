#include <iostream> // Always start off with this
using namespace std;

int main() { 
    // Introducing the program
    cout << "Welcome to The Shell today gas is $2 per litre" << endl;
    // Ask user how much gas they filled up
    cout << "Please type in the amount of gas you would like in litres:" << endl;
    int GasAmount;
    cin >> GasAmount;
    // Print out how much is the cost
    int FinalPrice = GasAmount * 2;
    cout << "Your final price is" << FinalPrice << endl;
    return 0;
}
