#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4];

    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+4);

    int trd=arr[3]-arr[0];
    int snd = arr[1]-trd;
    int fst = arr[3]-(trd+snd);

    cout<<fst<<" "<<snd<<" "<<trd<<endl;


}
