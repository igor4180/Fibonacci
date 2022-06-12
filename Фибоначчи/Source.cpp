#include<iostream>
#include<conio.h>
using namespace std;
#define FIBONACCHI
void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef FIBONACCHI
	int a = 1, b = 0, c = 0;
	do
	{
		cout << " c = " << c << endl;
		c = a + b;
		a = b;
		b = c;

	return c;
	} while (b <= 50);
	_getch();
	
#endif // FIBONACCHI


}
