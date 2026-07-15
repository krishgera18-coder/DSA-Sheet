#include<iostream>
#include<cmath>
using namespace std;
bool armstrong(int x){
    int sum = 0;
    int count = 0;
    int n;
    n=x;
    while(n!=0){
        count++;
        n=n/10;
    }
    n=x;
    while(n!=0){
        int digit = n%10;
        int p = 1;
        for (int i = 0; i < count; i++) {
            p *= digit;
        }

        sum += p;
        n /= 10;
    }

    return sum == x;
}


int main(){
    int n;
    cin>>n;
    if(armstrong(n)){
        cout<<"true";
    }
    else cout<<"false";
    return 0;
}