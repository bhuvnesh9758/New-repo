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
		set<string>se;
		char src,dest,nouse;
	int s,d;
	map<string,pair<int,int> >mp;
	map<string,bool> vis;
//	vector<pair<pii,string> > vect;
		for(int i=0;i<12;i++){
//			cin>>src>>s>>nouse>>dest>>d;
			scanf("%s",src);
			scanf("%d",&s);
			scanf("%s",dest);
			scanf("%d",&d);
//			cin.ignore();
			se.insert(src);
			se.insert(dest);
			if(s==d){
				pii a=mp[src];
		a.f+=1;
		mp[src]=a;
	     a=mp[dest];
		a.f+=1;
		mp[dest]=a;
		continue;
			}
	if(!vis[src]){
		mp[src]={ s,s-d};
	}else{
		pii a=mp[src];
		a.f+=s;
		a.s+=(s-d);
		mp[src]=a;
	}
//	vect.pb({ mp[src],src});
	if(!vis[dest]){
		mp[dest]={d,d-s};
	}else{
		pii a=mp[dest];
		a.f+=d;
		a.s+=(d-s);
		mp[src]=a;
	}
//	vect.pb({ mp[dest],dest});
	vis[src]=true;
		vis[dest]=true;
		}
//		sort(vect.begin(),vect.end(),[](pair<pii,string> a,pair<pii,string> b){
//			return a.f.f> b.f.f || (a.f.f==b.f.f && a.f.s > b.f.s);
//		});
		int x=1;
		string top=*(se.begin());
		for(auto p:se){
			pii a=mp[p];
			pii b=mp[top];
			if(a.f >b.f){
				top=p;
			}else if(a.f== b.f && a.s>b.s)
			top=p;
		}
		string stop=*(se.begin());
			for(auto p:se){
			pii a=mp[p];
			pii b=mp[stop];
			if(a.f >b.f){
				stop=p;
			}else if(a.f== b.f && a.s>b.s)
			stop=p;
		}
		cout.clear();
		cout<<top<<" "<<stop;
		cout<<endl;
	}
return 0;
}

