#include<iostream>
using namespace std;
struct person
{
	string name;
	int salary;
};

void updatesalary(int salary)
{
	salary = salary + 1000;
	cout << "the salary after update " << salary << endl;
}
void main()
{
	int x;
	cout << "enter your salary" << endl;
	cin >> x;
	updatesalary(x);
}
