#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
#define dd double

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    ll n, zeros=0, pos=0, neg=0;
    cin>>n;
    for(int i=0; i<n; i++){
        ll idx;
        cin>>idx;
        if(idx == 0)zeros++;
        else if(idx<0)neg++;
        else pos++;
    }
    cout<<(dd)((dd)(pos)/(dd)(n))<<endl;
    cout<<(dd)((dd)(neg)/(dd)(n))<<endl;
    cout<<(dd)((dd)(zeros)/(dd)(n))<<endl;
    return 0;
}
