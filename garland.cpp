#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define s second
#define f first
#define pii pair<int,int>
#define pll pair<int ,int>
#define IOS  ios_base::sync_with_stdio(false);cin.tie(NULL);
const double pi = 3.14159;
#define pb push_back
#define mk make_pair
int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int ans=0;
	if(n==1){
		cout<<0<<endl;
		cout<<s<<endl;
		return 0;
	}
	if(n==2){
		if(s[0]==s[1]){
			if(s[0]=='R')
			s[1]='G';
			if(s[0]=='B')
			s[1]='G';
			if(s[0]=='G')
			s[1]='R';
			cout<<1<<endl;
			cout<<s<<endl;
			return 0;
		}else
		{
			cout<<0<<endl;
			cout<<s<<endl;
		}
	}
	for(int i=0;i<n-2;i++){
		if(s[i]==s[i+1]){
			ans++;
			if(s[i]=='R'){
				if(s[i+2] =='B')
				s[i+1]='G';
				else
				s[i+1]='B';
			}
			if(s[i]=='B'){
				if(s[i+2] =='R')
				s[i+1]='G';
				else
				s[i+1]='R';
				
			}
			if(s[i]=='G'){
				if(s[i+2] =='R')
				s[i+1]='B';
				else
				s[i+1]='R';	
			}
		}else
		continue;
	}
		if(s[n-1]==s[n-2]){
			ans++;
			if(s[n-2]=='R')
			s[n-1]='G';
			if(s[n-2]=='B')
			s[n-1]='G';
			if(s[n-2]=='G')
			s[n-1]='R';
			}
	cout<<ans<<endl;
	cout<<s<<endl;
return 0;
}

