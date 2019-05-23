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
	int t;
	cin>>t;
	while(t--){
		string home,away,vs;
	int hpoints,apoints;
	map<string,int >points,goals;
	vector<pair<string,pii> > vect;
//	points.clear();
//	goals.clear();
	set<string>s;
		for(int i=0;i<12;i++){
			cin>>home>>hpoints>>vs>>apoints>>away;
			s.insert(home);
			s.insert(away);
			if(hpoints>apoints){
				points[home]+=3;
			}
			else if(hpoints<apoints){
				points[away]+=3;
			}
			else if(hpoints==apoints){
				points[home]+=1;
				points[away]+=1;
				}
			goals[home]+=hpoints-apoints;	
			goals[away]+=apoints-hpoints;}
			for(auto st:s){
				vect.pb({st,{points[st],goals[st]}});
			}
		sort(vect.begin(),vect.end(),[](pair<string,pii> a,pair<string,pii> b){
			return a.s.f> b.s.f || (a.s.f==b.s.f && a.s.s > b.s.s);
		});
		int x=1;
		for(auto v:vect){
			cout<<v.f<<" ";
			x++;
			if(x==3)break;
		}
		cout<<endl;
	}
return 0;
}

