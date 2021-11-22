#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp(void) {
    time_t timer = time(NULL);
    struct tm* cur = localtime(&timer);
    std::cout << "[";
    std::cout << std::setfill('0') << std::setw(4) << cur->tm_year + 1900;
    std::cout << std::setfill('0') << std::setw(2) << cur->tm_mon + 1;
    std::cout << std::setfill('0') << std::setw(2) << cur->tm_mday << "_";
    std::cout << std::setfill('0') << std::setw(2) << cur->tm_hour;
    std::cout << std::setfill('0') << std::setw(2) << cur->tm_min;
    std::cout << std::setfill('0') << std::setw(2) << cur->tm_sec;
    std::cout << "] ";
}

Account::Account(int initial_deposit) {
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    _totalNbDeposits++;
    _totalAmount += initial_deposit;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "created" << std::endl;
}

Account::~Account(void) {
    _nbAccounts--;
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "closed" << std::endl;
}

int Account::getNbAccounts(void) {
    return _nbAccounts;
}

int	Account::getTotalAmount(void) {
    return _totalAmount;
}

int Account::getNbDeposits(void) {
    return _totalNbDeposits;
}

int	Account::getNbWithdrawals(void) {
    return _totalNbWithdrawals;
}

void Account::displayStatus(void) const {
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "deposits:" << _nbDeposits << ";";
    std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::displayAccountsInfos(void) {
    Account::_displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";";
    std::cout << "total:" << _totalAmount << ";";
    std::cout << "deposits:" << _totalNbDeposits << ";";
    std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

int	Account::checkAmount(void) const {
    return _amount;
}

void Account::makeDeposit(int deposit) {
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    std::cout << "deposit:" << deposit << ";";
    _nbDeposits++;
    _amount += deposit;
    _totalNbDeposits++;
    _totalAmount += deposit;
    std::cout << "amount:" << _amount << ";";
    std::cout << "nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    if (_amount < withdrawal) {
        std::cout << "withdrawal:refused" << std::endl;
        return false;
    }
    else {
        _nbWithdrawals++;
        _amount -= withdrawal;
        _totalNbWithdrawals++;
        _totalAmount -= withdrawal;
        std::cout << "withdrawal:" << withdrawal << ";";
        std::cout << "amount:" << _amount << ";";
        std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
        return true;
    }
}