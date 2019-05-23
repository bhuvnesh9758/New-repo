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
#define mk make_pair
ll mod= 1e9+7;
int main(){
	ll n;
	cin>>n;
	ll a[n];
	map<ll,int> mp;
	vector<ll> v;
	for(ll i=0;i<n;i++)
	cin>>a[i],mp[a[i]]++;
	sort(a,a+n);
	ll ans=0ll;
	for(ll i=n-1;i>=0;i--){
		if(mp.find(-a[i])==mp.end())
		v.pb(a[i]);
		if(v.size()>=3 && find(v.begin(),v.end(),-a[i])==v.end()) ans=(ans+a[i])%mod;
	}
	cout<<ans<<endl;
	return 0;
}

