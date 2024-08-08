/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 14:38:48 by sonouelg          #+#    #+#             */
/*   Updated: 2024/08/08 15:30:01 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include<iostream>
#include<string>

Account::Account(void)
{
}

Account::Account( int initial_deposit )
{
}

Account::~Account( void )
{
}
int	Account::getNbAccounts( void )
{
	return( _nbAccounts);
}
int	Account::getTotalAmount ( void )
{
	return(_totalAmount);
}
int Account::getNbDeposits( void )
{
	return(_totalNbDeposits);
}
int	Account::getNbWithdrawals( void )
{
	return(_totalNbWithdrawals);
}
void Account::displayAccountsInfos( void )
{
	std::cout << "index:" << _nbAccounts << ";total:" << _totalAmount;
	std::cout << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals;
}