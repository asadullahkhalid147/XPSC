#include<bits/stdc++.h>
using namespace std;
long long a[200001],b[200001],ans,n,m,i,l,r;
int main(){
	cin>>n>>m;
	for(i=1;i<=n;i++) cin>>a[i];
	for(i=1;i<=m;i++) cin>>l>>r,b[l]++,b[r+1]--;
	for(i=1;i<=n;i++) b[i]+=b[i-1];
	sort(a+1,a+n+1);
	sort(b+1,b+n+1);
	for(i=1;i<=n;i++) ans+=a[i]*b[i];
	cout<<ans<<endl;
	return 0;
}
