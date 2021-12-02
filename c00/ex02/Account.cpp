#include <iostream>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits= 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ): _accountIndex(_nbAccounts), _amount(initial_deposit)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
	_nbAccounts++;
	_totalAmount += this->_amount;
	return ;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed" << std::endl;
	return ;
}

int	Account::checkAmount() const
{
	return (_amount);
}

int	Account::getTotalAmount()
{
	return (_totalAmount);
}

int	Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}
int	Account::getNbDeposits()
{
	return (_totalNbDeposits);
}

void Account::_displayTimestamp()
{
	std::cout << "[19920104_091532] ";
	return ;
}
 
void Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
	_totalAmount = 0;
	return ;
}

void Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << checkAmount() << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
	return ;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	if (_amount < 0)
		_nbDeposits = 0;
	_nbDeposits = 1;
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	std::cout << "deposit:" << deposit << ";";
	_amount = _amount + deposit;
	std::cout << "amount:" << _amount << ";";
	std::cout << "nb_deposits:" << _nbDeposits << std::endl;
	_totalAmount += _amount;
	_totalNbDeposits++;
	return ;
}

bool	Account::makeWithdrawal( int withDrawal )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << checkAmount() << ";";
	std::cout << "withdrawal:";
	if (checkAmount() - withDrawal < 0)
	{
		std::cout << "refused" << std::endl;
		_nbWithdrawals = 0;
		_totalAmount +=  checkAmount();
		return (0);
	}
	_totalAmount +=  checkAmount() - withDrawal;
	_nbWithdrawals = 1;
	_amount = checkAmount() - withDrawal;
	std::cout << withDrawal << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
	_totalNbWithdrawals++;
	return (1);
}

