#include <iostream>
#include <queue>
#include <map>
#include <iterator>
#include <string>
#include "methodsAndFunctions.h"
using namespace std;


void move_to_rear(queue<int>& intQueue) {
	//Creates a copy of the data stored at the front of the queue
  int placeHolder = intQueue.front();
	//Uses pop to remove the element from the front of the queue and then uses push to add a copy of it (the original front element) to the end.
  intQueue.pop();
  intQueue.push(placeHolder);
}



bool palindrome(string str, int strStart, int strLength) {
  //A word that is less than 2 characters long is always a palindrome and will return true accordingly
  if(strLength <= 1){return true;}
	
  //Checks the points equidistant from the center of the original word. If they're not equivalent, the word isn't a palindrome and the function returns false.
  if(str[strStart] != str[strLength - 1]){return false;}
	
  //Recursively calls itself with the inner and outter bounds of the word moved in by 1 (each) until the middle of the word is hit
  if(strStart < strLength){return palindrome(str, strStart + 1, strLength -1);}

  //If the word has passed to this point, it is a palindrome.
  return true;

	
}


//Creates iterator for the map
map<string, string>::iterator iterat;

void printStateMap(map<string, string> stateMap) {
  //Iterates through every pair in the state map and outputs the keys & values 
  for(iterat = stateMap.begin(); iterat != stateMap.end(); iterat++) {
    cout << "The Capital of " << iterat->first << " is " << iterat->second << endl;
  }
}



void outputCapital(map<string, string> stateMap) {
  //Asks and stores user input for the stateName
  cout << "What state do you want to know the capital of?: ";
  string stateName;
  getline(cin, stateName);
  cout << endl;

  //Checks to make sure that the give state exists in this database. If it does not, an error message is given to the user.
  if(stateMap.find(stateName) != stateMap.end()) {
	  //If the state exists in this data base:
	  // an auto iterator is used to find the stateName in question. The capital of the state is then outputed.
	  auto iterat = stateMap.find(stateName );
	  cout << "The Capital of " << iterat->first << " is " << iterat->second << endl;
	  }
	  
  else
	  //Error message
	  cout << "I'm sorry, " << stateName  << " does not seem to be stored in our data base. Please try again.";
  
}