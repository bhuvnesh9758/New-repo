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
	int n;
	cin>>n;
	string clown,acr;
	cin>>clown>>acr;
	int cl=0,ac=0,same=0;
	vector<int>cli;
	for(int i=0;i<n;i++){
		if(clown[i]=='1' && acr[i]!='1')
		cl++  ;
		else if(clown[i]!='1' && acr[i]=='1'){
			ac++;
		}
		else if(clown[i]=='1' && acr[i]=='1')
		same++;
	}
	if(cl + same==ac || ac+same==cl){
		cout
	}
return 0;
}

