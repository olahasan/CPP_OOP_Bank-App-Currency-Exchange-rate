#include <iostream>
//#include "clsMainScreen.h"
#include "clsLoginScreen.h"

using namespace std;



int main()

{

    //clsMainScreen::ShowMainMenue();

    while (true)
    {
        //clsLoginScreen::ShowLoginScreen();
        if (!clsLoginScreen::ShowLoginScreen())
        {
            break;
        }
    }





    //system("pause>0");
    return 0;
}



