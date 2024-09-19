/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 14:38:48 by sonouelg          #+#    #+#             */
/*   Updated: 2024/08/28 16:52:52 by sonouelg         ###   ########.fr       */
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
	std::cout << "index:" << this->_accountIndex << ";amount:" << initial_deposit << ";created" << std::endl;

}
Account::Account(void)
{

}
Account::~Account( void )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << Account::checkAmount() << ";closed" << std::endl;
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
	std::cout << "accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount();
	std::cout << ";deposits:" << Account::getNbDeposits() << ";withdrawals:" << Account ::getNbWithdrawals() << std::endl;
}


void Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << Account::checkAmount();
	std::cout << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this-> _nbWithdrawals << std::endl;
}
void Account::makeDeposit(int deposit)
{
	if (deposit > 0)
	{
		Account::_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << Account::checkAmount() ;
		this->_amount +=deposit;
		this->_totalAmount+=deposit;
		this->_totalNbDeposits++;
		this->_nbDeposits++;
		std::cout << ";deposit:" << deposit << ";amount:" << Account::checkAmount();
		std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;
	}
	else 
	{
		std::cout << ";deposit:refused" << std::endl;
		return;
	}
}
bool Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << Account::checkAmount();
	if(withdrawal > this->_amount)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return(false);
	}
	else
	{
		this->_amount-=withdrawal;
		this->_nbWithdrawals++;
		this->_totalAmount-=withdrawal;
		this->_totalNbWithdrawals++;
		std::cout << ";withdrawal:" << withdrawal << ";amount:" << Account::checkAmount();
		std::cout << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	}
	return(true);
}

int Account::checkAmount(void) const
{
	return(this->_amount);
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