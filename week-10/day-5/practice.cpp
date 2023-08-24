#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long  l;cin>>l;
        long long n=l*2;
        cout<<n<<endl;
        long long p=sqrt(n);
        cout<<p<<endl;
        long long q=ceil(sqrt(n));
        cout<<q<<endl;

        long long num1=(p*(p+1))/2;
        cout<<num1<<endl;
        long long num2=(q*(q+1))/2;
        cout<<num2<<endl;

        if(num1>l)cout<<" -----"<<p+1;
        else if(num2>l)cout<<"---"<<q+1;

    }
}
