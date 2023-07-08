#include <iostream>
using namespace std;
class BankAccount {
private:
	int accountNumber;
	string owner;
	int balance;
public:
	void setOwner(string owner);
	void setBalance(int amount);
	int getBalance();
	void deposit(int amount);
	void withdraw(int amount);
	void print();
};

void BankAccount::setOwner(string owner1) {
	owner = owner1;
}

void BankAccount::setBalance(int amount) {
	balance = amount;
}
int BankAccount::getBalance() {
	return balance;
}
void  BankAccount::deposit(int amount) {
	balance += amount;
}
void  BankAccount::withdraw(int amount) {
	if (balance <= 0) {
		cout << "ÀÜ¾×ÀÌ ºÎÁ·ÇÕ´Ï´Ù." << endl; exit(0);
	}
	balance -= amount;
}
void  BankAccount::print() {
	cout << owner << "ÀÇ ÀÜ¾×Àº" << balance << "ÀÔ´Ï´Ù." << endl;
}

int main() {
	BankAccount account;
	account.setOwner("±èÃ¶¼ö");
	account.setBalance(0);
	account.deposit(10000);
	account.print();
	account.print();
	account.withdraw(8000);
	account.print();
	return 0;
}