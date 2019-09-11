#include "Customer.h"
#include <iostream>
using namespace std;

void Customer::setCustomerNumber(long n)
{
	customerNumber = n;
}
bool Customer::setName(char na[])
{
	if (sizeof(na) <= NAME_SIZE)
	{
		for (int idx = 0; idx < NAME_SIZE; idx++)
		{
			name[idx] = na[idx];
		}
		return true;
	}
	else
	{
		cout << na << " is an invalid input. Please re-enter." << endl;
		return false;
	}
}
bool Customer::setStreet1(char street1[])
{
	if (sizeof(street1) <= STREET_SIZE)
	{
		for (int idx = 0; idx < STREET_SIZE; idx++)
		{
			streetAddress_1[idx] = street1[idx];
		}
		return true;
	}
	else
	{
		cout << street1 << " is an invalid input. Please re-enter." << endl;
		return false;
	}
}
bool Customer::setStreet2(char street2[])
{
	if (sizeof(street2) <= STREET_SIZE)
	{
		for (int idx = 0; idx < STREET_SIZE; idx++)
		{
			streetAddress_2[idx] = street2[idx];
		}
		return true;
	}
	else
	{
		cout << street2 << " is an invalid input. Please re-enter." << endl;
		return false;
	}
}
bool Customer::setCity(char cit[])
{
	if (sizeof(cit) <= CITY_SIZE)
	{
		for (int idx = 0; idx < CITY_SIZE; idx++)
		{
			city[idx] = toupper(cit[idx]);
		}
		return true;
	}
	else
	{
		cout << cit << " is an invalid input. Please re-enter." << endl;
		return false;
	}
}
bool Customer::setState(char sta[])
{
	if (sizeof(sta) <= STATE_CODE_SIZE)
	{
		for (int idx = 0; idx <= STATE_CODE_SIZE; idx++)
		{
			state[idx] = toupper(sta[idx]);
		}
		return true;
	}
	else
	{
		cout << sta << " is an invalid input. Please re-enter." << endl;
		return false;
	}
}
bool Customer::setZip(int z)
{
	if (z >= 0 && z <= 99999)
	{
		zipCode = z;
		return true;
	}
	else
	{
		cout << z << " is an invalid input. Please re-enter." << endl;
		return false;
	}
}

long Customer::getCustNum() const
{
	return customerNumber;
}
char Customer::getName()
{
	return name[NAME_SIZE];
}
char Customer::getStreet1()
{
	return streetAddress_1[STREET_SIZE];
}
char Customer::getStreet2()
{
	return streetAddress_2[STREET_SIZE];
}
char Customer::getCity()
{
	return city[CITY_SIZE];
}
char Customer::getState()
{
	return state[STATE_CODE_SIZE];
}
int Customer::getZip() const
{
	return zipCode;
}