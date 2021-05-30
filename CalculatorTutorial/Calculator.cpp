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
			srand(time(NULL));
			return rand() % (int) (y - x + 1) + x;
		default:
			return 0.0;
	}
}
