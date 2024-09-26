/*
AUTHOR : EMERI RAPHAEL CHUKWUKA
INSTITUTION : COMPLETE COMPUTER AND TECHNOLOGY (CCT)
PROJECT : A QUIZ GAME
DATE CREATED : 20 / 09 / 2024
DATE LAST EDITED : 26 / 09 / 2024
MAIN CODE
*/






#include <iostream>
#include <cstring>
#include "quiz.h"

using namespace std;

int score = 0;

int main()
{

    while (true)
    {
        display_menu ();
        int userAnswer;
        cin >> userAnswer;

//SWITCH STATEMENT TO CALL THE QUIZ FUNCTIONS
    switch (userAnswer)
    {
        case 0:
        break;

        case 1:
        mathquiz(score);
        break;

        case 2:
            CSquiz(score);
            break;

        case 3:
            Geoquiz (score);
            break;

        case 4:
            Chemquiz (score);
            break;

        case 5:
            EngQuiz (score);
            break;

        default:
            cout << "THAT'S NOT A CHOICE, BRUVH... TRY AGAIN. " << endl;
    }

    cout << "YOUR CURRENT SCORE IS " << score <<endl;
    string userAnswer2;
    cout << "DO YOU WANT TO CONTINUE? (y/n) : " << endl;
    cin >> userAnswer2;
    if (userAnswer2 != "y") {
        break;
    }

}
cout << "THANKS FOR PLAYING. NOW...GET OUT WHILE YOU STILL CAN"<<endl;
cout << "YOUR FINAL SCORE IS : " <<score <<endl;
    return 0;
}
