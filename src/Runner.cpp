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

int main()
{
	//TESTING Vectors
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
