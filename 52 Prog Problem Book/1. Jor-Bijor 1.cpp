#include <iostream>

using namespace std;

int main(){
    int n, number;
    cin>> n;
    for(int i=0; i<n; i++){
     cin>> number;
     if(number%2 == 0){
        cout<< "even\n";
     }else{
        cout<< "odd\n";
     }
    }
    return 0;
}
