/*
 * Fruit.cpp
 *
 *  Created on: Apr 15, 2023
 *      Author: henry
 */

#include "Fruit.hpp"

Fruit::Fruit():Food() {
	// TODO Auto-generated constructor stub
	this->sugarAmount = 0;
	this->totalC = 0;

}

Fruit::~Fruit() {
	// TODO Auto-generated destructor stub
}
bool Fruit::setSugarAmount(long aSugar){
	if(aSugar < 0){
		return false;
	}else{
		this->sugarAmount = aSugar;
		return true;
	}
}

long Fruit::getSugarAmount(){
	return sugarAmount;
}
bool Fruit::setTotalC(float aFloat){
	if(aFloat < 0){
		return false;
	}else{
		this->totalC = aFloat;
		return true;
	}
}
float Fruit::getTotalC(){
	return totalC;
}
