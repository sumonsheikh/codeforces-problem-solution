#include<iostream>
#include<string>
using namespace std;
int main(){
   string s;

    int t,c=0;
    cin>>t;
    cin>>s;
    for(int i=0;i<t;i++){
        if(s[i]==s[i+1] ){
        c++;
        }

    }
    cout<<c;


return 0;
}
