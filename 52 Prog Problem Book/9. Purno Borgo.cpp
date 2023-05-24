#include <iostream>
#include <cmath>

using namespace std;

int main(){
int t;
cin >> t;
for (int i=0;i<t;i++){
    int numb = 0;
    cin >>numb;
    int dt = sqrt(numb);
    if(dt*dt == numb){
        cout << "YES"<<endl;
    }
    else{
        cout << "NO"<<endl;
    }
}
return 0;
}
