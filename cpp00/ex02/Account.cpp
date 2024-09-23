#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ){
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";"
	<< "amount:" << initial_deposit << ";" 
	<< "created "<< std::endl;
	_nbAccounts++;
}

int Account::getNbAccounts( void ){
	return (_nbAccounts);
}

int Account::getTotalAmount( void ){
	return (_totalAmount);
}

int Account::getNbDeposits( void ){
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals( void ){
	return (_totalNbWithdrawals);
}

int	 Account::checkAmount( void ) const{
	return (_amount);
}

void	Account::_displayTimestamp( void ){
	std::time_t now = std::time(0);
	std::tm *localTime = std::localtime(&now);
	char buff[80];
	std::strftime(buff, sizeof(buff), "[%Y%m%d_%H%M%S]", localTime);
	std::cout << buff;		
}

void Account::displayAccountsInfos( void ){
	_displayTimestamp();
	std::cout << " account:" << Account::getNbAccounts() << ";"
	<< "totals:" << _totalAmount << ";"
	<< "deposits:" << Account::getNbDeposits() << ";"
	<< "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}


void Account::makeDeposit( int deposit ){
	int p_amout = _amount;
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits += _nbDeposits;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";"
	<< "p_amount:" << p_amout << ";"
	<< "deposits:" << deposit << ";"
	<< "amount:" << this->_amount << ";"
	<< "nb_deposits:" << this->_nbDeposits  << ";" << std::endl;	
	
}

bool Account::makeWithdrawal( int withdrawal ){
	if (checkAmount() > withdrawal)
	{
		int p_amout = _amount;
		_nbWithdrawals++;
		_totalNbWithdrawals += _nbWithdrawals;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_displayTimestamp();
		std::cout << " index:" << _accountIndex << ";"
		<< "p_amount:" << p_amout << ";"
		<< "withdrawal:" << withdrawal << ";"
		<< "amount:" << _amount << ";"
		<< "withdrawals:" << this->_nbWithdrawals << std::endl;
		return (true);
	}
	else
	{
		_displayTimestamp();
		std::cout << " index:" << this->_accountIndex << ";"
		<< "withdrawal: refused" << std::endl;	
		return (false);
	}
}

void Account::displayStatus( void ) const{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";"
	<< "amount:" << _amount << ";"
	<< "deposits:" << _nbDeposits << ";"
	<< "withdrawals:" << _nbWithdrawals << std::endl;
}

Account::~Account( void ){
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";"
	<< "amount:" << _amount << ";"
	<< "closed "<< std::endl;
	_nbAccounts--;
}