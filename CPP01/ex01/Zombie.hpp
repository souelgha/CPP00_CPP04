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
	Zombie(std::string zombiename);
	~Zombie();
	void announce(void);
};

Zombie* ZombieHorde(int N, std::string name);


#endif