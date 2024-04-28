#include<iostream>
using namespace std;

class parent
{
public:
	virtual void print()
	{
		cout << "Parent class" << endl;
	}
};
class child : public parent
{
public:
	void print()
	{
		cout << "Child class" << endl;
	}
};
int main()
{
	parent p;
	p.print();
	child c;
	c.print();

}
