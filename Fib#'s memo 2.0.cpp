#include <iostream>
using namespace std;
int* memo;
int fib(int n){
    

    for (int i =2;i<n;i++){
        memo[i] += (memo[i-1]+memo[i-2]);
    }
    return memo[n-1];
}

int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    memo = new int[n];
    
    memo[0]=1;
    memo[1]=1;
    cout<<fib(n)<<endl;
    delete [] memo;
    return 0;


} 