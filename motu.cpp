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
const ll N=2000002;
ll f[N];
void pre(){
	for(ll i=1;i<N;i++){
		ll cnt=0;
		ll curr=i;
		while(curr>0){
			int rem=curr%16;
			if(rem>=10)
			cnt++;
			curr/=16;
		}
		f[i]+=cnt;
		f[i]+=f[i-1];
	}
}
int main(){
	pre();
	int t;
	cin>>t;
	while(t--){
		ll l,r;
		cin>>l>>r;
		cout<<f[r]-f[l-1]<<endl;
	}
return 0;
}

