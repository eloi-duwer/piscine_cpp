#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
#include "Contact.hpp"

Contact::Contact(void) : _index(Contact::_nbInstances), _isEmpty(true) {

	#ifdef DEBUG
	std::cout << "Contact created, index: " << this->_index << std::endl;
	#endif
	Contact::_nbInstances += 1;

}

Contact::~Contact(void) {

	#ifdef DEBUG
	std::cout << "Contact destroyed" << std::endl;
	#endif

}

bool	Contact::isEmpty(void) const {

	return (this->_isEmpty);

}

int	Contact::addContact(void) {

	#ifdef DEBUG
	std::cout << "Going to add a contact, index = " << this->_index << std::endl;
	#endif
	std::cout << "Enter contact's first name:" << std::endl;
	std::cin >> this->_firstName;
	std::cout << "Enter contact's last name:" << std::endl;
	std::cin >> this->_lastName;
	std::cout << "Enter contact's nickname:" << std::endl;
	std::cin >> this->_nickname;
	std::cout << "Enter contact's login:" << std::endl;
	std::cin >> this->_login;
	std::cout << "Enter contact's postal adress:" << std::endl;
	std::cin >> this->_postalAdress;
	std::cout << "Enter contact's email adress:" << std::endl;
	std::cin >> this->_emailAdress;
	std::cout << "Enter contact's phone number:" << std::endl;
	std::cin >> this->_phoneNumber;
	std::cout << "Enter contact's birthday date:" << std::endl;
	std::cin >> this->_birthdayDate;
	std::cout << "Enter contact's favorite meal:" << std::endl;
	std::cin >> this->_favoriteMeal;
	std::cout << "Enter contact's darkest secret:" << std::endl;
	std::cin >> this->_darkestSecret;
	this->_isEmpty = false;
	std::cout << "Contact created!" << std::endl;
	return 1;

}

Contact *Contact::findEmptyContact(Contact *annuaire) {

	int	i = 0;
	while (i < Contact::_nbInstances) {
		if (annuaire[i].isEmpty() == true)
			return (&annuaire[i]);
		++i;
	}
	return NULL;

}

void	Contact::printFullInfos() const {
	std::cout << "First name: " << this->_firstName << std::endl;
	std::cout << "Lase name: " << this->_lastName << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Login: " << this->_login << std::endl;
	std::cout << "Postal adress: " << this->_postalAdress << std::endl;
	std::cout << "Email adress: " << this->_emailAdress << std::endl;
	std::cout << "Phone number: " << this->_phoneNumber << std::endl;
	std::cout << "Birthday date: " << this->_birthdayDate << std::endl;
	std::cout << "Favorite meal: " << this->_favoriteMeal << std::endl;
	std::cout << "Darkest secret: " << this->_darkestSecret << std::endl;
}

void	Contact::printBasicInfos() const {
	std::string buff;

	std::cout << std::right << std::setw(10) << this->_index << "|";
	if (this->_firstName.size() >= 10)
		buff = this->_firstName.substr(0, 9) + ".";
	else
		buff = this->_firstName;
	std::cout << std::right << std::setw(10) << buff << "|";
	if (this->_lastName.size() >= 10)
		buff = this->_lastName.substr(0, 9) + ".";
	else
		buff = this->_lastName;
	std::cout << std::right << std::setw(10) << buff << "|";
	if (this->_nickname.size() >= 10)
		buff = this->_nickname.substr(0, 9) + ".";
	else
		buff = this->_nickname;
	std::cout << std::right << std::setw(10) << buff << std::endl;
}

void	Contact::printContacts(Contact *annuaire) {

	int i = 0;

	std::cout << "     Index|First name| Last name|  Nickname" << std::endl;
	while (annuaire[i].isEmpty() == false) {
		annuaire[i].printBasicInfos();
		++i;
	}
}

void	Contact::searchContacts(Contact *annuaire) {

	int i;

	std::cout << "Type an index to get user informations, type -1 to quit search" << std::endl;
	while (1) {
		std::cin >> i;
		if (std::cin.good()) {
			if (i == -1)
				return;
			else if (i < 0 || i >= Contact::_nbInstances || annuaire[i].isEmpty() == true)
				std::cout << "This index doesn't exist" << std::endl;
			else
				annuaire[i].printFullInfos();
		}
		else {
			std::cout << "This is not a number!" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	}
	return;
}

int	Contact::_nbInstances = 0;
