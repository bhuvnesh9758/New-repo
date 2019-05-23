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
	ll t;
	cin>>t;
	while(t--){
		ll n,m,k;
		cin>>n>>m>>k;
		ll cnt=0;
		bool f=false;
		while(n>=m && !f){
		if(n%m==0){
		cout<<cnt<<endl;
		f=1;
		}
		else{
		cnt++;
		n-=k;
		}
		}
		//not possible
		if(!f){
		cout<<-1<<endl;
		}
	}
return 0;
}

