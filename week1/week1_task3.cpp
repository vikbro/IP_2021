#include <iostream>
using namespace std;

int main() {
  int firstNumber, secondNumber, temp = 0;

    cin >> firstNumber ;
    cin >> secondNumber ;

    temp = firstNumber;
    firstNumber = secondNumber;
    secondNumber = temp;

    cout << firstNumber << endl;
    cout << secondNumber << endl;

  return 0;
}
