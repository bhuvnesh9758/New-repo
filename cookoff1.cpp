#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define s second
#define f first
#define pii pair<int,int>
#define pll pair<ll ,ll>
#define IOS  ios_base::sync_with_stdio(false);cin.tie(NULL);
const double pi = 3.14159;
#define pb push_back
int main(){
	ll n,q,k;
	cin>>n>>q;
	ll f[n+1];
	for(ll i=1;i<=n;i++)
	cin>>f[i];
	ll res[n+1];
	res[0]=0;
	for(ll i=1;i<=n;i++)
	res[i]=f[i]^res[i-1];
	while(q--){
		cin>>k;
		ll mod=k%(n+1);
		cout<<res[mod]<<endl;
	}
	return 0;
}

