#include <iostream>
#define LOG(x) std::cout << x << std::endl;

class Log
{
//
//public:// 变量对象
//	const int loglevelerorr = 0;
//	const int loglevelwarning = 1;
//	const int loglevelinfo = 2;

//替换成enum
public:
	enum Level
	{
		erorr=0,warning,info
		// 默认0可不写,写提升可读性
	};



private:
	Level m_LogLevel;//私有成员变量m_

public://方法函数

	void SetLevel(Level level)
	{
		m_LogLevel = level;

	}

	void Erorr(const char* message)
	{
		if (m_LogLevel >= erorr)
			std::cout << "[ERROR]:" << message << std::endl;

	}	
	
	void Warn(const char* message)
	{
		if (m_LogLevel >= warning)
			std::cout << "[WARNING]:" << message << std::endl;

	}
	
	void Info(const char* message)
	{
		if (m_LogLevel >= info)
			std::cout << "[WARNING]:" << message << std::endl;

	}

};

int main()
{

	Log log;
	log.SetLevel(Log::warning);  // LogLevelWarning is inside logclass,need log.LogLevelWarning //set a warning level,have many different level

	log.Erorr("hello");
	log.Warn("hello");//打印一条警告级别日志，内容是hello。
	log.Info("hello");
	std::cin.get();

}