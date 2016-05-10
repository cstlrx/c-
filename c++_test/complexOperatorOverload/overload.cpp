#include <iostream>
//#include <>
using namespace std;

class m_complex
{
	public:
		m_complex(double r=0.0, double i = 0.0);
		m_complex operator +(const m_complex &c);
		m_complex operator -(const m_complex &c);
		m_complex operator -();
		void print();
	private:
		double real;
		double imag;
};
m_complex::m_complex (double r, double i)
{
	real = r;
	imag = i;
}
m_complex m_complex::operator +(const m_complex &c)
{
	return m_complex(real + c.real,imag + c.imag);
}
m_complex m_complex::operator -(const m_complex &c)
{
	return m_complex(real - c.real,imag - c.imag);
}
m_complex m_complex::operator -()
{
	return m_complex(-real, -imag);
}
void  m_complex:: print()
{
	cout <<" (" << real<< "," << imag <<")" << endl;
}
int main()
{
	m_complex cpx1(3,4);
	m_complex cpx2(1,2);
	m_complex cpx3(5,6);
	m_complex cpx;
	cpx = -(cpx1+cpx2+cpx3);
	cpx.print();

	return 0;
}
