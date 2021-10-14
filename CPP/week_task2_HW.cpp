#include <iostream>
using namespace std;

int main(){

double celsius, farenheit, kelvin;

cin >> farenheit;

celsius = ((farenheit -32)*5)/9;
kelvin = (celsius+273.15);

cout<< celsius <<endl;
cout << kelvin << endl;

}