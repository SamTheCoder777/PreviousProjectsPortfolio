#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
void enemyMove();
void myMove();

using namespace std;

int main()
{
    srand(time(NULL));

    int h = rand() % 2 +1;
    int a = rand() % 2 +1;
    int hOrT = rand() % 6 +1;
    char headOrTail;
    char fcName[20];
    char enemy[10];
        cout<<"what is your fc name?: ";
    cin>>fcName;
    cout<<"Loading..."<<endl;
    Sleep(2000);
    cout<<"FC "<<fcName<<", wow that is  a amazing name!"<<endl;
    cout<<"what is your enemy FC's name?: ";
    cin>>enemy;
    cout<<"Loading..."<<endl;
    Sleep(2000);
    cout<<"FC "<<fcName<<" VS FC "<<enemy<<endl<<endl;

    cout<<"Heads(h) or Tail?(t):";
    cin>>headOrTail;
    if(headOrTail == 'h')
        headOrTail = 1;
    else if(headOrTail == 't')
        headOrTail == 2;

if (hOrT == 1 || hOrT == 3 || hOrT == 6){
    cout<<"FC "<<fcName<<" have the first chance";
    myMove();

}
else{
    cout<<"Computer(FC "<<enemy<<") gets the first chance"<<endl;
    enemyMove();
}
}


void enemyMove(){
    int yScore;
    while(1){
    int yChance = rand() %2 +1;
int iChance = rand() %2 +1;
int lOrR;
int hi = 0;

cout<<"For COM(1 of 4)A Forward is waiting for you. Would you dribble left(1) OR right(2)?: ";
Sleep(2000);
cout<<"COM Chose: "<<yChance<<endl;
Sleep(2000);
    if (yChance == iChance){
            int iChance = rand() %2 +1;
            int yChance = rand() %2 +1;
        cout<<"COM just broke a Forwards's ankle."<<endl;
        Sleep(3000);
        cout<<"For COM(2 of 4)A midfielder is waiting for you. Would you dribble left(1) OR right(2)?: ";
        Sleep(3000);
        cout<<"COM Chose: "<<yChance<<endl;
        Sleep(3000);
        if (yChance == iChance){
            int iChance = rand() %2 +1;
            int yChance = rand() %2 +1;
            cout<<"COM just broke friendly midfielder's ankle(really?)"<<endl;
            Sleep(3000);
            cout<<"For COM(3 of 4)A Defender is waiting for you. Would you dribble left(1) OR right(2)?: ";
            Sleep(3000);
            cout<<"COM Chose: "<<yChance<<endl;
            Sleep(3000);
            if(yChance == iChance){
                int iChance = rand() %2 +1;
                int Ychance = rand() %2 +1;
                cout<<"what a great move!"<<endl;
                Sleep(3000);
                cout<<"it is COM vs goalkeeper. Shoot left(1) or right(2)?";
                Sleep(3000);
                cout<<"COM Chose: "<<yChance<<endl;
                Sleep(3000);
                if(yChance == iChance){
                    cout<<"COM SCORED!!!";
                    int yScore = yScore+1;
                }
                else{
                    cout<<"great save by Goalkeeper"<<endl;
                    myMove();
                }

            }
            else{
                cout<<"what a good tackle by defender"<<endl;
                myMove();
            }
        }
        else{
            cout<<"A savage midfielder just broke your ankle(oooooooh)"<<endl;
            myMove();
        }
    }
    else{
        cout<<"Forward just broke your ankle"<<endl;
        myMove();
    }
    if(yScore == 2)
        break;
    else
        continue;
}
}
void myMove(){
int iScore = 0;
        int yScore = 0;
        int hi = 0;
    while(1){

int yChance = rand() %2 +1;
int iChance = rand() %2 +1;
int lOrR;
if(iScore == 2){
    cout<<"You Won!";
}
else if(yScore == 2){
    cout<<"Com Won";
}



    cout<<"(1 of 4)A Forward is waiting for you. Would you dribble left(1) OR right(2)?: ";
    cin>>lOrR;
    if (lOrR == iChance){
            int iChance = rand() %2 +1;
        cout<<"you just broke a Forwards's ankle."<<endl;
        cout<<"(2 of 4)A midfielder is waiting for you. Would you dribble left(1) OR right(2)?: ";
        cin>>lOrR;
        if (lOrR == iChance){
            int iChance = rand() %2 +1;
            cout<<"You just broke friendly midfielder's ankle(really?)"<<endl;
            cout<<"(3 of 4)A Defender is waiting for you. Would you dribble left(1) OR right(2)?: ";
            cin>>lOrR;
            if(lOrR == iChance){
                int iChance = rand() %2 +1;
                cout<<"what a great move!"<<endl;
                cout<<"it is you vs goalkeeper. Shoot left(1) or right(2)?";
                cin>>lOrR;
            if(lOrR == iChance){
                cout<<"You SCORED";
                int iScore = yScore+1;
            }
            else{
                cout<<"great stop by a goalkeeper"<<endl;
            }

            }
            else{
                cout<<"what a great tackle by a defender!!!"<<endl;
                enemyMove();yScore+1
            }
        }
        else{
            cout<<"A savage midfielder just broke your ankle(oooooooh)"<<endl;
            enemyMove();
        }
    }
    else{
        cout<<"Forward just broke your ankle"<<endl;
        enemyMove();
    }

if(yScore == 2)
        break;
    }
    }






