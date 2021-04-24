#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    int cont =0;
    cin>>s;
    for(int i=0;i<s.length(); i++){
        bool apear = false;
        for(int j=0;j<i;j++){
            if(s[i]==s[j]){
                apear = true;
                break;
            }
        }
        if(!apear){
            cont++;
        }
    }
    if(cont%2 == 0 ){
       cout<<"CHAT WITH HER!\n";
    }else{
        cout<<"IGNORE HIM!\n";
    }
    return 0;
}

