#include<iostream>

class Test
{
private:
	int m_hour;
	const int m_min;
	int& m_s;
public:
	Test(int hour = 3, int min = 4, int ss = 5) : m_hour(hour), m_min(min), m_s(ss)
	{ }

	void printf()
	{
		std::cout << m_hour << std::endl;
		std::cout << m_min<< std::endl;
		std::cout << m_s << std::endl;

	}


};


int main()
{
	Test t;
	t.printf();

}