#include<iostream>

class Baisc
{
public:
	Baisc() { std::cout << "Baisc constructor" << std::endl; };
	virtual ~Baisc() { std::cout << "Baisc destruction" << std::endl; };//基类析构函数必须是`virtual`，否则子类析构函数不会被调用，导致内存泄漏

};
class Derived :public Baisc
{
public:
	Derived() { m_Array = new int[6];  std::cout << "Derived constructor" << std::endl; };
	~Derived() { delete[] m_Array; std::cout << "Derived destruction" << std::endl; };
private:
	int* m_Array;
};
class Derived2 :public Derived
{
public:
	Derived2() { std::cout << "Derived2 constructor" << std::endl; };
	~Derived2() { std::cout << "Derived2 destructor" << std::endl; };

};
int main()
{
	Baisc* baisc = new Baisc();
	delete baisc;
	std::cout << "--------------------------------" << std::endl;
	Derived* derived = new Derived();
	delete derived;
	std::cout << "--------------------------------" << std::endl;
	Baisc* poly = new Derived();
	delete poly;
	std::cout << "--------------------------------" << std::endl;
	Derived* derived2 = new Derived2();//基类析构是`virtual`，子类析构就算不写`virtual`，也自动是虚函数
	delete derived2;


}