/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreno <lmoreno@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 13:27:41 by lmoreno           #+#    #+#             */
/*   Updated: 2022/09/28 13:27:43 by lmoreno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip> // std::put_time

Account::Account( int initial_deposit ) : _accountIndex(_nbAccounts), _amount(initial_deposit) {

	Account::_displayTimestamp();
	//Account::displayStatus();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
	Account::_nbAccounts += 1;
	Account::_totalAmount += initial_deposit;
	return ;
}

Account::~Account ( )
{
	Account::_displayTimestamp();
	//Account::displayStatus();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
	return ;
}

void Account::_displayTimestamp(void) {
	std::time_t t = std::time(0);

	std::cout << std::put_time(localtime(&t), "[%Y%m%d_%H%M%S] ");
	return ;
}

void	Account::displayStatus( void ) const {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
	return ;
}

void	Account::displayAccountsInfos( void ) {
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" << "p_amount" << checkAmount() << ";";
	std::cout << "deposit:" << deposit << ";";

	this->_amount += deposit;
	this->_nbDeposits += 1;
	std::cout << "amount:" << checkAmount() << ";";
	std::cout << "nb_deposits:" << _nbDeposits << std::endl;
	Account::_totalNbDeposits += 1;
	Account::_totalAmount += deposit;
	return ;
}

int	Account::checkAmount ( void ) const {
	return (this->_amount);
}

bool	Account::makeWithdrawal( int withdrawal) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" << "p_amount:" << checkAmount() << ";";
	if ( withdrawal > checkAmount())
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	std::cout << "withdrawal:" << withdrawal << ";";
	this->_amount -= withdrawal;
	this->_nbWithdrawals += 1;
	std::cout << "amount:" << checkAmount() << ";";
	std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
	Account::_totalNbWithdrawals += 1;
	Account::_totalAmount -= withdrawal;
	return (true);
}

int	Account::getNbAccounts ( void ) { return (Account::_nbAccounts); }
int	Account::getTotalAmount ( void ) { return (Account::_totalAmount); }
int	Account::getNbDeposits ( void ) { return (Account::_totalNbDeposits); }
int	Account::getNbWithdrawals ( void ) { return (Account::_totalNbWithdrawals); }

 int Account::_nbAccounts = 0;
 int Account::_totalAmount = 0;
 int Account::_totalNbDeposits = 0;
 int Account::_totalNbWithdrawals = 0;
