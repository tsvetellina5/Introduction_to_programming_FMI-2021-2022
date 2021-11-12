#include <iostream>
using namespace std;

const int SIZE = 5;

int main()
{
	bool conditions[10]; //10 - true/false
	int numbers[SIZE]; //5 int
	double floatingNumbers[] = { 0.5,1.5,2.5,5.5 }; //4 doubles
	int numbers2[] = { 3 + 2, 2 * 4 }; //2 int , Data: 5 , 8

	//sizeof(<arrayName>) / sizeof(<arrayName[index]>) - Works but with risk
 	//sizeof(<arrayName>) / sizeof(<type>)

	cout << sizeof(bool) << endl; //1
	cout << sizeof(conditions) / sizeof(bool) << endl; // 10/1 = 1
	cout << sizeof(numbers) << endl; //20
	cout << sizeof(numbers) / sizeof(int) << endl; //20 : 4 = 5
	cout << sizeof(floatingNumbers) / sizeof(double) << endl; // 32 : 8 = 4
	
	return 0;
}
