#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class String
{
public:
	String(const char *str = NULL);
	String(const String &other);
	~String(void);
	String & operator =(char *str);
	String & operator =(const String &other);
	int operator ==(String &other);
	int operator ==(char *str);
	void print();
private:
	char *m_data;
	int length;
};
String::String(const char *str)
{
	length = strlen(str) + 1;
	m_data = new char[length];
	strcpy(m_data,str);
}
String::String(const String &other)
{
	m_data = new char[other.length];
	strcpy(m_data,other.m_data);
	length = other.length;
}
String::~String(void)
{
	delete [] m_data;
}
String & String::operator =(char *str)
{
	delete [] m_data;
	length = strlen(str) + 1;
	m_data = new char [length];
	strcpy(m_data,str);
	return *this;	
}
String & String::operator =(const String &other)
{
	if(this == &other)return *this;
	delete m_data;
	m_data = new char [other.length];
	strcpy(m_data,other.m_data);
	return *this;
}
void String::print()
{
	cout << m_data << endl;
}
int main()
{
	String s("aaa");
//	s = "qqq";
//	s.print();
	String b("");
    b = s;
	b.print();
	return 0;
}

