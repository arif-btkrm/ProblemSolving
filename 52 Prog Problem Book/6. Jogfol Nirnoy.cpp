#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    for (int i=0; i<t; i++){
        int num, sum=0;
        cin >> num;
        sum += num%10;
        num/=10000;
        sum += num;
        cout << "Sum = "<<sum<<"\n";
        sum = 0;
    }
return 0;
}
