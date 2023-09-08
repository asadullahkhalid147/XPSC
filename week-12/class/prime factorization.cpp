//#include<bits/stdc++.h>
//using namespace std;
//
//bool is_prime(int n) /// sqrt(n) a prime check korsi
//{
//    if(n==1)
//        return false;
//    if(n==2)
//        return true;
//
//    if(n%2==0)
//        return false;
//
//    for(int i=3;i*i<=n;i++)
//    {
//        if(n%i==0)
//            return false;
//    }
//    return true;
//}
//
//int main()
//{
//    int n=30;
//    vector<int>primes;
//    for(int i=2;i<=n;i++)
//    {
//        if(is_prime(i))
//        {
//            primes.push_back(i);
//        }
//    }
//    int target=100;
//    map<int,int>cnt;
//    for(int i=0;i<primes.size();i++)
//    {
//        while(target%primes[i]==0)
//        {
//            cnt[primes[i]]++;
//            target/=primes[i];
//        }
//    }
//    if(target>1)
//    {
//        cnt[target]++;
//    }
//    for(auto [x,y]:cnt)
//    {
//        cout<<x<<" "<<y<<endl;
//    }
//
//}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    map<int,int>cnt;

    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                cnt[i]++;
                n/=i;
            }
        }
    }
    if(n>1)cnt[n]++;
    for(auto [x,y]:cnt)
        cout<<x<<" "<<y<<endl;

    int x,y;
    x=900;y=23814;
    int gcd=__gcd(x,y);
    int lcm = (x*y)/gcd;
    cout<<gcd<<endl;
    cout<<lcm<<endl;
}
