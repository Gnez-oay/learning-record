#include <iostream>
//main.cpp

/*
class Singleton
{
private:
	static Singleton* s_instance;

public:
	 static Singleton& get()
	{
		return* s_instance;
	}

	void Hello() {}

};
Singleton* Singleton::s_instance = nullptr;

*/
class Singleton
{

public:
	static Singleton get()
	{

		static Singleton s_instance;
		return s_instance;
	}

	void Hello() {}


};

int main()
{

	Singleton::get().Hello() ;


	std:: cin.get();
}