/*
 * Dairy.cpp
 *
 *  Created on: Apr 15, 2023
 *      Author: henry
 */

#include "Dairy.hpp"

Dairy::Dairy():Food() {
	// TODO Auto-generated constructor stub
	this->calories = 0;
	this->fat = 0;
	this->cholesterol = 0;

}

Dairy::~Dairy() {
	// TODO Auto-generated destructor stub
}


double Dairy::getCalories() const {
	return calories;
}

bool Dairy::setCalories(double calories) {
	if(calories < 0){
		return false;
	}else{
		this->calories = calories;
		return true;
	}

}

double Dairy::getCholesterol() const {
	return cholesterol;
}

bool Dairy::setCholesterol(double cholesterol) {
	if(cholesterol < 0){
		return false;
	}else{
		this->cholesterol = cholesterol;
		return true;
	}

}

int Dairy::getFat() const {
	return fat;
}

bool Dairy::setFat(int fat) {
	if(fat < 0){
		return false;
	}else{
		this->fat = fat;
		return true;
	}

}


