#include <iostream>
using namespace std;
int main() {
    
    char ch;
    cout << "Enter any character : ";
    cin>>ch;
    
    if(ch > 'a' && ch<'z'){
            cout<<"'"<<ch<<"'"<<" character is in lower case";
    }
    if(ch>'A' && ch<'Z'){
        cout<<"'"<<ch<<"'"<<" character is upper case";
    }
    if(ch>='0' && ch <='9'){
        cout<<"'"<<ch<<"'"<<" character is numeric";
    }

    return 0;
}
