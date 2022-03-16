#include "Account.hpp"

Account::Account( int initial_deposit )
{
	Account::_nbAccounts += 1;
	return;
}

Account::~Account( void )
{
	Account::_nbAccounts -= 1;
	return;
}

int	getNbAccounts( void )
{

}

int	getTotalAmount( void )
{

}

int	getNbDeposits( void )
{

}

int	getNbWithdrawals( void )
{

}

void	displayAccountsInfos( void )
{
	std::cout << "index:" << "amount: ";
	std::cout << "deposits:" << "withdrawals:" <<std::endl;
}

void	Account::makeDeposit( int deposit )
{

}

bool	Account::makeWithdrawal( int withdrawal )
{

}

int		Account::checkAmount( void ) const
{

}

void	Account::displayStatus( void ) const
{

}

// int	Account::_displayTimestamp( void )
// {

// }

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
