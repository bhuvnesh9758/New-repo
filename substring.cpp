#include<bits/stdc++.h>
using namespace std;
struct alpha
{
    int array[26];
};
int main(){
    string s;
    cin>>s;
       int pos[26];
        for(int i=0;i<26;i++)
            pos[i]=-1;
        alpha freq[s.length()];
        for(int i=0;i<s.length();i++){
            for(int i=0;i<26;i++)
        }
        for(int i=0;i<n;i++){

        }
        int min_val=0,curr=0;
        for(int i=0;i<s.length();i++){
            if(pos[s[i]-'a']==-1){
                curr++;
                // min_val=max(min_val,curr);
            }else{
                // cout<<"else"<<endl;
                int index=pos[s[i]-'a'];
                curr=i-index;
            }
            min_val=max(min_val,curr);
            pos[s[i]-'a']=i;
        }
        cout<<min_val<<endl;
}