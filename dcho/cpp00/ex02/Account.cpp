#include <iostream>
#include <ctime>
#include "Account.hpp"


int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_amount = initial_deposit;
	_totalAmount += _amount;
	_accountIndex = _nbAccounts++;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount <<\
	 ";created" << std::endl;

}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount <<\
	 ";closed" << std::endl;
}

int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << " accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << \
	";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() \
	<<std::endl;
}

void Account::makeDeposit(int deposit)
{
	_nbDeposits = deposit;
	int	nb_deposits = 0;
	int	p_amount = _amount;
	_amount = p_amount + _nbDeposits;
	if (_nbDeposits)
	{
		_totalNbDeposits++;
		nb_deposits = 1;
		_totalAmount += _amount;
	}

	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";p_amount:" << p_amount << \
	";deposits:" << _nbDeposits << ";amount:" << _amount << ";nb_deposits:" << \
	nb_deposits << std::endl;

}

bool Account::makeWithdrawal(int withdrawl)
{
	bool res = false;
	int	p_amount = _amount;
	int sub = p_amount - withdrawl;

	if (sub > 0)
	{
		_totalNbWithdrawals++;
		_nbWithdrawals = withdrawl;
		_amount -= _nbWithdrawals;
		_displayTimestamp();
		std::cout << " index:" << _accountIndex << ";p_amount:" << p_amount << \
		";withdrawal:" << _nbWithdrawals << ";amount:" << _amount << ";nb_withdrawals:1" \
		<< std::endl;
		res = true;
	}
	else
	{
		_displayTimestamp();
		std::cout << " index:" << _accountIndex << ";p_amount:" << p_amount << \
		";withdrawal:refused" << std::endl;
	}
	_totalAmount += _amount;
	return (res);
}

int Account::checkAmount(void) const
{
	int	res = 0;

	if (_totalAmount)
		res = 1;
	return (res);
}

void Account::displayStatus(void) const
{
	int is_deposit = 0;
	int is_withdrawals = 0;

	if (_nbDeposits) is_deposit = 1;
	if (_nbWithdrawals) is_withdrawals = 1;
	if (checkAmount())
		_totalAmount = 0;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount << \
	";deposits:" << is_deposit << ";withdrawals:" << is_withdrawals << \
	std::endl;
}

void Account::_displayTimestamp(void)
{
	time_t rawtime;
	char buf[18];

	time(&rawtime);
	strftime(buf, 18, "[%Y%m%d_%H%M%S]", localtime(&rawtime));
	std::cout << buf;
}
