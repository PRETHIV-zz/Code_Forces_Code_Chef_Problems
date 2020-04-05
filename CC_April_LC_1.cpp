#include<iostream>

using namespace std;

int main(){

    int T;

    cin>>T;

    while(T){
        int N;
        cin>>N;
        int Q[N+1],i=1;
        int f=0,s=0,ans=1;
        int fpos,spos;

        while(i<=N){
            cin>>Q[i];
            if(Q[i]==1){
                if(f==0){
                    f=1;
                    fpos=i;
                }
                else{
                    spos=i;
                    if(spos-fpos<6){
                        ans=0;
                    }
                    fpos=spos;
                }
            }
            i++;
        }

        if(ans==0){
        cout<<"NO"<<endl;}
        else{ cout<<"YES"<<endl;}

        T--;
    }

    return 0;
}
