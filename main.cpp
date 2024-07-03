#include <bits/stdc++.h>
#include "calu.h"

using namespace std;

int main(){
    cout << "Welcome to the calculator made by Xi xi" << endl <<
        "----------------------------------------------------" << endl;// 欢迎使用由嘻嘻制作的计算器
    cout << "Please select the operation you want to perform: (Please enter a serial number)\n"
            "1. Addition, subtraction, multiplication and division \n"
            "2. Decimal conversion to base, base 8, base hexagram \n"
            "3. Binary addition, subtraction, multiplication, and division \n"
            "4. Octal addition, subtraction, multiplication, and division \n"
            "5. Hexadecimal addition, subtraction, multiplication and division \n"
            "6. Binary conversion decimal \n "
            "7. Octadecimal to Decimal \n"
            "8. Hexadecimal to Decimal" << endl;
    int x;
    cin >> x;

    if (x == 1) {
        double a43 , b43;
        cout << "Please enter two numbers:" << endl;
        cin >> a43 >> b43;
        first(a43, b43);
    } else if (x == 2) {
        cout << "Please enter decimal:" << endl;
        int number1;
        cin >> number1;
        second(number1);
    } else if (x == 3){
        int jinzhi2_1_1;
        int jinzhi2_2_1;
        cout << "Enter two binary numbers:" << endl;
        cin >> jinzhi2_1_1 >> jinzhi2_2_1;
        third(jinzhi2_1_1, jinzhi2_2_1);
    }
    return 0;
}
