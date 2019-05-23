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
	ll n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	ll ans=-1,curr=0;
	int prev=0;
	vector<ll>v;
	for(int i=0;i<n;i++){
		if(a[prev]==a[i])curr++;
		else{
			prev=i;
			v.pb(curr);
			curr=1;
		}
	}
	v.pb(curr);
	for(int i=0;i<v.size()-1;i++){
		ans=max(ans,(min(v[i],v[i+1])));
	}
	cout<<2*ans<<endl;
return 0;
}

