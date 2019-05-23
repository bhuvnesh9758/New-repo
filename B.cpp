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
int f[10002];
int main(){
	IOS;
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i],f[a[i]]++;
	sort(a,a+n);
	cout<<a[n-1]<<" ";
	int ans=1;
	for(int i=n-1;i>0;i--){
		if((a[n-1]%a[i]==0 && f[a[i]]==2) || a[n-1]%a[i]!=0){
		cout<<a[i];
		break;	
	}
	}
return 0;
}

