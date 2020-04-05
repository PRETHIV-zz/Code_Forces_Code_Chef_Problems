#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int T;
    cin>>T;

    while(T){

        long long int N,i=0,j=0;

        cin>>N;

        long long int P[N],tot=0;

        while(i<N){
            cin>>P[i];
            i++;
        }

        sort(P,P+N);

        i=0;
        while(i<N){  cout<<P[i]<<" "; i++; }
        i=N-1;
        while(i>-1){
            long long int inter=P[i]-j;

            if(inter>0){
                tot+=inter;
            }
            j++;
            i--;
        }
        cout<<tot%1000000007<<endl;

        T--;
    }


    return 0;
}
