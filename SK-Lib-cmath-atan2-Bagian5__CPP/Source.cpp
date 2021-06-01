// CPP program to demonstrate the atan2()
// function when both parameters are zero
#include <iostream>
#include <cmath>
#include <conio.h>

/*  Source by GeeksForGeeks
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019
*/

using namespace std;

int main(){
	double x = 0.0, y = 0.0, result;
	result = atan2(y, x);

	cout << "atan2(y/x) = " << result << " radians" << endl;
	cout << "atan2(y/x) = " << result * 180 / 3.141592 << " degrees" << endl;

	_getch();
	return 0;
}
