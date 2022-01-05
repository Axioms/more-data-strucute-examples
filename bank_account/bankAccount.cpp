/**
Name: Karan Munday
Assignment Number: 2
Class Section: 04
**/
#include "bankAccount.h"
#include <assert.h>


bankAccount::bankAccount(std::string accountOwner, double amount)
{
	assert(accountOwner.length() > 0 && amount >= 0);
	owner = accountOwner;
	balance = amount;
}

bankAccount::~bankAccount()
{
}

void bankAccount::deposit(double amount) {
	assert(amount > 0);
	balance += amount;
}

void bankAccount::withdraw(double amount) {
	assert(amount > 0 && amount <= balance);
	balance -= amount;
}

void bankAccount::changeOwner(std::string name) {
	assert(name != owner && name.length() > 0);
	owner = name;
}

double bankAccount::getBalance() const {
	return balance;
}

std::string bankAccount::getOwner() const {
	return owner;
}