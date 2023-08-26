/*
 * Fruit.hpp
 *
 *  Created on: Apr 15, 2023
 *      Author: henry
 */

#ifndef FRUIT_HPP_
#define FRUIT_HPP_
#include "Food.hpp"

class Fruit:public Food {
public:
	Fruit();
	virtual ~Fruit();
	void print(){
		cout << setw(10) << right << whoAmI() << ":"<< setw(18) << getName() << setw(10) << this->sugarAmount << setw(9) << this->totalC << setw(29) << getDatePurchased() << setw(15) << getExpireDate() << endl;

	}
	string whoAmI(){
		return "Fruit";
	}
	bool setSugarAmount(long aSugar);
	long getSugarAmount();
	bool setTotalC(float aFloat);
	float getTotalC();
private:
	long sugarAmount;
	float totalC;
};

#endif /* FRUIT_HPP_ */
