#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    for (int i=0; i<t; i++){
        int n;
        long long int factorial = 1;
        cin>> n;
        for (int j=1; j<=n; j++){
            factorial *=j;
        }
        cout << factorial << endl;
    }
return 0;
}
