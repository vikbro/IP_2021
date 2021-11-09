#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //TASK 1
    // int month, year;
    // cin >> month >> year;
    // switch (month)
    // {
    // case 1:
    //     cout << "31";
    //     break;
    // case 2:
    //     if (year % 4 == 0) {
    //         if (year % 100 == 0) {
    //             if (year % 400 == 0)
    //                 cout << "29";
    //             else
    //                 cout << "28";
    //         }
    //         else
    //             cout << "29";
    //     }
    //     else
    //         cout << "28";
    //     break;
    // case 3:
    //     cout << "30";
    //     break;
    // case 4:
    //     cout << "31";
    //     break;
    // case 5:
    //     cout << "30";
    //     break;
    // case 6:
    //     cout << "31";
    //     break;
    // case 7:
    //     cout << "30";
    //     break;
    // case 8:
    //     cout << "31";
    //     break;
    // case 9:
    //     cout << "30";
    //     break;
    // case 10:
    //     cout << "31";
    //     break;
    // case 11:
    //     cout << "30";
    //     break;
    // case 12:
    //     cout << "31";
    //     break;
    // }

    //TAKS 2
    // int number;
    // cin >> number;
    // switch (number)
    // {
    // case 1:
    // case 2:
    // case 3:
    // case 4:
    // case 5:
    // case 7: {
    //     cout << "No holes." << endl;
    // }
    // break;
    // case 6:
    // case 9:
    // case 0: {
    //     cout << "One hole." << endl;
    // }
    // break;
    // case 8:
    //     cout << "Two holes" << endl;
    // break;
    // default:
    //     cout << "Error" << endl;
    //     break;
    // }
    // switch (number)
    // {
    // case 1:
    //     cout << "One";
    //     break;
    // case 2:
    //     cout << "Two";
    //     break;
    // case 3:
    //     cout << "Three";
    //     break;
    // case 4:
    //     cout << "Four";
    //     break;
    // case 5:
    //     cout << "Five";
    //     break;
    // case 6:
    //     cout << "Six";
    //     break;
    // case 7:
    //     cout << "Seven";
    //     break;
    // case 8:
    //     cout << "Eight";
    //     break;
    // case 9:
    //     cout << "Nine";
    //     break;
    // case 0:
    //     cout << "Zero";
    //     break;
    // default:
    //     cout << "Error";
    //     break;
    // }

    //TASK 3
    // int year;
    // cin >> year;
    // if (year % 4 == 0) {
    //     if (year % 100 == 0) {
    //         if (year % 400 == 0)
    //                 cout << "Leap year";
    //         else
    //                 cout << "NOT Leap year";
    //         }
    //     else
    //             cout << "Leap year";
    //     }
    // else
    //         cout << "NOT Leap year";

    //TASK 4
    // int a, b, c;
    // cin >> a >> b >> c;
    // bool isTriangle;
    // if(a < 0 && b < 0 && c < 0){
    //     isTriangle = false;
    // }else if((a + b > c) && (a +c > b) && (b + c > a)){
    //     isTriangle = true;
    // }else {
    //     isTriangle = false;
    // }
    // string triangleCondition = (isTriangle == 1) ? "Triangle exists." : "Triangle doesn't exist.";
    // cout << triangleCondition;

    //TASK 5;
    //a)
    // int p;
    // cin >> p;
    // bool isTrue = ((p % 4 == 0) || (p % 7 == 0)) ? true : false;
    // cout << boolalpha << isTrue;
    // //b)
    // int a, b, c, d;
    // cin >> a >> b >> c;
    // d = b*b - 4*a*c;
    // bool hasNoRealRoots = (d < 0) ? true : false;
    // cout << boolalpha << hasNoRealRoots;
    //c)
    // int a, b;
    // double distance;
    // cin >> a >> b;
    // distance = sqrt((a - 0) * (a - 0) + (b - 1) * (b - 1));
    // bool isInCircle = (distance < 5) ? true : false;
    // cout << boolalpha << isInCircle;
    //d)
    // int a, b, c, d, f;
    // double distance;
    // cin >> a >> b >> c >> d >> f;
    // distance = sqrt((a - c) * (a - c) + (b - d) * (b - d));
    // bool isInCircle = (distance < f) ? true : false;
    // cout << boolalpha << isInCircle;
    //e)
    // int a, b;
    // double distance;
    // cin >> a >> b;
    // distance = sqrt((a - 0) * (a - 0) + (b - 0) * (b - 0));
    // bool isInCircle = ((a <= 0) && (b <= 0) && (distance == 5)) ? true : false;
    // cout << boolalpha << isInCircle;
    //f)
    // int a, b;
    // double distance;
    // cin >> a >> b;
    // distance = sqrt((a - 0) * (a - 0) + (b - 0) * (b - 0));
    // bool isInCircle = ((distance == 5) || (distance == 10)) ? true : false;
    // cout << boolalpha << isInCircle;
    //g)
    // double x;
    // cin >> x;
    // bool isInInterval = ((x >= 0) && (x <= 1)) ? true : false;
    // cout << boolalpha << isInInterval;
    // //h)*

    // //i)*

    // //j)
    // bool x, y;
    // cin >> x >> y;
    // bool isTrue = (x == 1 || y == 1) ? true : false;
    // cout << boolalpha << isTrue;
    // //k)
    // bool x, y;
    // cin >> x >> y;
    // bool isTrue = (x == 1 && y == 1) ? true : false;
    // cout << boolalpha << isTrue;
    // //l)
    // int x, y, z;
    // cin >> x >> y >> z;
    // bool isNegative = ( x <= 0 && y <= 0 && z <= 0) ? true : false;
    // cout << boolalpha << isNegative;
    // //m)
    // int p, firstDigit, secondDigit, thirdDigit;
    // cin >> p;
    // firstDigit = p / 100;
    // secondDigit = (p / 10) % 10;
    // thirdDigit = p % 10;
    // bool divisableBySeven = (firstDigit == 7 || secondDigit == 7 || thirdDigit == 7) ? true : false;
    // cout << boolalpha << divisableBySeven << endl;
    // //n)
    // int m, firstDigit, secondDigit, thirdDigit;
    // cin >> m;
    // firstDigit = m / 100;
    // secondDigit = (m / 10) % 10;
    // thirdDigit = m % 10;
    // bool hasDifferentDigits = (firstDigit != secondDigit && secondDigit != thirdDigit && thirdDigit != firstDigit) ? true : false;
    // cout << boolalpha << hasDifferentDigits;
    // //o)
    int m, firstDigit, secondDigit, thirdDigit;
    cin >> m;
    firstDigit = m / 100;
    secondDigit = (m / 10) % 10;
    thirdDigit = m % 10;
    bool hasDifferentDigits = (firstDigit == secondDigit || firstDigit == thirdDigit || secondDigit == thirdDigit) ? true : false;
    cout << boolalpha << hasDifferentDigits;
    return 0;
}