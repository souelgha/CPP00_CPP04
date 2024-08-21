#ifndef ZOMBIE_H
	#define ZOMBIE_H

#include<string>
#include<iostream>

class Zombie
{
private:
	std::string _name;
public:
	Zombie(void);
	Zombie(std::string nom);
	~Zombie();
	void announce(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);



#endif