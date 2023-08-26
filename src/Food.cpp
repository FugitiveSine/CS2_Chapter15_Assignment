/*
 * Food.cpp
 *
 *  Created on: Apr 15, 2023
 *      Author: henry
 */

#include "Food.hpp"

Food::Food() {
	// TODO Auto-generated constructor stub
	this->name = "Unkown";
	this->datePurchased.setDay(0);
	this->datePurchased.setMonth(0);
	this->datePurchased.setYear(0);

	this->expireDate.setDay(0);
	this->expireDate.setMonth(0);
	this->expireDate.setYear(0);


}

Food::~Food() {
	// TODO Auto-generated destructor stub
}

void Food::print(void){

}
string Food::whoAmI(){
	return "Food";
}

void Food::setName(string aName){
	this->name = aName;

}
string Food::getName(){
	return this->name;
}
void Food::setDatePurchased(int aDay, int aMonth, int aYear){
	this->datePurchased.setMonth(aMonth);
	this->datePurchased.setDay(aDay);
	this->datePurchased.setYear(aYear);

}
void Food::setExpireDate(int aDay, int aMonth, int aYear){
	this->expireDate.setMonth(aMonth);
	this->expireDate.setDay(aDay);
	this->expireDate.setYear(aYear);

}
string Food::getDatePurchased(){
	return this->datePurchased.getDate();
}
string Food::getExpireDate(){
	return this->expireDate.getDate();

}


