#include<bits/stdc++.h>

using namespace std;

int numberOfZeros(int n){
    int fives = 0, tows =0;
    for(int i=1; i<=n; i++){
        int num = i;
        while(num%5 == 0){
            fives++;
            num = num/5;
        }
        while(num%2 == 0){
            tows++;
            num = num/2;
        }
    }
    int result = (fives<tows)? fives:tows;
    return result;
}

int main(){
    int t;
    cin >> t;
    for (int i=0; i<t; i++){
        int n,zeros;
        cin>> n;
        zeros = numberOfZeros(n);
        cout << zeros << endl;
    }
return 0;
}
