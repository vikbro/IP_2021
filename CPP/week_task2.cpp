#include <iostream>
#include <cmath>
using namespace std;

int main() {
    //x1, x2
    int firstNumber,  thirdNumber;
    //y1,y2
    int secondNumber, fourthNumber;
    double distance;

    cin >> firstNumber;
    cin >> secondNumber;
    cin >> thirdNumber;
    cin >> fourthNumber;
    
    distance= sqrt((thirdNumber - firstNumber)*(thirdNumber - firstNumber)
     + (fourthNumber - secondNumber)*(fourthNumber - secondNumber));

    cout << distance << endl;
    

  return 0;
}