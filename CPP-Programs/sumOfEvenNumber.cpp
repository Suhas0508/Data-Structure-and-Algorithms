#include <iostream>
using namespace std;
int main() {
    
    int n;
    cout<< "Enter Number : ";
    cin>>n;
    
    int sum=0;
    int i=2;
    while(i<=n){
        if(i%2==0)
            sum=sum+i;
            
        i=i+1;
    }
    cout << sum;

    return 0;
}
