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
string s;
cin>>s;
int n=s.length();
int cnt[26]={0};
for(int i=0;i<n;i++){
	cnt[s[i]-'a']++;
}
if(cnt[s[0]-'a']==n){
	cout<<"Impossible"<<endl;
	return 0;
}
if(n&1){
	int ans=2;
	int mid=n/2;
	if(cnt[s[mid-1]-'a']==n-1){
		cout<<"Impossible";
		return 0;
	}
	for(int i=mid-1,j=mid+1;i>0 && j<n ;i--,j++){
		if(s[i]==s[i-1])
		ans+=2;
		else break;
	}
	cout<<ans;
}else{
	int mid=(n-1)/2;
	int  ans=1;
	if(cnt[s[mid]-'a']==n-1){
		cout<<"Impossible";
		return 0;
	}
		for(int i=mid;i>0;i--){
		if(s[i]==s[i-1])
		ans+=2;
		else break;
	}
	cout<<ans;
}
return 0;
}

