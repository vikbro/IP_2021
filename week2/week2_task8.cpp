#include <iostream>
#include <cmath>
using namespace std;

int main(){
int a, b, c, d, x1, x2;
cin >> a >> b >> c;
d = (b * b) - (4 * a * c);
if (d == 0) {
    x1 = -b / 2 * a;
    cout << "X1 = " << x1;
} else if (d > 0){
    x1 = (-b + sqrt(d))/ 2 * a;
    x2 = (-b - sqrt(d))/ 2 * a;
    cout << "X1 = " << x1 << endl;
    cout << "X2 = " << x2 << endl;
} else if (d < 0){
    cout << "The roots do not exist, or the roots are imaginary." << endl;
}
    return 0;
}