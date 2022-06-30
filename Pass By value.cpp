#include<iostream>
using namespace std;

void Fun1(int a)
{
	cout << "I am Void Function\n";
	cout << "A =" << a<<endl;
	a = a + 10;
	cout <<" A = " << a;
}


int main()
{
	int abc = 10;
	cout << "\nI am calling void function\n";
	cout << "\nBefor calling Function A =" << abc;
	Fun1(abc);
	cout << "\nAfter calling Function A =" << abc;
	cout << "\nI am caling Int Function\n";
	
}
