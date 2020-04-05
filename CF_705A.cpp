#include<iostream>
#include<string>
 
using namespace std;
 
int main(){
    
    string hate="I hate ";
    string love="I love ";
    string ans="";
    int n,h=1;
    
    cin>>n;
    
    
    while(n){
        
        if(h==1){
            ans+=hate;
            h=0;
        }
        else{
            ans+=love;
            h=1;
        }
        
        if(n==1){
            ans+="it";
            break;
        }
        ans+="that ";
        n--;
    }
    
    cout<<ans;
    
    return 0;
}
