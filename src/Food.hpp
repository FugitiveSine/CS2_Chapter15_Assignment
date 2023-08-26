/*
 * Food.hpp
 *
 *  Created on: Apr 15, 2023
 *      Author: henry
 */

#ifndef FOOD_HPP_
#define FOOD_HPP_
#include <iostream>
using namespace std;
#include "Date.hpp"
#include <iomanip>

class Food: public Date {
public:
	Food();
	virtual ~Food();
	virtual void print(void) = 0;
	virtual string whoAmI() = 0;

	void setDatePurchased(int aDay, int aMonth, int aYear);
	string getDatePurchased(void);
	void setExpireDate(int aDay, int aMonth, int aYear);
	string getExpireDate(void);

	void setName(string aName);
	string getName();
private:
	std::string name;
	Date datePurchased;
	Date expireDate;

};

#endif /* FOOD_HPP_ */
