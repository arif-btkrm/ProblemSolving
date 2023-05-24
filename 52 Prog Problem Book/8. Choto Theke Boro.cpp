#include <iostream>

using namespace std;

int main(){
 int t;
 cin >>t;
 for (int i=1;i<=t;i++){
    int n = 3;
    int number[n];
    for (int j=0;j<n;j++){
        cin >> number[j];
    }
    for(int j=0;j<n-1;j++){
        for(int k=0;k<n-1;k++){
            if(number[k]>number[k+1]){
                int temp = number[k];
                number[k] = number[k+1];
                number[k+1] = temp;
            }
        }
    }
        cout << "Case "<<i<<":";
        for (int j=0;j<n;j++){
            cout <<" "<< number[j];
        }
        cout << endl;

 }
return 0;
}
