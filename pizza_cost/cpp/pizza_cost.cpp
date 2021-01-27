// Input pizzaSize 'Enter size of the pizza in inches:'
// Input pizzaCost 'Enter cost of pizza:'

// Set pizzaRadius = pizzaSize/2
// Set pizzaSqInches = (pizzaRadius * 2.54)/6.452
// Set pizzaCostPerSqIn = pizzaSqInches/pizzaCost

// Display 'Pizza Cost Per Sq. Inch: ' pizzaCost

#include <iostream>             
#include <string>   
#include<iomanip>
using namespace std; 

int main () {
    cout << 
"Pizza Size Examples:\n"
"| Pizza Size  | Inches  | Cost     |\n"
"| ----------- | --------| -------- |\n"
"| M           | 12      | $ 14.95  |\n"
"| L           | 14      | $ 19.95  |\n"
"| XL          | 16      | $ 22.95  |\n";
    int pizzaSize;
    cout << "\nEnter size of the Pizza in inches: ";
    cin >> pizzaSize;

    double pizzaCost, pizzaRadius, pizzaSqInches, pizzaCostPerSqIn;

    cout << "Enter cost of pizza: ";
    cin >> pizzaCost;
    pizzaRadius = pizzaSize/2;
    pizzaSqInches = (pizzaRadius * 2.54)/6.452;
    pizzaCostPerSqIn = pizzaSqInches/pizzaCost;
    std:: cout << std:: fixed;
    std:: cout << std::setprecision(2);
    std:: cout << "\nCost per Sq. Inch = $ " << pizzaCostPerSqIn << "\n";

return 0;
}