/*
Kevin Lehman  - 1463553
Tarrant County College - COSC 1437- Fall 2017
Assignment 3 - Week 9
*/


#include<iostream>
#include "Customer.h"
using namespace std;

void showAll(Customer);

int main()
{
	Customer NewCust;
	long loccustomerNumber;
	char locname[NAME_SIZE];
	char locstreetAddress_1[STREET_SIZE];
	char locstreetAddress_2[STREET_SIZE];
	char loccity[CITY_SIZE];
	char locstate[STATE_CODE_SIZE];
	int loczipCode;
	bool flag = false;

	cout << "Enter your customer's number." << endl;
	cin >> loccustomerNumber;
	NewCust.setCustomerNumber(loccustomerNumber);

	while (flag != true);
	{
		cin.ignore();
		cout << "Enter your customer's name." << endl;
		cin.getline(locname, NAME_SIZE);
		flag = NewCust.setName(locname);
	}
	flag = false;
	while (flag != true)
	{
		cout << "Enter your customer's street address line 1." << endl;
		cin.getline(locstreetAddress_1, STREET_SIZE);
		flag = NewCust.setStreet1(locstreetAddress_1);
	}
	flag = false;
	while (flag != true)
	{
		cout << "Enter your customer's street address line 2." << endl;
		cin.getline(locstreetAddress_2, STREET_SIZE);
		flag = NewCust.setStreet2(locstreetAddress_2);
	}
	flag = false;
	while (flag != true)
	{
		cout << "Enter your customer's city." << endl;
		cin.getline(loccity, CITY_SIZE);
		flag = NewCust.setCity(loccity);
	}
	flag = false;
	while (flag != true)
	{
		cout << "Enter your customer's state." << endl;
		cin >> locstate;
		flag = NewCust.setState(locstate);
	}
	flag = false;
	while (flag != true)
	{
		cout << "Enter your customer's zip code." << endl;
		cin >> loczipCode;
		flag = NewCust.setZip(loczipCode);
	}

	showAll(NewCust);
	system("PAUSE");
	return 0;
}

void showAll(Customer NewCust)
{
	cout << "Your customer's number is: " << NewCust.getCustNum() << "." << endl;
	cout << "Your customer's name is: " << NewCust.getName() << "." << endl;
	cout << "Your customer's street address line 1 is: " << NewCust.getStreet1() << "." << endl;
	cout << "Your customer's street address line 2 is: " << NewCust.getStreet2() << "." << endl;
	cout << "Your customer's city is: " << NewCust.getCity() << "." << endl;
	cout << "Your customer's state is: " << NewCust.getState() << "." << endl;
	cout << "Your customer's zip code is: " << NewCust.getZip() << "." << endl;

}