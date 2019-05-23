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
vector<char> v;
int cnt1,cnt2;
int main(){
	IOS;
	string s;
	cin>>s;
	int hit=0;
	for(auto i:s){
		if(i=='0'){
			cnt1++;
			cout<<1<<" ";
			if(cnt1&1)
			cout<<1<<endl;
			else
			cout<<3<<endl;
		}else{
			cnt2++;
			cout<<4<<" ";
			if(cnt2&1)
			cout<<1<<endl;
			else
			cout<<3<<endl;
		}
	}
return 0;
}

