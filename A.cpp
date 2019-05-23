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
/*ll gcd(int a,int b)
return (a==0 ? b : gcd(b%a,a);
void mul(ll a[][2],ll b[][2]){
	ll temp[2][2];
	memset(temp,0,sizeof temp);
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			for(int k=0;k<2;k++){
				temp[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(int i=0;i<2;i++)
	for(int j=0;j<2;j++)
	a[i][j]=temp[i][j];
}
void power(ll a[][2],ll n){
	if(n==0 || n==1) return ;
	ll M[2][2]={{ 1,1},{ 1,0}};
	power(a,n/2);
	mul(a,a);
	if(n&1)
	mul(a,M);
}*/
int main(){
	int n;
	cin>>n;
	char m[n+1][n+1];
	char c;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
		cin>>c;
		m[i][j]=c;	
		}
	}
	int cnt=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(m[i][j]!='X')continue;
			if((j==1 && m[i-1][j+1]=='X' && m[i+1][j+1]=='X') || (j==n && m[i-1][j-1]=='X' && m[i+1][j-1]=='X') )
			cnt++;
			if((i==1 && m[i+1][j-1]=='X' && m[i+1][j+1]=='X') ||(i==n && m[i-1][j-1]=='X' && m[i-1][j+1]=='X') )
			cnt++;
			else
			{
				if(m[i+1][j+1]==m[i+1][j-1]==m[i-1][j+1]==m[i-1][j-1]=='X')
				cnt++;
			}
		}
	}
	cout<<cnt<<endl;
return 0;
}

