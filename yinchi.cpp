// 555.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;
class CFeet
{
private:
	int feet;
	int inches;
public:
	int getfeet();
	int getinches();
	void setvalue(int fe, int in);
	void display();
	CFeet  operator+(CFeet&obj);
};
int CFeet::getfeet()
{
	return feet;
}
int CFeet::getinches()
{
	return inches;
}
void CFeet::setvalue(int fe,int in)
{
	feet = fe + in / 12;
	inches = in % 12;
}
void CFeet::display()
{
	cout << feet << "英尺" << inches << "英寸" << endl;
}
CFeet CFeet::operator+(CFeet&obj)
{
	CFeet t;
	t.setvalue(feet + obj.feet, inches + obj.inches);
	return t;
}

int main()
{
	CFeet a, b, c;
	a.setvalue(10, 5);
	b.setvalue(12,8);
	c = a+ b;
	c.display();
    return 0;
}

