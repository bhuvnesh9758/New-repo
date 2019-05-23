#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS  ios_base::sync_with_stdio(false);cin.tie(NULL);
int main(){
	IOS;
	ll test;
	cin>>test;
	while(test--){
		ll n,na=0,ne=0,ni=0,no=0,nu=0;
		cin>>n;
		string arr[n];
		bool a[n],e[n],ii[n],o[n],u[n];
		// a[n]=e[n]=ii[n]=o[n]=u[n]={false};
		for(ll i=0;i<n;i++){
			cin>>arr[i];
			a[i]=e[i]=ii[i]=o[i]=u[i]=false;
			if(arr[i].find('a')!=string::npos)
			a[i]=true,na++;
			if(arr[i].find('e')!=string::npos)
			e[i]=true,ne++;
			if(arr[i].find('i')!=string::npos)
			ii[i]=true,ni++;
			if(arr[i].find('o')!=string::npos)
			o[i]=true,no++;
			if(arr[i].find('u')!=string::npos)
			u[i]=true,nu++;
		}
		ll ans=0ll,curr;
		for(ll i=0;i<n;i++){
//			for(ll j=i+1;j<n;j++){
//				if((a[i]|| a[j])&&(e[i]||e[j])&&(ii[i]||ii[j])&&(o[i]||o[j])&&(u[i]||u[j]))
//				ans++;
//			}
curr=INT_MAX;
			if(!a[i])
				curr=min(curr,na);
				else if(!e[i])
				curr=min(curr,ne);
			else if(!ii[i])
				curr=min(curr,ni);
			else	if(!o[i])
				curr=min(curr,no);
			else	if(!u[i])
				curr=min(curr,nu);
				else if(curr==INT_MAX)
					curr=n-i-1;
				ans+=curr;
				na-=(a[i]==1?1:0);
				ne-=(e[i]==1?1:0);
				ni-=(ii[i]==1?1:0);
				no-=(o[i]==1?1:0);
				nu-=(u[i]==1?1:0);
		}
		cout<<ans<<endl;
	}
return 0;
}

