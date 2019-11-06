/*
 * A.cpp
 *
 *  Created on: Nov 6, 2019
 *      Author: keith
 */

#include "A.h"

A::A(int i) : i(i){}
A::~A() {}

//reverse the sign beow and you reverse the sort order
bool  A::operator<(const A &other) {
	return i>other.i;
}

//just a way to display the sort order
std::string A::id(){
	return std::string("Object value=" +  std::to_string(i));
}

