#include <iostream>
//main.cpp

class Entity
{
public:
	float X, Y;

	void Move(float xa, float ya)
	{
		X += xa;
		Y += ya;
	}

};

class Player : public Entity
{
public:
	const char* name;

	void PrintName()
	{
		std::cout << name << std::endl;

	}


};


int max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;

}

int main()
{
	
	std::cout << max(3,6) << std::endl;

	std::cout << sizeof(Player) << std::endl;
	std::cin.get();
}

