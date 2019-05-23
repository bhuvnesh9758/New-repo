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
	ll sx,sy,dx,dy;
	cin>>sx>>sy>>dx>>dy;
	int x=0,y=0;
	x=dx-sx;
	y=dy-sy;
	ll n;
	cin>>n;
	string s;
	cin>>s;
	int cnt[26]={0};
	for(int i=0;i<n;i++){
		cnt[s[i]-'A']++;
	}
return 0;
}

