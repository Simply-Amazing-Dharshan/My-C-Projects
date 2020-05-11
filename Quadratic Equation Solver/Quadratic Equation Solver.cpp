#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a, b, c;
	float x1, x2;
	cout << "To find the solution of your Quadratic Equation ax^2 + bx + c, Enter the values of a,b and c wher a is not 0  ";
		cout << "Enter a: ";
		cin >> a;
		cout << "Enter b: ";
		cin >> b;
		cout << "Enter c: ";
		cin >> c;
		x1 = (float)((-b) + sqrt(b * b - 4 * a * c)) / (2 * a);
		x2 = (float)((-b) - sqrt(b * b - 4 * a * c)) / (2 * a);
		cout << "The Roots/Solutions of the Equations are: " << x1 << " and " << x2;

	return 0;

}