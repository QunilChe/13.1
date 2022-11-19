//////////////////////////////////////////////////////////////////////////////
// sum.cpp
// файл реалізації функції
#include <math.h>
#include "dod.h"
#include "sum.h"
#include "var.h" // підключили зовнішні оголошення змінних
using namespace nsDod;
using namespace nsVar;
void nsSum::sum() {
	n = 0;
	a = 1;
	S = a;
	do {
		n++;
		dod(); // виклик процедури обчислення доданку
		S += a;
	} while (fabs(a) > e);
}