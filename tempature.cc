#include <iostream> // Always start off with this
using namespace std;

int main() { 
    // Introducing the program
    cout << "This is a tempature converter" << endl;
    // Ask user how much gas they filled up
    cout << "Please type in the Celcius you would like to turn into Fahrenheit" << endl;
    int TempCelcius;
    cin >> TempCelcius;
    // Print out how much is the cost
    float TempFarhenheit = TempCelcius * 9 / 5 + 32;
    cout << "Your final tempature is " << TempFarhenheit << " degrees Farhenheit" << endl;
    return 0;
}
