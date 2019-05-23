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
int main(){
	int n;
	cin>>n;
	int a[n];
	ll ans=0;
	for(int i=0;i<n;i++)
	cin>>a[i],ans+=a[i];
	sort(a,a+n);
	for(ll i=n-1;i>0;i--){
		for(int j=2;j<=a[i];j++){
			ll curr=ans;
			if(a[i]%j==0){
				curr=ans-a[i]-a[0]+a[i]/j+a[0]*j;	
			}
			ans=min(ans,curr);
		}
	}
	cout<<ans<<endl;
return 0;
}

