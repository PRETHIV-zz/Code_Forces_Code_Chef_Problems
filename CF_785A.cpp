#include<iostream>
#include<string>
using namespace std;

int main(){
    
    int n,tot=0;
    
    cin>>n;
    
    string s;
    
    while(n){
        
        cin>>s;
        
        if(s=="Tetrahedron"){
            tot+=4;
        }
        
        else if(s=="Cube"){
            tot+=6;
        }
        
        else if(s=="Octahedron"){
            tot+=8;
        }
        
        else if(s=="Dodecahedron"){
            tot+=12;
        }
        
        else if(s=="Icosahedron"){
            tot+=20;
        }
        
        n--;
    }
    
    cout<<tot;
    
    
    return 0;
}
