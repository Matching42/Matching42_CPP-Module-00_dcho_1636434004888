// ************************************************************************** //
//                                                                            //
//                tests.cpp for GlobalBanksters United                        //
//                Created on  : Thu Nov 20 23:45:02 1989                      //
//                Last update : Wed Jan 04 09:23:52 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //

#include <vector>
#include <algorithm>
#include <functional>
#include "Account.hpp"
#include <iostream>
int		main( void ) {

	//accout 객체를 여러개 담을 수 있는 컨테이너->같은 타임의 데이터를 모든 객체(동적할당)
	typedef std::vector<Account::t>							  accounts_t;
	//int형 변수를 여러개 담을 수 있는 컨테이너
	typedef std::vector<int>								  ints_t;
	//iterator형 변수 2개->pair컨테이너
	typedef std::pair<accounts_t::iterator, ints_t::iterator> acc_int_t;

	int	const				amounts[]	= { 42, 54, 957, 432, 1234, 0, 754, 16576 };
	size_t const			amounts_size( sizeof(amounts) / sizeof(int) );
	//amount ~ amount + amount_size 범위로 객체 생성 & 복사(range constructor)->생성자 호출(created)
	accounts_t				accounts( amounts, amounts + amounts_size );
	std::cout << std::endl;
	//accout의 요소를 참고하기 위해 시작과 끝 주소 저장
	accounts_t::iterator	acc_begin	= accounts.begin();
	accounts_t::iterator	acc_end		= accounts.end();

	//deppsit값
	int	const			d[]			= { 5, 765, 564, 2, 87, 23, 9, 20 };
	size_t const		d_size( sizeof(d) / sizeof(int) );
	//생성
	ints_t				deposits( d, d + d_size );
	ints_t::iterator	dep_begin	= deposits.begin();
	ints_t::iterator	dep_end		= deposits.end();

	//withdrawals값
	int	const			w[]			= { 321, 34, 657, 4, 76, 275, 657, 7654 };
	size_t const		w_size( sizeof(w) / sizeof(int) );
	//생성
	ints_t				withdrawals( w, w + w_size );
	ints_t::iterator	wit_begin	= withdrawals.begin();
	ints_t::iterator	wit_end		= withdrawals.end();

	Account::displayAccountsInfos();
	std::cout << std::endl;


	//시작과 끝지점의 주소(iterator)를 받아서 3번째 인자로 주어진 함수 적용
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );
	std::cout << std::endl;


	//account의 첫번째 요소부터 마지막요소까지, dep의 첫번째 요소부터 마지막 요소까지
	for ( acc_int_t it( acc_begin, dep_begin );
		  it.first != acc_end && it.second != dep_end;
		  ++(it.first), ++(it.second) ) {

		(*(it.first)).makeDeposit( *(it.second) );
	}
	std::cout << std::endl;


	Account::displayAccountsInfos();
	std::cout << std::endl;


	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );
	std::cout << std::endl;

	for ( acc_int_t it( acc_begin, wit_begin );
		  it.first != acc_end && it.second != wit_end;
		  ++(it.first), ++(it.second) ) {
		(*(it.first)).makeWithdrawal( *(it.second) );
	}
	std::cout << std::endl;

	Account::displayAccountsInfos();
	std::cout << std::endl;

	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );
	std::cout << std::endl;

	return 0;
}


// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //