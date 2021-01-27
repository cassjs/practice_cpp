/*Community College Assignment:
  Filename: a01.cpp
  Author:   Jessica Cassidy
  Date:     01/24/2021 
  Summary:  This program calculates the amount of milk cartons needed based on milk produced. 
            The program then calculates the production cost, profit, and amount that should be
            charged to the supplier. 

Variables (data type, name, purpose): //see lines 35 - 37
  double inputAmtMilkProduced - prompts the user to enter the total amount of milk produced in the morning with at most one decimal point
  double calcCartonsNeeded - calculates the number of milk cartons needed to hold milk (1 Milk Carton = 1.9 Liters)
  int outputCartonsNeeded  - outputs the number of milk cartons needed to hold milk
  double calcProductionCost  - computes the cost of producing milk (1 Liter = .50 cents)
  double outputProductionCost - outputs the cost of producing milk
  double calcProductionProfit - computes the profit for producing milk (1 Milk Carton = .25 cents)
  double outputProductionProfit - outputs the profit for producing milk
  double calcSumCharged2Supplier - computes the sum charged to the supplier (Production Cost + Production Profit)
  double outputSumChargedSupplier - outputs total amount charged to supplier

Equations:
  outputCartonsNeeded = inputAmtMilkProduced/calcCartonsNeeded; //line 49
  outputCartonsNeeded = (int)outputCartonsNeeded; //Static Cast rounds outputCartonsNeeded down to the nearest whole integer //line 50
  outputProductionCost = inputAmtMilkProduced * calcProductionCost; //line 51
  outputProductionProfit = outputCartonsNeeded * calcProductionProfit; //line 52
  outputSumChargedSupplier = outputProductionCost + outputProductionProfit; //line 53
*/

#include <iostream>             
#include <string>   
#include<iomanip>
using namespace std; 

int main () {
  //Variable Types
  int outputCartonsNeeded;
  double calcCartonsNeeded, inputAmtMilkProduced, calcProductionCost, outputProductionCost, calcProductionProfit, 
  outputProductionProfit, calcSumCharged2Supplier, outputSumChargedSupplier;
  
  //Inputs
  cout << "Enter the total amount of milk produced in Liters: \n(Note: Enter amounts up to one decimal point only.)" << endl;
  cin >> inputAmtMilkProduced;

  //Set Values
  calcCartonsNeeded = 1.9; //1 Milk Carton = 1.9 Liters
  calcProductionCost = .50; //1 Liter = .50 cents Production Cost
  calcProductionProfit = .25; //1 Milk Carton = .25 cents Production Profit

  //Calculations
  outputCartonsNeeded = inputAmtMilkProduced/calcCartonsNeeded;
  outputCartonsNeeded = (int)outputCartonsNeeded; //Static Cast rounds outputCartonsNeeded down to the nearest whole integer
  outputProductionCost = inputAmtMilkProduced * calcProductionCost;
  outputProductionProfit = outputCartonsNeeded * calcProductionProfit;
  outputSumChargedSupplier = outputProductionCost + outputProductionProfit;

  //Outputs
  cout << "\nNumber of Milk Cartons: " << outputCartonsNeeded << endl;
  cout << "(1 Milk Carton = 1.9 Liters)"<< endl;

  std:: cout << std:: fixed; 
  std:: cout << std:: setprecision(2); //Fix floating cost values to two decimal places 

  cout << "\nProduction Cost: $" << outputProductionCost << endl;
  cout << "(1 Liter = .50 cent Production Cost)"<< endl;

  cout << "\nProduction Profit: $" << outputProductionProfit << endl;
  cout << "(1 Milk Carton = .25 cent Production Profit)"<< endl;

  cout << "\nAmount Charged to Supplier: $" << outputSumChargedSupplier << endl;   
  cout << "(Production Cost + Production Profit)"<< endl;

return 0;
}