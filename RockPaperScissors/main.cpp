#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <string>

using namespace std;
//1 is Rock, 2 paper, 3 is scissors
//int name = equal to

int main()
{
    srand(time(NULL));
    int chance = rand() % 3 +1;
    int mPick;
    cout<<"please input 1(rock), 2(paper), 3(sissors)"<<endl;
    cin>>mPick;
    cout<<""<<endl;

    if ( chance == 1 &&  mPick == 1){
            cout<<"draw!!!"<<endl;

}

       if (chance == 1 &&  mPick == 2){
            cout<<"You Win!!"<<endl;

}

       if (chance == 1 && mPick == 3){
            cout<<"You Lose!!"<<endl;

}

   if (chance == 2 && mPick == 1){
            cout<<"You Lose!!"<<endl;

}

       if (chance == 2 && mPick == 2){
            cout<<"draw!!"<<endl;

}

       if (chance == 2 && mPick == 3){
            cout<<"You Win!!"<<endl;

}

       if (chance == 3 &&  mPick == 1){
            cout<<"You Lose!!"<<endl;

}

   if (chance == 3 && mPick == 2){
            cout<<"You Win!!"<<endl;

}

   if (chance == 3 && mPick == 3){
            cout<<"draw!!"<<endl;

}


}

