// - Username: Must be 6 - 12 characters, all lowercase, no spaces, numbers or symbols.
// - Password: Must be 6 - 12 characters, at least one uppercase letter, at least one number and symbol. No spaces.

#include <iostream>             
#include <string>   
using namespace std; 

int main () {

  // Declare strings inputUsername, inputPassword, moveFwd;
  string inputUsername, inputPassword, moveFwd;
  // Display "Enter a username: "
  cout << "Enter a username: ";
  // Input inputUsername
  cin >> inputUsername;
  while (true) {
    // If inputusername matches req
    if (inputUsername >="a" && inputUsername <="z") {
      // Display "Your username is: " inputUsername
      cout << "Your username is: " << inputUsername;
        break;
    } else
      // Else "Username does not meet requirements. Please try again. "
      cout << "Username does not meet requirements. Please try again. ";
        break;
  }

  // Display "Is that correct? Enter y/n to continue: "
  cout << "\nIs that correct? Enter y/n to continue: ";
  // Input moveFwd
  cin >> moveFwd;
  if (moveFwd == "y" || moveFwd == "Y" ) {
    cout << "Moving on to setting a password.\n";
  } else if (moveFwd == "n" || moveFwd == "N" )
    cout << "Let's start from the beginning.. ";

return 0; 
}


// Display "Enter a username: "
// Input inputUsername
// If inputusername matches req
// Display "Your username is: " inputUsername
// Else "Username does not meet requirements. Please try again. "
// Display "Is that correct? Enter y/n to continue: "
// Input moveFwd 

// Display "Enter a password: "
// Input inputPassword
// If inputPassword matches rules
// Display "Password meets requirements. "
// Else If inputPassword does not match requirements
// Display "Password does not meet requirements. Please try again. "

// Display "Enter password again to confirm. "
// Input inputPassword
// If inputPassword == inputPassword 
// Display "Password accepted!"
// Else "Password does not match. Please try again."
