

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap default contructor called\n";
    this->_name = "FragTrap";
    this->Hit_point = 100;
    this->Energy_point = 100;
    this->Attack_damage = 30;
}

FragTrap::FragTrap(std::string& name)
{
    std::cout << "FragTrap constructor called\n";
    this->_name = name;
    this->Hit_point = 100;
    this->Energy_point = 100;
    this->Attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap& copy)
{
    std::cout << "FragTrap copy constructor called\n";
	*this = copy; 
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called\n";
}

FragTrap&       FragTrap::operator=(const FragTrap& copy)
{
    if (this == &copy)
        return (*this);
    this->Hit_point = copy.Hit_point;
    this->Energy_point = copy.Energy_point;
    this->Attack_damage = copy.Attack_damage;
    return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "positive high fives request\n";
}
