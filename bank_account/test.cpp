/**
Name: Karan Munday
Assignment Number: 2
Class Section: 04
**/
#include <iostream>
#include "bankAccount.h"

int main()
{
	bankAccount account("User 1", 100);
	std::cout << "initial balance: " << account.getBalance() << std::endl;
	std::cout << "initial account owner: " << account.getOwner() << std::endl << std::endl;
	
	account.deposit(200);
	std::cout << "balance after a deposit of 200: " << account.getBalance() << std::endl;
	
	account.withdraw(274);
	std::cout << "balance after a withdraw of 274: " << account.getBalance() << std::endl << std::endl;
	
	account.changeOwner("User 2");
	std::cout << "New account owner: " << account.getOwner() << std::endl;

	return 0;
}