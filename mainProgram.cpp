#include<bits/stdc++.h>
using namespace std;

float division(int x,int y){
    if(y!=0)
        return float(x)/y;
    else
        return 0;
}

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

    if(division(a,b)!=0){
        cout<<"The division of those two input values are: "<<division(a,b)<<endl;
    }
    else{
        cout<<"Divide by zero problem"<<endl;
    }

    return 0;
}