#include "Account.hpp"
#include <ctime>
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp(void) {
    time_t timer = time(NULL);
    struct tm* cur = localtime(&timer);
    std::cout << cur->tm_year + 1900 << "-";
    std::cout << cur->tm_mon + 1 << "-";
    std::cout << cur->tm_mday << " T ";
    std::cout << cur->tm_hour << ":";
    std::cout << cur->tm_min << " UTC" << std::endl;
}

Account::Account(int initial_deposit) {
    Account::_displayTimestamp();
    this->_accountIndex = this->_nbAccounts;
    this->_nbAccounts++;
    this->_totalNbDeposits++;
    this->_totalAmount += initial_deposit;
    this->_amount = initial_deposit;
    this->_nbDeposits = 1;
    this->_nbWithdrawals = 0;
    std::cout << "Hello " << this->_accountIndex << std::endl;
}

Account::~Account(void) {
    Account::_displayTimestamp();
    this->_nbAccounts--;
    std::cout << "bye " << this->_accountIndex << std::endl;
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
    std::cout << "-------------- account : " << this->_accountIndex << " --------------" << std::endl;
    Account::_displayTimestamp();
    std::cout << "amount : " << this->_amount << std::endl;
    std::cout << "nbDeposits : " << this->_nbDeposits << std::endl;
    std::cout << "nbWithdrawals : " << this->_nbWithdrawals << std::endl;
}

void Account::displayAccountsInfos(void) {
    std::cout << "-----------------------------------------" << std::endl;
    Account::_displayTimestamp();
    std::cout << "nbAccounts : " << Account::_nbAccounts << std::endl;
    std::cout << "totalAmount : " << Account::_totalAmount << std::endl;
    std::cout << "totalNbDeposits : " << Account::_totalNbDeposits << std::endl;
    std::cout << "totalNbWithdrawals : " << Account::_totalNbWithdrawals << std::endl;
    std::cout << "-----------------------------------------" << std::endl;
}

int	Account::checkAmount(void) const {
    return this->_amount;
}

void Account::makeDeposit(int deposit) {
    std::cout << this->_accountIndex << " make deposit successfully" << std::endl;
    Account::_displayTimestamp();
    this->_nbDeposits++;
    this->_amount += deposit;
    this->_totalNbDeposits++;
    this->_totalAmount += deposit;
}

bool Account::makeWithdrawal(int withdrawal) {
    if (this->_amount < withdrawal) {
        std::cout << this->_accountIndex << " is lack of balance" << std::endl;
        return false;
    }
    else {
        std::cout << this->_accountIndex << " make withdrawal successfully" << std::endl;
        Account::_displayTimestamp();
        this->_nbWithdrawals++;
        this->_amount -= withdrawal;
        this->_totalNbWithdrawals++;
        this->_totalAmount -= withdrawal;
        return true;
    }
}