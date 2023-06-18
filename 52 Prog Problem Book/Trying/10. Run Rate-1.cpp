#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i=0; i<t;i++){
        float OpRun=0,OwnRun=0, remBall=0;
        cin >> OpRun>>OwnRun>>remBall;
        float toWin=0,ballPlayed=0, currentRR = 0, requireRR=0;
        toWin = OpRun+1;
        ballPlayed = 300-remBall;
        currentRR = (OwnRun/ballPlayed)*6;
        requireRR = ((toWin-OwnRun)/remBall)*6;
        printf("%0.2f %0.2f\n",currentRR, requireRR);
    }
return 0;
}
