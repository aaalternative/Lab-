#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double sum=0;
    for(int n=1;n<=10;n++)
    {
        double a=1/cbrt(pow(n,4));
        cout<<a<<endl;
        sum+=a;
    }
    cout<<"symma pervix 10 chisel "<<sum<<endl;
    return 0;
}