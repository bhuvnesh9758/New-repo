#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
set<int>s;
int x=1;
void dfs(vector<int> v[],int a[],int u,int parent){
	// cout<<"iteration no"<<x<<": "<<u<<endl;
	bool flag=false;
	for(auto child:v[u]){
		// flag=true;
		if(child==parent)continue;
		dfs(v,a,child,u);
		if( a[u]!=1 ||  a[child]!=1){
			flag=true;
			// break;
		}
		// if(!flag2){
		// 	s.insert(u);
		// 	return;
		// }
	}
	if(!flag ){
		if(a[u]==1){
			s.insert(u);
		}
	}
}
int main(){
	int n,p,c;
	cin>>n;
	vector<int> nodes[n+1];
	int a[n+1];
	int root;
	for(int i=1;i<=n;i++){
		cin>>p>>c;
		if(p==-1)
			root=i;
		a[i]=c;
		nodes[i].pb(p);
		if(p!=-1)
		nodes[p].pb(i);
	}
	dfs(nodes,a,root,-1);
	if(s.empty()){
		cout<<-1<<endl;
		return 0;
	}
	for(auto p:s){
		cout<<p<<" ";
	}
	cout<<endl;
	return 0;
}