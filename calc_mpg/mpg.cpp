/*
  Author:   Jessica Cassidy
  Date:     01/31/2021
  Summary:  This program calculates the fuel efficiency of a car by reading the starting/ending mileage and 
  fuel level at trip start/end. The miles traveled, fuel used, and miles per a gallon of fuel is calculated, 
  then these results are also converted to metric units.

VARIABLES:
  startingMileage - Prompt the starting mileage in miles
  endingMileage - Prompt the ending mileage in miles
  startingFuelLvl - Prompt the starting fuel level in US gallons
  endingFuelLvl - Prompt the ending fuel level in US gallons
  numMilesTraveled - Calculate total miles traveled
  galFuelUsed - Calculate the number of US gallons of fuel used
  mpgFuel - Calculate the miles per gallon
  numKmTraveled - Calculate total miles traveled via metric units in km 
  ltrFuelUsed - Calculate the number of US gallons of fuel used via metric units in liters 
  ltrPer100Km - Calculate liters used per 100km

EQUATIONS:
  numMilesTraveled = endingMileage - startingMileage
  galFuelUsed = startingFuelLvl - endingFuelLvl
  mpgFuel = numMilesTraveled/galFuelUsed
  numKmTraveled = numMilesTraveled * 1.609
  double ltrFuelUsed = galFuelUsed * 3.785
  double ltrPer100Km = 100/(numKmTraveled/ltrFuelUsed)
*/


#include <iostream>             
#include <string>   
#include<iomanip>
using namespace std; 

int main() {

  double startingMileage, endingMileage, startingFuelLvl, endingFuelLvl, numMilesTraveled, galFuelUsed, mpgFuel;

  //USER INPUTS
  cout << "Enter starting mileage: ";
  cin >> startingMileage; 
  cout << "Enter ending mileage: ";
  cin >> endingMileage; 
  cout << "Enter fuel at the start in Gallons: ";
  cin >> startingFuelLvl; 
  cout << "Enter fuel at the end in Gallons: ";
  cin >> endingFuelLvl; 

  //EQUATIONS
  numMilesTraveled = endingMileage - startingMileage;
  galFuelUsed = startingFuelLvl - endingFuelLvl;
  mpgFuel = numMilesTraveled/galFuelUsed;

  //CONVERSION EQUATIONS
  const double numKmTraveled = numMilesTraveled * 1.609;
  const double ltrFuelUsed = galFuelUsed * 3.785;
  const double ltrPer100Km = 100/(numKmTraveled/ltrFuelUsed);

  //SET FIXED DECIMAL VALUES BELOW
  cout << fixed;
  cout << setprecision(2);

  //IMPERIAL OUTPUTS
  cout << "Number of miles traveled = " << numMilesTraveled << endl;
  cout << "Fuel used (gallons) = " << galFuelUsed << endl;
  cout << "Miles per gallon of fuel = " << mpgFuel << endl;

  //METRIC OUTPUTS
  cout << fixed << setprecision(2) << "Number of kms traveled (1 mile = 1.609 km) = " << numKmTraveled << endl;
  cout << "Fuel used (1 U.S. gallon = 3.785 liters) = " << ltrFuelUsed << endl;
  cout << "Liters per 100kms = " << ltrPer100Km << endl;

}