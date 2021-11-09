#include <iostream>
using namespace std;

int main(){
bool hasBeer, hasRakia, hasIce;
cin >> hasBeer >> hasRakia >> hasIce;
if(hasBeer == 0){
    if(hasRakia == 1 && (hasIce == 1 || hasIce == 0)){
        cout << "Drinks home" << endl;
    }else{
        cout << "Goes to shop";
    }
}else{
    cout << "Goes to shop";
    }
    return 0;
}