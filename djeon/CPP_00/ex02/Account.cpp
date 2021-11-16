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
    this->_accountIndex = this->_nbAccounts;
    this->_nbAccounts++;
    this->_totalNbDeposits++;
    this->_totalAmount += initial_deposit;
    this->_amount = initial_deposit;
    this->_nbDeposits = 1;
    this->_nbWithdrawals = 0;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "created" << std::endl;
}

Account::~Account(void) {
    this->_nbAccounts--;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "closed" << std::endl;
}

int Account::getNbAccounts(void) {
    return Account::_nbAccounts;
}

int	Account::getTotalAmount(void) {
    return Account::_totalAmount;
}

int Account::getNbDeposits(void) {
    return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals(void) {
    return Account::_totalNbWithdrawals;
}

void Account::displayStatus(void) const {
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "deposits:" << this->_nbDeposits << ";";
    std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::displayAccountsInfos(void) {
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::_nbAccounts << ";";
    std::cout << "total:" << Account::_totalAmount << ";";
    std::cout << "deposits:" << Account::_totalNbDeposits << ";";
    std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

int	Account::checkAmount(void) const {
    return this->_amount;
}

void Account::makeDeposit(int deposit) {
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    std::cout << "deposit:" << deposit << ";";
    this->_nbDeposits++;
    this->_amount += deposit;
    this->_totalNbDeposits++;
    this->_totalAmount += deposit;
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    if (this->_amount < withdrawal) {
        std::cout << "withdrawal:refused" << std::endl;
        return false;
    }
    else {
        this->_nbWithdrawals++;
        this->_amount -= withdrawal;
        this->_totalNbWithdrawals++;
        this->_totalAmount -= withdrawal;
        std::cout << "withdrawal:" << withdrawal << ";";
        std::cout << "amount:" << this->_amount << ";";
        std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
        return true;
    }
}