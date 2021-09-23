#include <iostream>
#include <time.h>
#include <windows.h>
using namespace std;
// Random number generator.
int main(void)
{
    Start:
        cout<<"wait please"<<endl;
        Sleep(3000);
    srand(time(NULL));
    int d = (rand()% 9)+1;
    int f = (rand()% 9)+1;
int a = 1;
if (a == 1||a == 4||a == 7){
    cout<<"play xbox(optional: type r):";
    char o;
    cin>>o;
    if (o == 'r'){
       goto Start;
    }
}

if (a == 2||a == 5||a == 8){
    cout<<"Play LOL"<<endl;
}

if (a == 3||a == 6||a == 9){
    cout<<"play Minecraft"<<endl;
}
    return 0;
}

