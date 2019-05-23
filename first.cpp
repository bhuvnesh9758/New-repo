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
	int a[n],b[n];
	for(int i=0;i<n;i++)
	cin>>a[i]>>b[i];
	int k,i;
	cin>>k;
	for( i=0;i<n;i++){
		if( b[i]>=k){
			cout<<(n-i)<<endl;
			break;
		}
	}
return 0;
}

