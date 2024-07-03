//
// Created by lenovo on 2024/7/1.
//
#include <bits/stdc++.h>
#include "calu.h"
using namespace std;

int add(int a, int b){
    int re = a;
    while(b){
        int tmp = a;
        a = a^b;
        b = (tmp&b)<<1;
        re = a;
    }
    cout << "sum = " << re;
}
int subtraction(int as, int bs)
{
    bs = add(~bs,1); // 求b的相反数
    cout << "difference = " << add(as, bs);
}
int getSign(int n)
{
    unsigned count = 0;
    //计算n的位数
    do{
        ++count;
    }while(n >> count);
        //得到n的最左边的位
            return n >> (count-1);
}

int mul(int a, int b){
    bool isNegative = false;
    if(getSign(a) ^ getSigned(b))
        isNegative = true;
    if(a < 0) a = add(~a,1);//求出a的绝对值
    if(b < 0) b = add(~b,1);//求出b的绝对值
    int res = 0;
    while(b){               //当b不为0，继续循环
        if(b & 1)           //当b当前位为1 才需要加a
            res = add(res,a);
        a = a << 1;
        b = b >> 1;
    }
    if(isNegative)
        add(~res,1);
    return res;
}


void first(double a1, double b1) {
    printf("sum = %lf, difference = %lf \n"
           "product = %lf, quotient = %lf \n", a1 + b1, a1 - b1, a1 * b1, a1 / b1);
}

void second(int number) {
    string binary = bitset<32>(number).to_string();
    cout << "Binary: " << binary << endl;

    // 转换为八进制
    cout << "Octal: " << oct << number << endl;

    // 转换为十六进制
    cout << "Hexadecimal: " << hex << number << endl;
}

void third(int jinzhi2_1, int jinzhi2_2) {
    int jinzhi2_1_123 = jinzhi2_1;
    int jinzhi2_2_123 = jinzhi2_2;
    add(jinzhi2_1_123, jinzhi2_2_123);
    jinzhi2_1_123 = jinzhi2_1;
    jinzhi2_2_123 = jinzhi2_2;
    subtraction(jinzhi2_1_123, jinzhi2_2_123);
    printf("sum = %d, difference = %d \n"
       "product = %d, quotient = %d \n", re, sub, result, x);
}
