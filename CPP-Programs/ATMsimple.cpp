#include <bits/stdc++.h>
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int amount = 1330;
  
    int a=0,b=0,c=0,d=0;
    while(amount != 0){
        if(amount >= 100){
            amount = amount-100;
            a++;
        }else if(amount >= 50){
            amount = amount-50;
            b++;
        }else if(amount >= 20){
            amount = amount-20;
            c++;
        }else if(amount >= 10){
            amount = amount-10;
            d++;
        }
    }
    cout<<"100 rs note = "<<a<<endl;
    cout<<"50 rs note = "<<b<<endl;
    cout<<"20 rs note = "<<c<<endl;
    cout<<"10 rs note = "<<d<<endl;
}
