/*
 * Date.hpp
 *
 *  Created on: Apr 15, 2023
 *      Author: henry
 */

#ifndef DATE_HPP_
#define DATE_HPP_
#include <iostream>
#include <sstream>
using namespace std;

class Date {
public:
	Date();
	virtual ~Date();
	int getDay();
		int getMonth();
		int getYear();

		bool setDay(int aDay);
		bool setMonth(int aMonth);
		bool setYear(int aYear);

		string getDate(){
			int year = this->year;
			int month = this->month;
			int day = this->day;
			stringstream sy;
			stringstream sm;
			stringstream sd;
			sy << year;
			sm << month;
			sd << day;
			string str = sm.str() + "/" + sd.str() + "/" + sy.str();
			return str;
		}

		int numOfDays();


private:
	int day;
	int month;
	int year;
};

#endif /* DATE_HPP_ */
