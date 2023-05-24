#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int t;
    cin >>t;
    for (int i=0;i<t;i++){
        int numb;
        int count = 0;
        while(1){
            int ret = scanf("%d", &numb);
            char ch = getchar();
            if (ch == '\n'){
                break;
            }
            if(ret == 1){
            count++;
            }
        }
        cout<< count+1<<"\n";
        count = 0;
    }
return 0;
}
