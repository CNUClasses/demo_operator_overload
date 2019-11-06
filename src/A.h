/*
 * A.h
 *
 *  Created on: Nov 6, 2019
 *      Author: keith
 */

#ifndef A_H_
#define A_H_
#include <iostream>
#include <string>

class A {
public:
	A(int i);
	virtual ~A();

	//the bit of interest, comparison
	bool  operator<(const A &other);

	//just a way to display the sort order
	std::string id();
private:
	int i;
};

#endif /* A_H_ */
