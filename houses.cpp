#include<iostream>
#include<set>
#include<vector>
#include<climits>
using namespace std;
int main(){
	int n,m,a;
	cin>>n>>m;
	vector<int> v;
	for(int i=0;i<m;i++){
		cin>>a;
		v.push_back(a);
	}
	int min_steps=INT_MAX;
	int curr;
	for(int x=1;x<=n;x++){
		// int cnt=0;
		set<int>s;
		for(auto p:v)
			s.insert(p);
		// set<int> s(v.begin(),v.end());
		curr=0;
		bool fmin=false;
		for(int start=1;curr<=n;start+=x){
			if(start>n)
				start-=n;
			if(s.size()==0)
				{
					fmin=true;
					break;
				}
			auto it=s.find(start);
			if( it!=s.end()){
				s.erase(it);
			}
			curr++;
		}
		if(fmin)
		min_steps=min(min_steps,curr);
	}
	cout<<min_steps<<endl;
	return 0;
}