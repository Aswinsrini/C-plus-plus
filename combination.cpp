#include<iostream>
int combine(int n,int r){
    if(r > n) return 0;
    if(r == 0 || n==r) return 1;
    int res = 1,div = 1;
    for(int i = 0;i<r;i++){
        res *= (n-i);
        div *=(i+1); 
    }
    return res/div;
}
using namespace std;
int main(){
    int n , k;
    cout<<"The number n : ";
    cin>>n;
    cout<<"The number of teams: ";
    cin>>k;
    cout<<"The combinations to form friendship is  : "<<combine(n-k+1,2);
}