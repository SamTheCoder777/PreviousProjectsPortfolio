#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <ctime>

int verifying;
int password = 147369;
using namespace std;

void letterA()
{
    cout<<"000000|000000"<<endl;
    cout<<"00000|0|00000"<<endl;
    cout<<"0000|000|0000"<<endl;
    cout<<"0001000001000"<<endl;
    cout<<"00|-------|00"<<endl;
    cout<<"0|000000000|0"<<endl;
    cout<<"|00000000000|"<<endl;
}

void letterB()
{
    cout<<"0000||---0000"<<endl;
    cout<<"0000||000|000"<<endl;
    cout<<"0000||000|000"<<endl;
    cout<<"0000||---0000"<<endl;
    cout<<"0000||000|000"<<endl;
    cout<<"0000||000|000"<<endl;
    cout<<"0000||---0000"<<endl;
}

void letterC()
{
    cout<<"0000000--0000"<<endl;
    cout<<"00000|0000000"<<endl;
    cout<<"0000|00000000"<<endl;
    cout<<"000|000000000"<<endl;
    cout<<"0000|00000000"<<endl;
    cout<<"00000|0000000"<<endl;
    cout<<"0000000--0000"<<endl;
}

void letterD()
{
    cout<<"0000|--000000"<<endl;
    cout<<"0000|00|00000"<<endl;
    cout<<"0000|000|0000"<<endl;
    cout<<"0000|0000|000"<<endl;
    cout<<"0000|000|0000"<<endl;
    cout<<"0000|00|00000"<<endl;
    cout<<"0000|--000000"<<endl;
}

void letterE()
{
    cout<<"000|-----0000"<<endl;
    cout<<"000|000000000"<<endl;
    cout<<"000|000000000"<<endl;
    cout<<"000|-----0000"<<endl;
    cout<<"000|000000000"<<endl;
    cout<<"000|000000000"<<endl;
    cout<<"000|-----0000"<<endl;
}
int main()
{
    cout << "Hello..." << endl;
    cout<<""<<endl;
    Sleep(3000);
    Start:
    cout << "Verify that you are Mr.Han:" << endl;
    cout << "Type the PASSWORD:";
    cin >> verifying;
    cout<<""<<endl;
    if(verifying == password){
        Sleep(1000);
        cout<< "Welcome back Mr.Han! :D" << endl;
        Sleep(1000);
        cout<< "Choose one: (1) Start hacking into a computer, (2) Crack a password of a device that is near you:";
        int choose;
        cin>> choose;
        cout<<" "<<endl;
        if(choose == 1){
        while(1){
           cout<<"000001|0000000|100000----00000"<<endl;
           Sleep(500);
           cout<<"000001|0000000|1000000||000000"<<endl;
           Sleep(500);
           cout<<"000001|0000000|1000000||000000"<<endl;
           Sleep(500);
           cout<<"000001|0000000|1000000||000000"<<endl;
           Sleep(500);
           cout<<"000001|0000000|1000000||000000"<<endl;
           Sleep(500);
           cout<<"000001|-------|1000000||000000"<<endl;
           Sleep(500);
           cout<<"000001|0000000|1000000||000000"<<endl;
           Sleep(500);
           cout<<"000001|0000000|1000000||000000"<<endl;
           Sleep(500);
           cout<<"000001|0000000|1000000||000000"<<endl;
           Sleep(500);
           cout<<"000001|0000000|1000000||000000"<<endl;
           Sleep(500);
           cout<<"000001|0000000|1000000||000000"<<endl;
           Sleep(500);
           cout<<"000001|0000000|100000----00000"<<endl;

           cout<<""<<endl;
           cout<<""<<endl;
           cout<<""<<endl;
           cout<<""<<endl;
           cout<<""<<endl;
        }



           /*Orighinaly:
            cout<<"01001010101001011010101";
            Sleep(100);
            cout<<"0100101";
            Sleep(100);
            cout<<"01001010101001011";
            Sleep(100);
            cout<<"010010101010";
            Sleep(100);
            cout<<"010010101010010110101";
            Sleep(100);
            */

        }
         if(choose == 2)
        {
            int howManyLetters;
            cout<<"how many letters?(max 6):";
            cin>>howManyLetters;
            cout<<""<<endl;

            if(howManyLetters == 1)
            {
                char letter11;
                cout<<"What Letter?:";
                cin>>letter11;
                if(letter11 == 'a' || letter11 == 'A')
                {
                    letterA();
                }

                if(letter11 == 'b' || letter11 == 'B')
                {
                    letterB();
                }

                if(letter11 == 'c' || letter11 == 'C')
                {
                    letterC();
                }
            }
        }
    }
    else if(verifying != password){
        Sleep(1000);
        cout<< "OOps, I don't think you can read. I want Mr.Han, NOT YOU!!!" << endl;
        cout<<""<<endl;
        Sleep(1000);
        goto Start;
    }

    return 0;
}

