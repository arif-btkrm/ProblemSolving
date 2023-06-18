#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        getchar();

        char text[10][20], temp;
        while ( temp != "\n"){
            cin>> temp;
            cout << temp <<endl;
            if(temp == "\n"){break;}
        }
      //  scanf("%[^\n]",text[0]);
        //getline(cin,text[0]);
        cout << text << endl;
    }
return 0;
}
