#include <iostream>
using namespace std;

int main(){
int n;
cin >> n;
if(n > 0){
n = 2*((2 + (n-1))*n)/2;
cout << n;
}else{
    cout << "Error";
}
    return 0;
}