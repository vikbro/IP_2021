#include <iostream>
#include <cmath>
using namespace std;

int main(){

double value;
int currencyInput, currencyOutput;
string currencyNameInput, currencyNameOutput;
cin >> value;
cin >> currencyNameInput;
cin >> currencyNameOutput;
if(value < 0){
    cout << "Error";
}
if(currencyNameInput == "BGN"){
    currencyInput = 1;
}else if (currencyNameInput == "EUR"){
    currencyInput = 2;
}else if (currencyNameInput == "GBD"){
    currencyInput = 3;
}else if (currencyNameInput == "USD"){
    currencyInput = 4;
}else {
    cout << "Invalid input currency.";
}

if(currencyNameOutput == "BGN"){
    currencyOutput = 1;
}else if (currencyNameOutput == "EUR"){
    currencyOutput = 2;
}else if (currencyNameOutput == "GBD"){
    currencyOutput = 3;
}else if (currencyNameOutput == "USD"){
    currencyOutput = 4;
}else{
    cout << "Inavlid output currency.";
}
switch (currencyInput)
{
case 1:
    switch (currencyOutput)
    {
    case 1:
        cout << value;
        break;
    case 2:
        cout << value*0.51; 
        break;
    case 3:
        cout << value*0.44;
        break;
    case 4:
        cout << value*0.59;
        break;
    }
break;
case 2:
    switch (currencyOutput)
    {
    case 1:
        cout << value*1.96;
        break;
    case 2:
        cout << value; 
        break;
    case 3:
        cout << value*0.85;
        break;
    case 4:
        cout << value*1.16;
        break;
    }
break;
case 3:
    switch (currencyOutput)
    {
    case 1:
        cout << value*2.29;
        break;
    case 2:
        cout << value*1.17; 
        break;
    case 3:
        cout << value;
        break;
    case 4:
        cout << value*1.36;
        break;
    }
break;
case 4:
    switch (currencyOutput)
    {
    case 1:
        cout << value*1.69;
        break;
    case 2:
        cout << value*0.86; 
        break;
    case 3:
        cout << value*0.74;
        break;
    case 4:
        cout << value;
        break;
    }
break;
    return 0;
}}