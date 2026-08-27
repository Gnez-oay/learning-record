#include <iostream>
//main.cpp

class Entity
{
public:
	float X, Y;

	~Entity()
	{
		std::cout << "Destoryed Entity" << std::endl;
	}

	Entity()
	{
		X = 0.0f;
		Y = 0.0f;
		std::cout << "Create Entity" << std::endl;
	}

	Entity(float x, float y)
	{
		X = x;
		Y = y;
	}

	
	void Print()
	{
		std::cout << X << "," << Y << std::endl;

	}
};

void Function()
{
	Entity e;
	e.Print();
}

int main()
{
	Function();

	std:: cin.get();
}