#include <bits/stdc++.h>
using namespace std;
typedef long long int gkg;

void printArraySize(int arr[])
{
    int  sizz = sizeof(arr) / sizeof(arr[0]);
    cout << "The size of the array is: " << sizz << endl;
}

int main()
{
    int n;cin>>n;
    gkg myArray[n];for( i=0;i<n;i++) cin>>myArray[i];

    printArraySize(myArray);

    return 0;
}
