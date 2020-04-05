#include<iostream>

using namespace std;

int main(){
    
    int n,i,easy=0;
    
    cin>>n;
    
    while(n){
        cin>>i;
        if(i==1){
            easy=1;
        }
        n--;
    }
    
    if(easy==1){
        cout<<"HARD";
    }
    
    else{
        cout<<"EASY";
    }
    
    
    
    return 0;
}
