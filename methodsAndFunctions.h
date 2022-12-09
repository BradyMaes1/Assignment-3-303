
#pragma once
#include <map>
#include <queue>
#include <string>
using namespace std;

void move_to_rear(queue<int>& intQueue);
//pre: takes in a queue by reference
//post moves the first element to the back of the referenced queue

bool palindrome(string str, int strStart, int strLength);
//pre: takes in a string, its beginning positon (0 to start with), and its ending position
//post: returns true if the string is a palindrome and false otherwise

void printStateMap(map<string, string> stateMap);
//pre: takes in a map of types string, string
//post: prints out the keys and values from the given map in a specific format

void outputCapital(map<string, string> stateMap);
//pre: takes in a map of types string, string
//post: gets user input for a state and outputs the state capital that corresponds to the given state. If the input does not match a state in the map, the user is told this instead.

