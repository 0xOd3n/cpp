

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	// Cat x;
	// std::cout << "--------------------------------\n";
	// Cat y(x);
	// std::cout << "--------------------------------\n";
	// Cat	z;
	// std::cout << "--------------------------------\n";

	// z = x;
	// std::cout << "--------------------------------\n";
	
	// {
	// 	//testing deep coping
	// 	Cat cat;
	// 	Cat copycat(cat);
	// 	cat.display_ideas(0);
	// 	copycat.display_ideas(0);
	// 	cat.set_ideas("im a cat person", 0);
	// 	cat.display_ideas(0);
	// 	copycat.display_ideas(0);
	// }

	
	// std::cout << "--------------------------------\n";
	
	// int c = 10;
	// Animal *animal[c];
	// int a = -1;

	// while (++a < c)
	// {
	// 	if (a % 2)
	// 		animal[a] = new Cat();
	// 	else
	// 		animal[a] = new Dog();
	// }
	// while (a--)
    // {
    //     std::cout << a << std::endl;
	// 	delete animal[a];
    // }	
	// std::cout << "--------------------------------\n";
	
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	j->makeSound();
	i->makeSound();

	delete j;
	delete i;
}