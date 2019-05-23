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
	int t;
	cin>>t;
	while(t--){
		ll n,npos=0;
		cin>>n;
		ll a[n];
		for(ll i=0;i<n;i++){
			cin>>a[i];
			if(a[i]>0) npos++;
		}
		if(npos==n || npos==0){
			cout<<n<<" "<<n<<endl;
		}else{
			cout<<npos<<" "<<(n-npos)<<endl;
		}
	}
return 0;
}

