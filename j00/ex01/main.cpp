#include <string>
#include <iostream>
#include <iomanip>
#include "Contact.hpp"

int main( void ) {

	Contact 	annuaire[8];
	bool 		continuer = true;
	std::string	buff;
	Contact 	*contact;

	while (continuer) {
		std::cin >> buff;
		if (buff.compare("EXIT") == 0)
			continuer = false;
		else if (buff.compare("ADD") == 0) {
			contact = Contact::findEmptyContact(annuaire);
			if (contact == NULL)
				std::cout << "Can't add more contacts" << std::endl;
			else
				contact->addContact();
		}
		else if (buff.compare("SEARCH") == 0) {
			Contact::printContacts(annuaire);
			Contact::searchContacts(annuaire);
		}
	}
	return (0);

}
