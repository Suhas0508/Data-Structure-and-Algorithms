#include <bits/stdc++.h>
#include<iostream>
#include<math.h>

using namespace std;
    long long binarySearch(int n){
        
        int s=0;
        int e=n;
        long long int mid = s + (e-s)/2;
        int ans = -1;
        while(s<=e){
            long long int square = mid*mid;
            
            if(square == n){
                return mid;
            }
            else if(square < n){
                ans = mid;
                s = mid+1;
            }
            else{
                e = mid-1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }

double morePrecision(int n, int precision, int tempSol){
    
    double factorial = 1;
    double ans = tempSol;
    
    for(int i=0; i<precision; i++){
        factorial = factorial/10;
        for(double j=ans; j*j<n; j=j+factorial){
            ans = j;
        }
    }
    return ans;
    
}


int main()
{
    int n=101;

    
    int tempSol = binarySearch(n);
    cout<<"Answer is "<<morePrecision(n,3,tempSol)<<endl;
    
    return 0;
}
