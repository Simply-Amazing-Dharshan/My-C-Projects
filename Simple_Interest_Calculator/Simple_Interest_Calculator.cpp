#include<iostream>
using namespace std;
int  main()
{
	int p, r, t;
	float si;

	cout << "Enter The Principal Amount: " ;
	cin >> p;

	cout << "Enter the Rate of interest in %: ";
	cin >> r;

	cout << "Enter the time taken in Years: ";
	cin >> t;

	si = (float) p * r * t / 100;

	cout << "The simple interest is: " << si << endl;
	return 0;
}