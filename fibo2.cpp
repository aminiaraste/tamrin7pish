#include<iostream>
#include<stab.h>
using namespace std;
int fibo(int x){
    if(x<=2)
        return 1;
    else
        return fibo(x-1)+fibo(x-2);
}
int main(){
    int n;
    cout <<"enter number of seri fibonachi :";
    cin>>n;
    cout<<fibo(n);
    return 0;

}