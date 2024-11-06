#include<iostream>
using namespace std;
void fib(int n){
    int stepCount=0;
    int a=0,b=1;
    int c;
    if(n==1){
        cout<<a<<endl;
    }
    if(n==2){
        cout<<a<<" "<<b<<endl;
    }
    if(n>=3){
        cout<<a<<" "<<b<<" ";
        for(int i=2;i<n;i++){
            stepCount++;
            c=a+b;
            a=b;
            b=c;
            cout<<c<<" ";
        }
    }
    cout<<endl;
    cout<<"\nNumber of Steps(iterations) : "<<stepCount;
}
int main(){
    int n;
    cout<<"Enter how many numbers of fibonacci series you want to display:";
    cin>>n;
    cout<<"\nFibonacci("<<n<<") : ";
    fib(n);
    return 0;
}