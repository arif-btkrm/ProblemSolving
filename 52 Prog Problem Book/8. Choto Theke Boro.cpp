#include <iostream>

using namespace std;

int main(){
 int t;
 cin >>t;
 for (int i=1;i<=t;i++){
    int number[3];
    cin >> number[0] >> number[1]>>number[2];
    if(number[0]>number[1]){
        int temp = number[0];
        number[0] = number[1];
        number [1] = temp;
    }if(number[1]>number[2]){
        int temp = number[1];
        number[1] = number[2];
        number [2] = temp;
    }if(number[0]>number[2]){
        int temp = number[0];
        number[0] = number[2];
        number [2] = temp;
    }if(number[0]>number[1]){
        int temp = number[0];
        number[0] = number[1];
        number [1] = temp;
    }

    cout << "Case "<<i<<":"<<" "<<number[0]<<" "<<number[1]<<" "<<number[2]<<endl;

 }
return 0;
}
