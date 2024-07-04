#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a;
    int b;
    int c;
    cout<<"a= ";
    cin>>a;
    cout<<"b= ";
    cin>>b;
    cout<<"c= ";
    cin>>c;
    if(a<=1000&b<=1000&c<=1000){
        if (a>=1&b>=1&c>=1) {
        cout<<a+b+c<<endl;
        }
        else{
            cout<<"invalid no."<<endl;
        }
    }
    else{
        cout<<"invalid no."<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
