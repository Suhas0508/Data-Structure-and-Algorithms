#include <bits/stdc++.h>
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int amount = 1330;
    
    if(amount>=100){
        int tot = amount/100;
        amount = amount-(tot*100);
        cout<<"100 rs note = "<<tot<<endl;
    }
    if(amount>=50){
        int tot = amount/50;
        amount = amount-(tot*50);
        cout<<"50 rs note = "<<tot<<endl;
    }
        
    if(amount>=20){
        int tot = amount/20;
        amount = amount-(tot*20);
        cout<<"20 rs note = "<<tot<<endl;
    }
    if(amount>=10){
        int tot = amount/10;
        amount = amount-(tot*10);
        cout<<"10 rs note = "<<tot<<endl;
    }
    
}
