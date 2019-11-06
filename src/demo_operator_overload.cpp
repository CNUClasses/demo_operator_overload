//============================================================================
// Name        : demo_operator_overload.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <algorithm>

#include "A.h"

using namespace std;

int main() {

	//vector holds objects
	vector<A> mv;

	//populate vector
	for(int j=0;j<10;j++){
		A a(j);
		mv.push_back(a);
	}

	//sorting using the 2 param form
	//(change the < to > in the body of
	//A::operator< to reverse the sort order
	sort(mv.begin(),mv.end());

	//shorter display results
	for(auto &obj : mv)
		cout<<obj.id()<<endl;

	//display results traditional
//	for(int j=0;j<10;j++){
//			cout<<mv[j].id()<<endl;
//	}

	return 0;
}
