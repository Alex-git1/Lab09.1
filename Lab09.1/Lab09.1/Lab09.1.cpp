#include <iostream>
#include <math.h>
#include <iomanip>
#include "dod.h"
#include "sum.h"
#include "var.h"
using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;
int main()
{
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> eps;

    cout << fixed;
    cout << "-------------------------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
        << setw(12) << "exp(-x^2)" << " |"
        << setw(10) << "S" << " |"
        << setw(5) << "n" << " |" << endl;
    cout << "-------------------------------------------" << endl;

    x = xp;
    while (x <= xk) {
        sum();
        cout << "|" << setw(7) << setprecision(2) << x << " |"
            << setw(12) << setprecision(5) << exp(-x * x) << " |"
            << setw(10) << setprecision(5) << S << " |"
            << setw(5) << n << " |" << endl;

        x += dx;
    }

    cout << "-------------------------------------------" << endl;
    return 0;
}