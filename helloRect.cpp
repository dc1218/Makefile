#include <iostream>
#include "rect.h"

using namespace std;

int main(int argc,char** argv)
{
	Rect arect(3.0,4.0);
	cout << "D=" << arect.CalcDiagonal() << endl;
	cout << "A=" << arect.CalcArea()<< endl;
	return 0;
}