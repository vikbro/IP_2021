#include <iostream>
using namespace std;

int main(){
    int numOne, numTwo;

    cin >> numOne;
    cin >> numTwo;

    if (numOne > numTwo){
        cout << numOne;
    }
    else if(numTwo > numOne){
        cout << numTwo;
    } else {
        cout << "Error";
    }
     return 0;
}