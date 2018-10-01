/*
 * Runner.cpp
 *
 *  Created on: Sep 26, 2018
 *      Author: timdao4
 */

#include "Runner.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int createVector() {
	cout << "Creating Vector..." << endl;
	vector<int> intVect;
	intVect.push_back(1);
	intVect.push_back(2);
	intVect.push_back(3);
	intVect.push_back(4);
	intVect.push_back(5);

	for (int i = 0; i < intVect.size(); i++){
		cout << intVect[i] << ", ";
	}

	cout << binary_search(intVect.begin(), intVect.end(), 9) << endl;

	return 0;
}

int testIO(){
	string input;
	cin >> input;
	cout << "You typed in: " << input << endl;

	return 0;
}

int testSwitch() {
	int num, sum;
	cout << "Type in a number: " <<endl;
	cin >> num;

	switch(num) {
		case 0:
			sum = ++num;
			break;
		case 1:
			sum = ++num;
			break;
		default:
			sum = num;
	}
	cout << num << " + 1 = " << sum << endl;
	return 0;
}

int testCondOp(int a, int b) {
	cout << (a > b ? a : b ) << " is larger" << endl;
	return 0;
}


int testArray(int size) {
	int array[size];
	for (int i = 0; i < size; i++){
		array[i] = i+1;
		cout << "Array [" << i << "] = " << array[i] << endl;
	}
}

//====** MAIN METHOD RIGHT HUR! *====
int main() {



	return 0;
}











