
#include<halftone.h>
#include<iostream>
using namespace halftone;
using namespace std;

int main(){
	Image<short> a(4,4,1);

	cout << a << endl;

	cout << a * a << endl;
	cout << a + a << endl;
	a.InvertRectangle(0, 0, 0, 0);
	cout << a << endl;
	cout << a.FillFactor() << endl;
}
