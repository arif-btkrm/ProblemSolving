#include <iostream>

using namespace std;

int main(){
    int n,t;
    cin>> t;
    for (int k=0;k<t;k++){
        cin>> n;
        for(int i=0; i<n; i++){
            for(int j=0; j<n;j++){
                cout << "*";
            }
            cout << "\n";
        }
        cout << "\n";
    }

return 0;
}
