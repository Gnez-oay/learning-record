#include <iostream>
#include <string>
//main.cpp

class Printable
{
public:
	virtual std::string GetClassName() = 0;
};


class Entity : public Printable
{
public:
	//virtual std::string GetName() { return "Entity"; }
	virtual std::string GetName() = 0;
	std::string GetClassName() override { return "Entity"; }
};

class Player : public Entity //inheritance继承
{
private:
	std::string m_Name; //string char*对比
public:
	Player(const std::string& name) //引用&，不会拷贝，节省内存
		:m_Name(name) {
	} //“：”初始化列表

	std::string GetName() override { return m_Name; }
	std::string GetClassName() override { return "Enti"; }
};

void printf(Entity* entity)
{
	std::cout << entity->GetName() << std::endl;
}

void Print(Printable* obj)
{
	std::cout << obj->GetClassName() << std::endl;

}



int main()
{
	//Entity* e = new Entity ("123");
	Entity* e = new Player("123");
	//printf(e);
	//std::cout << e->GetName() << std::endl;

	Player* p = new Player("Genzoay");
	//std::cout << p->GetName() << std::endl;
	//printf(p);

	Entity* enti = p;
	//printf(enti);
	//std::cout << enti->GetName() << std::endl;

	Print(e);
	Print(p);

	std::cin.get();
}






