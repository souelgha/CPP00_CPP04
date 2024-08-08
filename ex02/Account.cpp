/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 14:38:48 by sonouelg          #+#    #+#             */
/*   Updated: 2024/08/08 18:01:32 by sonouelg         ###   ########.fr       */
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
	std::string str;
	std::cout << "entrer l index du compte:" << std::endl;
	std::getline(std::cin, str);
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