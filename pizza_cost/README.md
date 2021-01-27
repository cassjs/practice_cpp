# Project - Pizza Calculator (Price per Sq. Inch)
**Author:**     Jessica Cassidy\
**Date:**       January 10, 2020

## Description: 
This program prompts user to enter size of pizza and cost, then calculates the cost per sq. inch. 

**Input:**
- Enter size of the pizza in inches:
- Enter cost of pizza: 

**Output:** Pizza Cost Per Sq. Inch: 

## Pseudocode:
Input pizzaSize 'Enter size of the pizza in inches:'\
Input pizzaCost 'Enter cost of pizza:'

Set pizzaRadius = pizzaSize/2\
Set pizzaSqInches = (pizzaRadius * 2.54)/6.452\
Set pizzaCostPerSqIn = pizzaSqInches/pizzaCost

Display 'Pizza Cost Per Sq. Inch: ' pizzaCost

## Program Output Example:
Pizza Size Examples:
| Pizza Size  | Inches  | Cost     |
| ----------- | --------| -------- |
| M           | 12      | $ 14.95  |
| L           | 14      | $ 19.95  |
| XL          | 16      | $ 22.95  |

Enter size of the Pizza in inches: 16 
Enter cost of pizza: 22.95

Cost per Sq. Inch = $ 0.14