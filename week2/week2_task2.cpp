#include <iostream>
using namespace std;

int main(){
    int num;

    cin >> num;

    if (num > 0 && num <= 12){
        cout << "There is such a month" << endl;
    }
    else {
        cout << "There is no such a month" << endl;
    }
     return 0;
}