#include <iostream>

using namespace std;

int main(){

    int n,num;
    cin >> n;
    for(int i=1; i<=n;i++){
        cin >> num;
        cout << "Case " <<i << ":";
        for(int j=1; j<=num; j++){
            if(num%j == 0){
                cout << " "<<j;
            }
        }
        cout << "\n";
    }
    return 0;
}
