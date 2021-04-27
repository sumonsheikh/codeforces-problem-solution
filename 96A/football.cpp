#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int c=1,ans=1;
    cin>>s;
    for(int i=1;i<s.length(); i++){
        if(s[i]==s[i-1]){
            c++;

        }else{
            ans=max(ans,c);
            c=1;
        }


    }
    ans=max(ans,c);
    if(ans>=7){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}
