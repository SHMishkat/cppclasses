#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int t=0,x=0,a=0,b=0,s=0,sum=0,i=0;
    cin>>t;
    while(t!=x){
        scanf("%d %d",&a,&b);
        while(a!=0||b!=0){
            s=(a%10+b%10)%10; //stores last digit of thes summation of the input last digit.
            a=a/10; //drops the last digit.
            b=b/10; //drops the last digit.
            
            sum=sum+s*(pow(10,i));

            i++;
        }
        cout<<sum<<endl;
        sum=0;
        i=0;
        x++;
    }
    

}