#include<bits/stdc++.h>
using namespace std;

int subtract(int x,int y){
    return abs(x-y);
}

int main()
{
    int a,b;
    cout<<"Enter the input values: ";
    cin>>a>>b;

    cout<<"The values that you have given input are: "<<a<<"     "<<b<<endl;
    
    cout<<"The subtration of those two input values are: "<<subtract(a,b)<<endl;

    return 0;
}