#include <iostream>
#include <windows.h>
#include <string>
#include <cstring>
#include <ctime>


using namespace std;

int typeOfCube;
string notation;
int scramble3;
int scrambleAgain;

int rightOtherway;

void print(){
    int right;
        if (scramble3 == 1){
            notation = "F ";
            right = 7;
        }
        if (scramble3 == 2)
            notation = "R ";
            right = 8;
        if (scramble3 == 3)
            notation = "U ";
            right == 9;
        if (scramble3 == 4)
            notation = "L ";
            right == 10;
        if (scramble3 == 5)
            notation = "B ";
            right == 11;
        if (scramble3 == 6)
            notation = "D ";
            right == 12;
        if (scramble3 == 7)
            notation = "F' ";
            rightOtherway == 1;
        if (scramble3 == 8)
            notation = "R' ";
            rightOtherway == 2;
        if (scramble3 == 9)
            notation = "U' ";
            rightOtherway == 3;
        if (scramble3 == 10)
            notation = "L' ";
            rightOtherway == 4;
        if (scramble3 == 11)
            notation = "B' ";
            rightOtherway == 5;
        if (scramble3 == 12)
            notation = "D' ";
            rightOtherway == 6;
        if (scramble3 == 13)
            notation = "F2 ";
            rightOtherway == 7;
        if (scramble3 == 14)
            notation = "R2 ";
            right == 14;
        if (scramble3 == 15)
            notation = "U2 ";
            right == 15;
        if (scramble3 == 16)
            notation = "L2 ";
            right == 16;
        if (scramble3 == 17)
            notation = "B2 ";
            right == 17;
        if (scramble3 == 18)
            notation = "D2 ";
            right ==18;

}
void determine(){
    if (typeOfCube == 1){
        cout<<"You have selected the scrambles for 3by3\n";
    }
      if (typeOfCube == 2){
        cout<<"You have selected the scrambles for 3by3\n";
    }
      if (typeOfCube == 3){
        cout<<"You have selected the scrambles for 3by3\n";
    }
      if (typeOfCube == 4){
        cout<<"You have selected the scrambles for 3by3\n";
    }
      if (typeOfCube == 5){
        cout<<"You have selected the scrambles for 3by3\n";
    }
      if (typeOfCube == 6){
        cout<<"You have selected the scrambles for 3by3\n";
    }
}

void setup(){
    cout << "Welcome to my scrambler for 2by2 to 6by6 (might update it to get a scramble for all WCA cubes). (made by SamTheCoder777)" << endl;
    cout << "which cube would you like to get a scramble for?\n1) 3by3 \n2) 2by2\n3) 4by4\n4) 5by5\n5) 6by6: ";
    cin >> typeOfCube;
    cout<<endl;
}


int main()
{
    srand((unsigned)time(0));
    int scramble2 = rand() % 10 + 1;
    int scramble4 = rand() % 10 + 1;
    int scramble5 = rand() % 10 + 1;
    int scramble6 = rand() % 10 + 1;

    setup();
    determine();

    if (typeOfCube == 1){
    static int x=0;
    while(x <= 8){

        scramble3 = rand() % 18 + 1;
        scrambleAgain = rand() % 18 + 1;
        print();



          if(right - scramble3 == 0 || rightOtherway - scramble3 == 0){
            cout <<scrambleAgain;

          }
        else {
                cout<<notation;
        }
        x+=1;

    }
    }

    return 0;
}
