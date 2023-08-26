//============================================================================
// Name        : HenryT_Chapter15_Assignment.cpp
// Author      : Henry Timmons
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Food.hpp"
#include "Vegetable.hpp"
#include "Fruit.hpp"
#include "Dairy.hpp"
#include <fstream>
#include <sstream>
#include <string>



int main() {
	const int SIZE = 50;
	int counter = 0;
	string fileName;
	string inputRecord;
	ifstream inputFile;
	Food* myRefrigerator[SIZE];
	string stringType;
	string stringName;
	string stringDatePurchased;
	string stringExpireDate;
	string stringFiber, stringVitB, stringSodium;//vegetable
	string stringSugar, stringVitC;//fruit
	string stringFat, stringCholesterol, stringCalories;//dairy
	string stringMonth, stringDay, stringYear;


	cout << "Welcome to the food storage system!" << endl;

	cout << "Please enter the name of the file: ";
	getline(cin, fileName);
	cout << "\n" << right << setw(10) << "Food Report" << setw(18) << "Name" << setw(48) << "Date Purchased" << setw(15) << "Expire Date"<< endl;
	cout << right << setw(10) << "===========" << setw(18) << "====" << setw(48) << "==============" << setw(15) << "===========" << endl;
	inputFile.open(fileName);

	if(inputFile.fail()){
		cout <<"Error reading the file name, please try again" << endl;
	}else{
		while(!inputFile.eof()){
			getline(inputFile, inputRecord);

			stringstream inputStream(inputRecord);
			getline(inputStream, stringType, ',');

			if(stringType == "00"){//food


			}else if(stringType == "01"){//vegetable
				Vegetable* tempVeggie = new Vegetable();
				getline(inputStream, stringName, ',');
				getline(inputStream, stringMonth, ',');
				getline(inputStream, stringDay, ',');
				getline(inputStream, stringYear, ',');
				tempVeggie->setName(stringName);
				tempVeggie->setDatePurchased(stoi(stringDay), stoi(stringMonth), stoi(stringYear));
				getline(inputStream, stringMonth, ',');
				getline(inputStream, stringDay, ',');
				getline(inputStream, stringYear, ',');
				tempVeggie->setExpireDate(stoi(stringDay), stoi(stringMonth), stoi(stringYear));
				//
				getline(inputStream, stringFiber, ',');
				getline(inputStream, stringSodium, ',');
				getline(inputStream, stringVitB, '\n');
				tempVeggie->setTotalFiber(stoi(stringFiber));
				tempVeggie->setTotalSodium(stoi(stringSodium));
				tempVeggie->setTotalVitB(stoi(stringVitB));
				myRefrigerator[counter] = tempVeggie;
				//myRefrigerator[counter]->print();
				tempVeggie = nullptr;
				delete tempVeggie;
				counter++;

			}else if(stringType == "02"){//fruit
				Fruit* tempFruit = new Fruit();
				getline(inputStream, stringName, ',');
				getline(inputStream, stringMonth, ',');
				getline(inputStream, stringDay, ',');
				getline(inputStream, stringYear, ',');
				tempFruit->setName(stringName);
				tempFruit->setDatePurchased(stoi(stringDay), stoi(stringMonth), stoi(stringYear));
				getline(inputStream, stringMonth, ',');
				getline(inputStream, stringDay, ',');
				getline(inputStream, stringYear, ',');
				tempFruit->setExpireDate(stoi(stringDay), stoi(stringMonth), stoi(stringYear));
								//
				getline(inputStream, stringSugar, ',');
				getline(inputStream, stringVitC, '\n');
				//cout << stringSugar << endl;

				tempFruit->setSugarAmount(stol(stringSugar));
				tempFruit->setTotalC(stof(stringVitC));
				myRefrigerator[counter] = tempFruit;
				tempFruit = nullptr;
				delete tempFruit;
				counter++;

			}else if(stringType == "03"){//dairy
				Dairy* tempDairy = new Dairy();
				getline(inputStream, stringName, ',');
				getline(inputStream, stringMonth, ',');
				getline(inputStream, stringDay, ',');
				getline(inputStream, stringYear, ',');
				tempDairy->setName(stringName);
				tempDairy->setDatePurchased(stoi(stringDay), stoi(stringMonth), stoi(stringYear));
				getline(inputStream, stringMonth, ',');
				getline(inputStream, stringDay, ',');
				getline(inputStream, stringYear, ',');
				tempDairy->setExpireDate(stoi(stringDay), stoi(stringMonth), stoi(stringYear));
				//
				getline(inputStream, stringFat, ',');
				getline(inputStream, stringCholesterol, ',');
				getline(inputStream, stringCalories, '\n');
				tempDairy->setFat(stoi(stringFat));
				tempDairy->setCholesterol(stod(stringCholesterol));
				tempDairy->setCalories(stod(stringCalories));
				myRefrigerator[counter] = tempDairy;
				tempDairy = nullptr;
				delete tempDairy;
				counter++;

			}else{
				cout << "Invalid food type - ignored" << endl;

			}

		}//while


	}//else

	for(int i = 0; i < counter; i++){
		myRefrigerator[i]->print();
		delete myRefrigerator[i];
	}

	cout << "Total food read from the file: " << counter << endl;

	//delete [] myRefrigerator;
	inputFile.close();


	cout << "Program ending, have a nice day!" << endl; // prints Program ending, have a nice day!
	return 0;
}
