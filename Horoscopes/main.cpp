#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
    while(1){
    cout << "Welcome!" << endl;
    Sleep(2000);


    cout <<"What is your Birth month? (the month you are born in [Please use the capital for the first letter): ";
    string month;
    cin >> month;
    cout<<""<<endl;

    Sleep(2000);
    cout << "what is your day of your birthday? : ";
    int day;
    cin >> day;
    cout<<""<<endl;

    if ((month == "March" && day >= 21 && day <= 31) || (month == "April" && day <= 20)){
        cout << "You are an Aries!!!"<<endl;
        break;
    }

    else if ((month == "April" && day >= 21 && day <= 31) || (month == "May" && day <= 20)){
        cout << "You are a Taurus!"<<endl;
        break;
    }

     else if ((month == "May" && day >= 21 && day <= 31) || (month == "June" && day <= 21)){
        cout << "You are a Gemini!"<<endl;
        break;
    }

     else if ((month == "June" && day >= 22 && day <= 31) || (month == "July" && day <= 22)){
        cout << "You are a Cancer!"<<endl;
        break;
    }

     else if ((month == "July" && day >= 23 && day <= 31) || (month == "August" && day <= 23)){
        cout << "You are a Leo!"<<endl;
        break;
    }

     else if ((month == "August" && day >= 24 && day <= 31) || (month == "September" && day <= 23)){
        cout << "You are a Virgo!"<<endl;
        break;
    }

     else if ((month == "September" && day >= 24 && day <= 31) || (month == "October" && day <= 23)){
        cout << "You are a Libra!"<<endl;
        break;
    }

     else if ((month == "October" && day >= 24 && day <= 31) || (month == "November" && day <= 22)){
        cout << "You are a Scorpio!"<<endl;
        break;
    }

     else if ((month == "November" && day >= 23 && day <= 31) || (month == "December" && day <= 21)){
        cout << "You are a Sagittarius!"<<endl;
        break;
    }

     else if ((month == "December" && day >= 22 && day <= 31) || (month == "January" && day <= 20)){
        cout << "You are a Capricorn!"<<endl;
        break;
    }

     else if ((month == "January" && day >= 21 && day <= 31) || (month == "Febuary" && day <= 18)){
        cout << "You are a Aquarius!"<<endl;
        break;
    }

     else if ((month == "Febuary" && day >= 19 && day <= 31) || (month == "March" && day <= 20)){
        cout << "You are a Pisces!"<<endl;
        break;
    }

    else{
        cout <<"ERROR";
        Sleep(1000);
        cout<<".";
        Sleep(1000);
        cout<<".";
        Sleep(1000);
        cout<<".";
        Sleep(1000);
        cout<<""<<endl;

        cout << "Please try again with a proper format";
        Sleep(1000);
        cout<<""<<endl;

    }


    }
    int stop;
    cin>>stop;

    return 0;
}

