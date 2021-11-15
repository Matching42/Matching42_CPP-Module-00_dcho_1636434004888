#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

//생성자
Account::Account( int initial_deposit )
{
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _nbAccounts++;
    _totalAmount = _totalAmount + _amount;
    _displayTimestamp();
   std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::Account(void)
{
}

//소멸자
Account::~Account(void)
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

//static 멤버함수도 static 멤버변수처럼 외부 정의 땐 static 떼기
int Account::getNbAccounts(void)
{
    return(Account::_nbAccounts);
}

int  Account::getTotalAmount(void)
{
    return(Account::_totalAmount);
}

int  Account::getNbDeposits(void)
{
    return(Account::_totalNbDeposits);
}

int  Account::getNbWithdrawals(void)
{
    return(Account::_totalNbWithdrawals);
}

int			Account::checkAmount(void) const
{
	return (_amount);
}

//time_stamp출력
void	Account::_displayTimestamp(void)
{
    time_t timer;

    timer = time(NULL);
    struct tm* t = localtime(&timer);
    std::cout << "[" << t->tm_year + 1900 
                << std::setfill('0') << std::setw(2) << t->tm_mon
                << std::setfill('0') << std::setw(2) << t->tm_mday 
                << "_" 
                << std::setfill('0') << std::setw(2) << t->tm_hour
				<< std::setfill('0') << std::setw(2) << t->tm_min
				<< std::setfill('0') << std::setw(2) << t->tm_sec << "]";
}

//전체 계좌관련 print(static과 관련된 변수)
void  Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << " account:" << _nbAccounts << ";total:" << _totalAmount <<
    ";deposit" << _totalNbDeposits << ";withdrals:" << _totalNbWithdrawals << std::endl;
}

//계좌 각각 print(객체가 각각 가지고 있는 변수)
void Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount <<
    ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

//예금하는 메소드
void	Account::makeDeposit(int deposit)
{
    int p_amount;
    p_amount = _amount;
    _amount = _amount + deposit;
    _nbDeposits++;
    _totalNbDeposits++;
    _totalAmount = _totalAmount + deposit;
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";p_amount:" << p_amount << 
    ";deposit" << deposit << ";amount:" << _amount << ";nb_deposit:" << _nbDeposits << std::endl;
}

//출금 메소드
bool	Account::makeWithdrawal(int withdrawal)
{
    int p_amount;

    p_amount = _amount;
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";p_amount:" << p_amount;
    if (_amount < withdrawal)
    {
        std::cout << ";withdrawal:refused" << std::endl;
        return (false);
    }
    _amount = _amount - withdrawal;
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    _totalAmount = _totalAmount - withdrawal;
    std::cout << ";withdrawal:" << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    return (true);
}