#include <iostream>
#include <ctime>
#include <time.h>
#include "Account.class.hpp"

Account::Account( int initial_deposit ) : 
_accountIndex(Account::_nbAccounts), 
_amount(initial_deposit), 
_nbDeposits(0), 
_nbWithdrawals(0),
_totalMemberChecks(0) {

	Account::_nbAccounts += 1;
	Account::_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->checkAmount() << ";created" << std::endl;

}

Account::~Account( void ) {

	Account::_nbAccounts -= 1;
	Account::_totalAmount -= this->checkAmount();
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->checkAmount() << ";closed" << std::endl;

}

void	Account::_displayTimestamp( void ) {

	time_t rawTime = time(NULL);
	struct tm *current = localtime(&rawTime);
	std::cout << "[" << current->tm_year + 1900 << \
		current->tm_mon + 1 << current->tm_mday << \
		"_" << current->tm_hour + 1 << current->tm_min \
		<< current->tm_sec << "] ";

	//To get the same timestamps
	//std::cout << "[20150406_153629] ";
}

int	Account::checkAmount( void ) const {

	// Bonus: count the number of calls for non-member and member variables
	Account::_totalChecks += 1;
	Account *cheat = const_cast<Account *> (this);
	cheat->_totalMemberChecks += 1;
	//Print infos below makes the 2 outputs differ, decomment to get a message
	//each time this function is called.
	/*std::cout << "This function has been called " << \
		Account::_totalChecks << " times in total and " \
		<< this->_totalMemberChecks << " times in this instance" << std::endl;*/
	return this->_amount;

}

int	Account::getNbAccounts( void ) {

	return Account::_nbAccounts;

}

int	Account::getTotalAmount( void ) {

	return Account::_totalAmount;

}

int	Account::getNbDeposits( void ) {

	return Account::_totalNbDeposits;

}

int	Account::getNbWithdrawals( void ) {

	return Account::_totalNbWithdrawals;

}

void	Account::displayAccountsInfos( void ) {

	Account::_displayTimestamp();
	std::cout << \
		"accounts:" << Account::getNbAccounts() << \
		";total:" << Account::getTotalAmount() << \
		";deposits:" << Account::getNbDeposits() << \
		";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	Account::displayStatus( void ) const {

	Account::_displayTimestamp();
	std::cout << \
		"index:" << this->_accountIndex << \
		";amount:" << this->_amount << \
		";deposits:" << this->_nbDeposits << \
		";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit ) {

	Account::_displayTimestamp();
	std::cout << \
		"index:" << this->_accountIndex	<< \
		";p_amount:" << this->_amount << \
		";deposit:" << deposit;
	
	this->_amount += deposit;
	this->_nbDeposits += 1;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits += 1;

	std::cout << \
		";amount:" << this->_amount << \
		";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal) {

	Account::_displayTimestamp();
	std::cout << \
		"index:" << this->_accountIndex << \
		";p_amount:" << this->_amount << \
		";withdrawal:";
	
	if (this->_amount - withdrawal < 0) {
		std::cout << "refused" << std::endl;
		return false;
	}
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals += 1;
	this->_amount -= withdrawal;
	this->_nbWithdrawals += 1;
	
	std::cout << \
		withdrawal << \
		";amount:" << this->_amount << \
		";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return true;
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
int	Account::_totalChecks = 0;
