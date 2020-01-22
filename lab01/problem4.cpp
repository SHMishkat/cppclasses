#include<iostream>
#include<math.h>
using namespace std;

int main(){
    
    int t=0,b=0,lenOfEdge=0;
    int a=0;
    int temp=0.0;
    cin>>t;
    while(t!=a){
        scanf("%d",&b);
        a++;
        temp=b/6;
        //lenOfEdge = pow(temp,0.5);
        lenOfEdge=sqrt(temp);
        cout<<lenOfEdge<<endl;
    }
}