#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {

public:

	Contact(void);
	~Contact(void);
	int		addContact(void);
	bool 		isEmpty(void) const;
	void		printBasicInfos() const;
	void		printFullInfos() const;
	static Contact	*findEmptyContact(Contact *annuaire);	
	static void	printContacts(Contact *annuaire);
	static void	searchContacts(Contact *annuaire);

private:

	static int 	_nbInstances;
	int		_index;
	bool		_isEmpty;
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_login;
	std::string	_postalAdress;
	std::string	_emailAdress;
	std::string	_phoneNumber;
	std::string	_birthdayDate;
	std::string	_favoriteMeal;
	std::string	_darkestSecret;
};

#endif
