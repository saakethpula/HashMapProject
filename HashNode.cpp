// Name: Saaketh Pula
// Partner Name: Rushil Kaushik

#include "HashMap.hpp"
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;


hashNode::hashNode(string s) {
	keyword = s;
	values = new string[100];
	valuesSize = 100;
	currSize = 0;
}

hashNode::hashNode() {
	keyword = "";
	values = new string[100];
	valuesSize = 100;
	currSize = 0;
}

hashNode::hashNode(string s, string v) {
	keyword = s;
	values = new string[100];
	values[0] = v;
	valuesSize = 100;
	currSize = 1;
}

hashNode::~hashNode() {
	delete [] values;
}

void hashNode::addValue(string v) {
	// adding a value to the end of the value array associated 
	// with a key
    if (currSize < valuesSize) {
        values[currSize++] = v;
    } else {
        dblArray();
        values[currSize++] = v;
    }
}

void hashNode::dblArray() {
	// when the value array gets full, you need to make a new 
	// array twice the size of the old one (just double, no 
	//going to next prime) and then copy over the old values 
	//to the new values, then de-allocate the old array.  
	//Again, just copying over, no hash functiosn involved 
	//here.
    int newSize = valuesSize * 2;
    string *newValues = new string[newSize];

    for (int i = 0; i < currSize; ++i) {
        newValues[i] = values[i];
    }
    delete[] values;
    values = newValues;
    valuesSize = newSize;
}

string hashNode::getRandValue() {
    return values[rand() % currSize];
}