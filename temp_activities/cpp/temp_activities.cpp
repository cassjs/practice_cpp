// Pseudocode:
// Input tempC "Enter the current temperature in C:"
// Display 'You entered °', tempC.
// Set tempF = (tempC * 9/5) +32
// Display tempC 'converted to °F is: °', tempF

// Display 'Based on the temperature entered, the sports exercise recommended for the day is: '

// if tempF < 65
//     Display 'ping pong'
// else if tempF >= 65 and <= 80
//     Display 'tennis'
// else if tempF > 80
//     Display 'canoeing'

#include <iostream>  
#include <string>   
#include <iomanip>
using namespace std;

int main () {
    std:: cout << std:: fixed;
    std:: cout << std:: setprecision(2);
    double tempF, tempC;
    cout << "Enter the current temperature in C: ";
    cin >> tempC;
    cout << "You entered " << tempC << " °C.\n";

    tempF = (tempC * 9/5) + 32;
    std:: cout << tempC << " °C " << "converted to °F is: " << tempF << " °F.\n";

    cout << "Based on the temperature entered, the sports\nexercise recommended for the day is: ";
    if (tempF < 65) {
        cout << "ping-pong\n";
    } else if (tempF >= 65 && tempF <= 80) {
        cout << "tennis\n";
    } else {
        cout << "canoeing\n";
    }

return 0;
}