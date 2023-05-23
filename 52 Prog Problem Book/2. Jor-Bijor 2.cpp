#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    string number;
    cin>> n;
    for(int i=0; i<n; i++){
        cin>> number;
        int l = number.length();
        char ld = number[l-1];


     if(ld == '0' || ld == '2' || ld == '4' || ld == '6' || ld == '8'){
        cout<< "even\n";
     }else{
        cout<< "odd\n";
     }
    }
    return 0;
}
