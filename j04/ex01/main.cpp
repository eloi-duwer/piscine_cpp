#include "Enemy.hpp"
#include "AWeapon.hpp"
#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include <string>
#include <iostream>

int main()
{
	Character	*zaz = new Character("zaz");
	Character	zaz2(*zaz);
	Character	randomGuy;

	std::cout << *zaz;
	Enemy* b = new RadScorpion();
	Enemy* c = new SuperMutant();

	Enemy d = *c;

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->equip(pf);
	zaz->attack(b);
	std::cout << *zaz;
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
	delete zaz; // RIP

	zaz2.equip(pr);
	randomGuy.equip(pf);

	std::cout << zaz2;
	std::cout << randomGuy;

	std::cout << c->getHP() << std::endl;
	randomGuy.attack(c);
	std::cout << c->getHP() << std::endl;
	zaz2.attack(c);
	std::cout << c->getHP() << std::endl;
	zaz2.attack(c);
	zaz2.attack(c);
	zaz2.attack(c);
	zaz2.attack(c);
	zaz2.attack(c);
	zaz2.attack(c); // enemy dies, but there is no way to know he has been deleted...
	zaz2.attack(&d);
	zaz2.attack(&d); // not executed, zaz2 has no more AP
	std::cout << zaz2;
	zaz2.recoverAP();
	std::cout << zaz2;
	delete pr;
	delete pf; //Leak check?
	return 0;
}
