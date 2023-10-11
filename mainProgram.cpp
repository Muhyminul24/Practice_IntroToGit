#include<bits/stdc++.h>
using namespace std;

int sum(int x,int y){
    return x+y;
}

int mult(int x,int y){
    return x*y;
}

int main()
{
    int a,b;
    cout<<"Enter the input values: ";
    cin>>a>>b;

    cout<<"The values that you have given input are: "<<a<<"     "<<b<<endl;
    cout<<"The sum of those two numbers are: "<<sum(a,b)<<endl;
    cout<<"The multiplication of those two numbers are: "<<mult(a,b)<<endl;

    return 0;
}