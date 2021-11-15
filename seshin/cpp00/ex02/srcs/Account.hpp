/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoyoung <seoyoung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 11:46:09 by seoyoung          #+#    #+#             */
/*   Updated: 2021/11/15 11:48:00 by seoyoung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ************************************************************************** //
//                                                                            //
//                Account.hpp for GlobalBanksters United                	  //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //


#pragma once
#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

// ************************************************************************** //
//                               Account Class                                //
// ************************************************************************** //

class Account {


public:

	typedef Account		t;

	static int	getNbAccounts( void ); //완료
	static int	getTotalAmount( void ); //완료
	static int	getNbDeposits( void ); //완료
	static int	getNbWithdrawals( void ); //완료
	static void	displayAccountsInfos( void ); //완료

	Account( int initial_deposit );//생성자 완료
	~Account( void );//소멸자 완료

	void	makeDeposit( int deposit ); //예금완료
	bool	makeWithdrawal( int withdrawal ); //출금완료
	int		checkAmount( void ) const;
	void	displayStatus( void ) const;//완료


private:

	//모든 객체가 공유하는 변수
	static int	_nbAccounts;
	static int	_totalAmount;
	static int	_totalNbDeposits;
	static int	_totalNbWithdrawals;

	static void	_displayTimestamp(void);

	//객체 하나하나 따로따로 가지고 있는 변수
	int				_accountIndex;
	int				_amount;
	int				_nbDeposits;
	int				_nbWithdrawals;

	Account( void );
};



// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //


#endif /* __ACCOUNT_H__ */
