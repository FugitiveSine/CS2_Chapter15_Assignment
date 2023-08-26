/*
 * Vegetable.hpp
 *
 *  Created on: Apr 15, 2023
 *      Author: henry
 */

#ifndef VEGETABLE_HPP_
#define VEGETABLE_HPP_
#include "Food.hpp"


class Vegetable : public Food {
public:
	Vegetable();
	virtual ~Vegetable();

	void print(){
		cout << setw(10) << right << whoAmI() << ":" << setw(18) << getName() << setw(10) << this->totalSodium << setw(9) << this->totalFiber << setw(10) << this->totalVitB << setw(19) << getDatePurchased() << setw(15) << getExpireDate() << endl;
	}
	string whoAmI(){
		return "Vegetable";
	}


	int getTotalFiber() const;
	bool setTotalFiber(int totalFiber);
	int getTotalSodium() const;
	bool setTotalSodium(int totalSodium);
	int getTotalVitB() const;
	bool setTotalVitB(int totalVitB);

private:
	int totalFiber;
	int totalSodium;
	int totalVitB;

};

#endif /* VEGETABLE_HPP_ */
