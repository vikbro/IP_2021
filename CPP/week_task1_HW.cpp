#include <iostream>
#include <cmath>
using namespace std;

int main(){

    double width, length, tileLength, tiles;

    cin >> width;
    cin >> length;
    cin >> tileLength;

    tiles = ceil(width/tileLength) * ceil(length/tileLength);
    
    cout << tiles <<endl; 
     return 0;
}