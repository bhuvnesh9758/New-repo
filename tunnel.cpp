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
vector<pii>A[3];
int n,a,b,x,y;
bool arr[53][53];
bool vis[53][53];
void dfs(int r,int c,int id){
	if(r<1|| r>n|| c<1 || c>n || arr[r][c] || vis[r][c]) return ;
	A[id].pb({r,c});
	vis[r][c]=true;
	dfs(r+1,c,id);
	dfs(r-1,c,id);
	dfs(r,c+1,id);
	dfs(r,c-1,id);
}
int main(){
	cin>>n;
	cin>>a>>b>>x>>y;
	string str;
	for(int i=1;i<=n;i++){
		cin>>str;
	for(int j=1;j<=n;j++)
	{
		if(str[j-1]=='1'){
			arr[i][j]=1;
		}else 
		arr[i][j]=0;	
		}
	}
	dfs(a,b,0);
	for(int i=0;i<53;i++)
	for(int j=0;j<53;j++)
	vis[i][j]=0;
	dfs(x,y,1);
	int ans=5500;
	for(auto p:A[0]){
		for(auto q:A[1]){
			ans=min(ans,((p.f-q.f)*(p.f-q.f) + (p.s-q.s)*(p.s-q.s)));
		}
	}
	cout<<ans<<endl;
return 0;
}

