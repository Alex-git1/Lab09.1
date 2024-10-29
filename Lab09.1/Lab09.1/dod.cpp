#include "dod.h"
#include "var.h"
using namespace nsVar;
void nsDod::dod() {
	R = (-1.0) * (x * x) / n;
	a *= R;
}