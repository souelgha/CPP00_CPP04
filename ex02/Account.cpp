/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonia <sonia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 14:38:48 by sonouelg          #+#    #+#             */
/*   Updated: 2024/08/18 16:33:06 by sonia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include<iostream>
#include<string>
#include<ctime>

/*initialisation des membres statics en dehors de la class */
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit):
 _accountIndex(Account::_nbAccounts++), _amount(initial_deposit), 
 _nbDeposits(0), _nbWithdrawals(0)
{
	_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << initial_deposit << ";created" << std::endl;

}
Account::Account(void)
{

}
Account::~Account( void )
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
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
	Account::_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount;
	std::cout << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}


void Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount ;
	std::cout << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}
void Account::makeDeposit(int deposit)
{
	if (deposit > 0)
	{
		Account::_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount ;
		_amount +=deposit;
		_totalAmount+=deposit;
		_totalNbDeposits++;
		_nbDeposits ++;
		std::cout << ";deposits:" << deposit << ";amount:" << _amount;
		std::cout << ";nb_deposits:" << _nbDeposits << std::endl;
	}
}
bool Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount ;
	if(withdrawal > _amount)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return(false);
	}
	else
	{
		_amount-=withdrawal;
		_nbWithdrawals++;
		_totalAmount-=withdrawal;
		_totalNbWithdrawals++;
		std::cout << ";withdrawal:" << withdrawal << ";amount:" << _amount;
		std::cout << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	}
	return(true);
}

int Account::checkAmount(void) const
{
	return(_amount);
}

void Account::_displayTimestamp(void)
{
	std::time_t maintenant = std::time(0);
	std::tm *localTime= std::localtime(&maintenant);
	std::cout << "[" << (localTime->tm_year + 1900);
	if(localTime->tm_mon < 10)
		std ::cout << "0" << (localTime->tm_mon + 1);
	else 
		std ::cout << (localTime->tm_mon + 1);
	std::cout << localTime->tm_mday;
	std::cout << "_" << localTime->tm_hour << localTime->tm_min << localTime->tm_sec << "] ";
}