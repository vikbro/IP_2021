#include <iostream>
using namespace std;

int main(){

char symbol;
cin >> symbol;

if ((symbol >= 'A' && symbol <= 'Z') || (symbol >= 'a' && symbol <= 'z')){
 
    cout << "symbol is letter"<< endl;

}else{
    cout << "symbol is not a letter" << endl;
}
    return 0;
}