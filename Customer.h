#pragma once
#ifndef CUSTOMER_H
#define CUSTOMER_H

const int NAME_SIZE = 20;
const int STREET_SIZE = 30;
const int CITY_SIZE = 20;
const int STATE_CODE_SIZE = 3;

class Customer
{
private:
	long customerNumber;
	char name[NAME_SIZE];
	char streetAddress_1[STREET_SIZE];
	char streetAddress_2[STREET_SIZE];
	char city[CITY_SIZE];
	char state[STATE_CODE_SIZE];
	int zipCode;
public:
	void setCustomerNumber(long);
	bool setName(char[]);
	bool setStreet1(char[]);
	bool setStreet2(char[]);
	bool setCity(char[]);
	bool setState(char[]);
	bool setZip(int);
	long getCustNum() const;
	char getName();
	char getStreet1();
	char getStreet2();
	char getCity();
	char getState();
	int getZip() const;
};

#endif // !CUSTOMER_H
