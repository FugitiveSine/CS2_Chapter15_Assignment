/*
 * Dairy.hpp
 *
 *  Created on: Apr 15, 2023
 *      Author: henry
 */

#ifndef DAIRY_HPP_
#define DAIRY_HPP_
#include "Food.hpp"

class Dairy: public Food {
public:
	Dairy();
	virtual ~Dairy();


	void print(void){
		cout << setw(10) << right << whoAmI() << ":" << setw(18) << getName() << setw(10) << this->fat << setw(9) << this->cholesterol << setw(10) << this->calories << setw(19) << getDatePurchased() << setw(15) << getExpireDate() << endl;


	}

	string whoAmI(){
		return "Dairy";
	}

	double getCalories() const;
	bool setCalories(double calories);
	double getCholesterol() const;
	bool setCholesterol(double cholesterol);
	int getFat() const;
	bool setFat(int fat);
private:
	int fat;
	double cholesterol;
	double calories;
};

#endif /* DAIRY_HPP_ */
