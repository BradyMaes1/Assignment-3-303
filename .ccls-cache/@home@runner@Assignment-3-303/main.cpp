#include <iostream>
#include <queue>
#include <map>
#include <iterator>
#include<string>
using namespace std;
#include "methodsAndFunctions.h"

int main() {
	
  //stateDataMap map is initialized
  map <string, string> stateDataMap;
  //The states and capital pairs are added to stateDataMap
  stateDataMap["Nebraska"] = "Lincoln";
  stateDataMap["New York"] = "Albany";
  stateDataMap["Ohio"] = "Columbus";  
  stateDataMap["California"] = "Sacramento";
  stateDataMap["Massachusetts"] = "Boston";
  stateDataMap["Texas"] = "Austin";	
  //California's capital is changed from Sacramento to Los Angeles 
  stateDataMap["California"] = "Los Angeles";

	
  //The outputCapital function is used on stateDataMap to get a state from the user to output the capital of
  outputCapital(stateDataMap);

  cout << endl;
  cout << endl;

  //The printStateMap function is used on stateDataMap to output all of the states and their respective capitals
  printStateMap(stateDataMap);

  cout << endl;

	
  //A short test is ran to ensure that the palindrome function works. It is case (as in upper/lower case) sensitive, but this could have been easily changed with a .upper() funciton.	
	
  string palindromeTester = "racecar"; //racecar is a palindrome. this variable can be changed to test other cases
  //If statement to give a nicer output to the user based on the result of palindrome being ran on the test variable
  if(palindrome(palindromeTester, 0, palindromeTester.length()) == 1) //1 == true
	  cout << palindromeTester << " is a palindrome!";
  else
	cout << palindromeTester << " is NOT a palindrome!";
}