#include <iostream>
#include <string>

class TimeLife
{
	public:
	TimeLife()
	{
		std::cout << "TimeLife created" << std::endl;
	}
	~TimeLife()
	{
		std::cout << "TimeLife destroyed" << std::endl;
	}

};

int main()
{
	{
		//栈内存
		TimeLife e1;
		//堆
		TimeLife *e2 =new TimeLife();
	
	}
	std::cin.get();
}