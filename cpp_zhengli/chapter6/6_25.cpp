#include"account.h"
#include <iostream>
using namespace std;

int main() {
	Date date(2008, 11, 1);
	SavingsAccount accounts[]={
		SavingsAccount (date, "111111", 0.015),
		SavingsAccount (date," 222222", 0.015)
	};
	const int n = sizeof(accounts) / sizeof(SavingsAccount);
	accounts[0].deposit(Date(2008, 11, 5), 5000, "salary");
	accounts[1].deposit(Date(2008, 11, 25), 10000, "sell stock 0323");

	accounts[1].deposit(Date(2008, 12, 5), 5000, "salary");
	accounts[0].deposit(Date(2008, 12, 20), 4000, "buy laptop");
	std::cout << endl;

	for (int i = 0; i < n; i++) {
		accounts[i].settle(Date(2009, 1, 1));
		accounts[i].show();
		std::cout << endl;
	}

	std::cout << "total:" << SavingsAccount::getTotal() << endl;
	return 0;
}
