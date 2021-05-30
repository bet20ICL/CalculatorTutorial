#include "Calculator.h"
#include <cmath>
#include <stdlib.h>
#include <time.h>

double Calculator::Calculate(double x, char oper, double y)
{
	switch (oper) {
		case '+':
			return x + y;
		case '-':
			return x - y;
		case '*':
			return x * y;
		case '/':
			return x / y;
		case '^':
			return pow(x,y);
		case '#':
			return rand() % (int) (y - x) + x;
		default:
			return 0.0;
	}
}
