#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    int a,b,c,d;
    int nos[4],found=-9423,skipped=0;
    cin>>a>>b>>c>>d;
    found=max(max(a,b),max(c,d));

    if(found==0){
        cout<<"0 0 0";
    }
    else{
        a=found-a;
        b=found-b;
        c=found-c;
        d=found-d;
        vector<int> v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        v.push_back(d);

        for(int i=0;i<v.size();i++){
            if(skipped==1){
                cout<<v[i]<<" ";
            }
            else{
                if(v[i]!=0){
                    cout<<v[i]<<" ";
                }
                else{
                    skipped=1;
                }
            }
        }


    }


    return 0;
}
