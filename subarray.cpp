#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define s second
#define f first
#define pii pair<int,int>
#define pll pair<ll ,ll>
#define IOS  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		ll k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		ll ans=0;
		for(int i=0;i<n;i++){
			for(int j=i;j<n;j++){
				vector<int>v,vp;
				map<int,int> mp;
				mp[a[j]]++;
				v.pb(a[j]);
				vp.pb(a[j]);
				ll m=k/(j-i+1);
				if(m*(j-i+1)<k)
				m++;
				sort(v.begin(),v.end());
				int index=((k)/m);
//				if(index*m<k)index++;
//			;	cout<<i<<" :"<<j<<" ";
//				cout<<v.back()<<" "<<m<<" "<<endl;
				int element=vp[index-1];
				int freq=mp[element];
				if(mp[freq])ans++;
			}
		}
		cout<<ans<<endl;
	}
return 0;
}

