/*
 * Vegetable.cpp
 *
 *  Created on: Apr 15, 2023
 *      Author: henry
 */

#include "Vegetable.hpp"

Vegetable::Vegetable():Food() {
	// TODO Auto-generated constructor stub
	this->totalFiber = 0;
	this->totalSodium = 0;
	this->totalVitB = 0;

}

Vegetable::~Vegetable() {
	// TODO Auto-generated destructor stub
}



int Vegetable::getTotalFiber() const {
	return totalFiber;
}

bool Vegetable::setTotalFiber(int totalFiber) {
	if(totalFiber < 0){
		return false;
	}else{
		this->totalFiber = totalFiber;
		return true;
	}

}

int Vegetable::getTotalSodium() const {
	return totalSodium;
}

bool Vegetable::setTotalSodium(int totalSodium) {
	if(totalSodium < 0){
		return false;
	}else{
		this->totalSodium = totalSodium;
		return true;
	}

}

int Vegetable::getTotalVitB() const {
	return totalVitB;
}

bool Vegetable::setTotalVitB(int totalVitB) {
	if (totalVitB < 0){
		return false;
	}else{
		this->totalVitB = totalVitB;
		return true;
	}

}
