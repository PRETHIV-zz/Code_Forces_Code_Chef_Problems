#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int size=0;

    while(n>0){
        size++;
        if(n%100==0){
            n-=100;
        }
        else if(n%20==0){
            n-=20;
        }
        else if(n%10==0){
            n-=10;
        }
        else if(n%5==0){
            n-=5;
        }
        else{
            n-=1;
        }
    }
    cout<<size;
    return 0;
}
