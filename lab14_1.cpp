#include <iostream>
using namespace std;


int main(){
	int a = 5;
	char b = 'A';
	char &c = b;
	int *x = &a;
	char *y = &b;
	int **z = &x;
	cout << "----Value----" << "\n";
	cout << a << "\n";
	cout << b << "\n";
	cout << c << "\n";
	cout << *x << "\n";
	cout << y << "\n";
	cout << **z << "\n";
	cout << "----Address----" << "\n";
	cout << &a << "\n";
	cout << (void *)&b << "\n";
	cout << (void *)&c << "\n";
	cout << &x << "\n";
	cout << &y << "\n";
	cout << &z << "\n";
	c='F';
	cout << "----Value----" << "\n";
	cout << a << "\n";
	cout << b << "\n";
	cout << c << "\n";
	cout << *x << "\n";
	cout << y << "\n";
	cout << **z << "\n";
	*y = 'W';
	cout << "----Value----" << "\n";
	cout << a << "\n";
	cout << b << "\n";
	cout << c << "\n";
	cout << *x << "\n";
	cout << y << "\n";
	cout << **z << "\n";
	*x = 6;
	cout << "----Value----" << "\n";
	cout << a << "\n";
	cout << b << "\n";
	cout << c << "\n";
	cout << *x << "\n";
	cout << y << "\n";
	cout << **z << "\n";
	**z = 7;
	cout << "----Value----" << "\n";
	cout << a << "\n";
	cout << b << "\n";
	cout << c << "\n";
	cout << *x << "\n";
	cout << y << "\n";
	cout << **z << "\n";
	
	
	
	return 0;
}
