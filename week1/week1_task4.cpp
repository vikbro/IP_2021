#include <iostream>
using namespace std;

int main(){

    int number, firstDigit, secondDigit, thirdDigit, sum;

    cin>> number;

    thirdDigit = number%10;
    secondDigit = (number/10)%10;
    firstDigit = (number/100)%10;

    sum = firstDigit + secondDigit + thirdDigit;

    cout<< firstDigit << endl;
    cout<< secondDigit << endl;
    cout<< thirdDigit << endl;
    cout<< sum << endl;

    return 0;
}
