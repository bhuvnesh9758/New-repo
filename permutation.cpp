#include <bits/stdc++.h>
using namespace std;
#define ll long long
// int n;
// bool check(int q[],int p[],int pn,int p1){
// 	map<int,bool>mp;
// 	mp[p1]=true;
// 	mp[pn]=true;
// 	p[1]=p1;
// 	p[n]=pn;
// 	for(int i=2;i<n;i++){
// 		p[i]=p[i-1]+q[i-1];
// 		if(mp[p[i]] || p[i]<=0 || p[i]>n)
// 			return false;
// 		mp[p[i]]=true;
// 	}
// 	for(int i=1;i<=n;i++){
// 		cout<<p[i]<<" ";
// 	}
// 	return true;
// }
int main(){
	int n;
	cin>>n;
	vector<ll> p(n+1),q(n+1);
	ll sum=0;
	for(int i=1;i<n;i++){
		cin>>q[i];
		if(q[i]<0)
			sum+=q[i];
	}
	// bool f=false;
	// while(low<high){
	// 	int mid=(low+high)/2;
	// 	ll val=mid+sum;
	// 	if(val<=0){
	// 		low=mid;
	// 	}else if(val>n){
	// 		high=mid;
	// 	}else{
	// 		if(check(q,p,val,mid)){
	// 			// fill(p,p+n+1,0);
	// 			f=true;
	// 			break;
	// 		}
	// 	}
	// }
	bool ok=true;
	p[1]=1-sum;
	for(int i=2;i<=n;i++){
		p[i]=p[i-1]+q[i-1];
	}
	for(int i=1;i<=n;i++)
		if(p[i]>n || p[i]<=0)
			ok=false;
		if(ok){
			if(set<ll>(p.begin()+1,p.end()).size()!=n)
				ok=false;
			if(ok){
				for(int i=1;i<=n;i++){
					cout<<p[i]<<" ";
				}
		}else{
			cout<<-1<<endl;
		}
	}else{
				cout<<-1<<endl;
			}
	// if(!f){
	// 	cout<<-1<<endl;
	// }
			return 0;
		}