/**
Name: Karan Munday
Assignment Number: 2
Class Section: 04
**/
#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include <string>
class bankAccount
{
public:
	//Precondition: A string that is bigger than 0 chars in needed and a balance that is bigger >= 0.0
	//Postcondition: The object is initaized
	bankAccount(std::string accountOwner, double amount);
	~bankAccount();
	
	// mutators
	
	//Precondition: An amount that is bigger >= 0.0
	//Postcondition: The double is added to account balance
	void deposit(double amount);
	//Precondition: An amount that is bigger >= 0.0
	//Postcondition: The double is removed from account balance as long as the amount withdrawn is not bigger than the balance 
	void withdraw(double amount);
	//Precondition: A string that is bigger than 0 chars
	//Postcondition: The owner of the account is changed if the name is diffrent
	void changeOwner(std::string name);
	
	// accessors
	
	//Postcondition: returns the current balance
	double getBalance() const;
	//Postcondition: returns the owner
	std::string getOwner() const;
	
	
private:
	double balance; // the current balance 
	std::string owner; // the owner of the account
};

#endif // BANKACCOUNT_H
