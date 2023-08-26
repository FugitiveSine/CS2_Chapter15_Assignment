/*
 * Date.cpp
 *
 *  Created on: Apr 15, 2023
 *      Author: henry
 */

#include "Date.hpp"

Date::Date() {
	// TODO Auto-generated constructor stub
	this->day = 0;
	this->month = 0;
	this->year = 0;
}

Date::~Date() {
	// TODO Auto-generated destructor stub
}
int Date::getDay(){
return this->day;
}
int Date::getMonth(){
return this->month;
}
int Date::getYear(){
return this->year;
}

bool Date::setDay(int aDay){
if(aDay < 1 || aDay > 31){
	return false;
}else if(aDay >= 1 && aDay <= numOfDays() ){
	this->day = aDay;
	return true;
}else{
	return false;
}
}

bool Date::setMonth(int aMonth){
if(aMonth < 1 || aMonth > 12){
	return false;
}else{
	this->month = aMonth;
	return true;
}
}

bool Date::setYear(int aYear){
if(aYear < 1 || aYear > 9999){
	return false;
}else{
	this->year = aYear;
	return true;
}

}

int Date::numOfDays(){//when called returns the number of days in the set month
	int arrayDays[12];
	arrayDays[0] = 31;
	arrayDays[1] = 29;
	arrayDays[2] = 31;
	arrayDays[3] = 30;
	arrayDays[4] = 31;
	arrayDays[5] = 30;
	arrayDays[6] = 31;
	arrayDays[7] = 31;
	arrayDays[8] = 30;
	arrayDays[9] = 31;
	arrayDays[10] = 30;
	arrayDays[11] = 31;
	return arrayDays[this->month];
}


