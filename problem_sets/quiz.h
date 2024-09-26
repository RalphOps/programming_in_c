/*
AUTHOR : EMERI RAPHAEL CHUKWUKA
INSTITUTION : COMPLETE COMPUTER AND TECHNOLOGY (CCT)
PROJECT : A QUIZ GAME
DATE CREATED : 20 / 09 / 2024
DATE LAST EDITED : 26 / 09 / 2024
HEADER FILE FOR FUNCTIONS
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

// FUNCTION TO DISPLAY THE MENU OF THE QUIZ
void display_menu ()
{
    string menu []= {{"1. MATH"}, {"2. COMPUTER SCIENCE"}, {"3. GEOGRAPHY"}, {"4. CHEMISTRY"}, {"5. ENGLISH"}, {"0. QUIT"}};

 int MenuNum = sizeof(menu)/ sizeof(menu[0]);
        for (int i = 0; i < MenuNum; i++){
        cout << menu[i] << endl;
}
}


// FUNCTION THAT COUNTS THE NUMBER OF QUESTIONS ASKED
//FUNCTION ALSO TAKES IN USER INPUT
void Question (vector<string> question, vector<string> answer, int& score)
{


            for (int i = 0; i<10; i++){
                cout << "QUESTION " << i+1 << ": " << question[i];
//IF USER GETS THE ANSWER THE 1ST TIME, HE GETS 10 POINTS
                string userAns;
                getline(cin, userAns);
                if (userAns == answer[i]){
                 score += 10;
                 cout << "CORRECT! BRO, YOU GOT 10 POINTS" << endl;
                 cout << endl;
//IF THE USER DOESNT GET THE ANSWER FIRST TIME, HE GETS TO INPUT AN ANSWER AGAIN

            }else if (userAns != answer[i]){
                cout << "SORRY BRO...TRY AGAIN : ";
               getline(cin, userAns);
//IF HE GETS THE ANSWER THE SCOND TRY, HE GETS ONLY 5 POINTS
               if (userAns == answer[i]) {
                    score +=5;
               cout << "you get 5 points" << endl;
                cout << endl;



//IF HE DOESN'T GET THE ANSWER, THE PROGRAM GIVES THE ACTUAL ANSWER BUT THE USER GETS NO POINT/SCORE
            }else if (userAns != answer[i]){
                cout << "WHO ARE YOU DAWG... THE CORRECT ANSWER IS  :  " << answer[i] <<endl;
                    cout << endl;
            }

            }
            }
}


//FUNCTION FOR THE MATH QUIZ WITH QUESTIONS AND ANSWERS
void mathquiz (int& score)
{
    cout << "MATHEMATICS QUIZ " << endl;
    vector <string> question = {{"WHAT IS 2 + 2 : "}, {"0.5 - 0.5 : ",}, {"50 X 2 : "}, {"56 + 56 : "}, {"100 X 100 : "},

                               {"13 + 13 + 13 : "}, {"69 x 1 : "}, {"400 - 200 : "}, {"5+5 : "}, {"6 x 6 : "} };


 vector<string> answer = { "4", "0", "100",  "112", "10000",  "39", "69", "200", "10",  "36" };

 //CALLS THE FUNCTION FOR USER INPUT AND GENERATES THE SCORE
  Question (question, answer, score);
}


//FUNCTION FOR COMPUTER SCIENCE QUIZ
void CSquiz (int& score)
{
    cout << " COMOUTER SCIENCE QUIZ" << endl;
   vector<string> question =  {{"FULL MEANING OF CPU : "}, {"IS A MOUSE AN INPUT DEVICE : "}, {"IS A MONITOR AN INPUT DEVICE ; " }, {"1 + 1 IN BINARY ; "}, {"IS A KEYBOARD AN INPUT DEVICE ; " },

                               {"A LIGHT PEN IS AN INPUT OR OUTPUT DVEICE ? "}, {"CONVERT 32 TO BINARY ; "}, {"WHAT IS A MONITOR USED FOR? "}, {"WHO IS THE FATHER OF COMPUTER ; " },

                                {"WHICH OF THESE IS NOT A GPU? (A). NVIDIA GEFORCE. (B). AMD RYZEN. (C). DIRECTX.  :  "} };


     vector<string> answer = {"Central Processing Unit", "yes", "no", "10", "yes","input", "100000", "to display information", "Charles Babbage","directx" } ;

 //CALLS THE FUNCTION FOR USER INPUT AND GENERATES THE SCORE
          Question (question, answer, score);
}

//FUNCTION FOR GEOGRAPHY QUIZ
void Geoquiz (int& score)
{
    cout << "GEOGRAPHY QUIZ " << endl;
   vector<string> question = {{"WHAT PLANET ARE WE IN : " }, {"WHAT COUNTRY IS BENIN CITY IN? "}, {"ENGLISH OR SPANISH" }, {"WHAT CONTINENT IS ENGLAND IN" }, {"WHAT CONTINENT IS NORWAY IN?"},

                               {"WHAT COUNTRY IS OHIO IN"}, {"WHERE IS EDO STATE?"}, {"WHO IS THE GOAT??"}, {"1+1"}, {"6 x 6" } };


    vector<string> answer = {"earth","nigeria","no", "europe", "europe","america", "nigeria", "neymar", "2", "36" };
//CALLS THE FUNCTION FOR USER INPUT AND GENERATES THE SCORE
    Question (question, answer, score);
}

//FUNCTION FOR CHEMISTRY QUIZ
void Chemquiz (int& score)
{
    cout << "CHEMISTRY QUIZ" << endl;
    vector<string> question = {{"WHAT IS THE CHEMICAL FORMULA FOR WATER : "}, {"THE LAW REGARDING VOLUME AND TEMPERATURE : "}, {"SMALLEST UNIT OF AN ELEMENT : "},  {"CHEMICAL FORMULA FOR OXYGEN : "},



                                {"CHEMICAL FORMULA FOR COMMON SALT : "}, {"COMBINATION OF TWO ELEMENTS : "}, {"IS AIR A COMPOUND OR A MIXTURE ? : "}, {"IS SALT A COMPOUND OR A MIXTURE : "},



                                {"CHEMICAL FORMULA FOR POTASSIUM : "},  {"WHAT NUMBER IS HELIUM IN THE PERIODIC TABLE : "}

                            };




  vector<string> answer = {{"H20"}, {"charles law"}, {"atom"}, {"O2"}, {"NACL"}, {"compound"},  {"mixture"},  {"compound"}, {"K"},  {"2"}  };
//CALLS THE FUNCTION FOR USER INPUT AND GENERATES THE SCORE
    Question (question, answer, score);

}

// FUNCCTION FOR ENGLISH QUIZ
void EngQuiz (int& score)
{
    cout << "ENGLISH QUIZ " << endl;
 vector<string> question = {"WHO WROTE ROMEO AND JULLIET : ",
                            "WHAT YEAR WAS NAPOLEON BONAPPARTE ALIVE ? ",
                            "WHAT IS AN ACTION WORD : ",
                            "WHAT MODIFIES A VERB : "
                            "WHAT ARE WORDS USED TO MODIFY A NOUN : ",
                            "THE WORD 'HE' IS AN EXAMPLE OF... : ",
                            "WHO IS THE AUTHOR OF OTHELLO : "
                            "FIGURE OF SPEECH FOR INDIRECT COMPARISON : ",
                            "FIGURE OF SPEECH FOR DIRECT COMPARISON : ",
                            "PART OF SPEECH FOR NAME OF ANIMAL, PLACE OR THING : "
                            };

    vector<string> answer = { "William Shakespeare",
                                "1800s",
                                "verb",
                                "adverb",
                                "pronoun",
                                "pronoun",
                                "Williams Shakespeare",
                                "simile",
                                "personification",
                                "noun",

                            };


//CALLS THE FUNCTION FOR USER INPUT AND GENERATES THE SCORE
Question (question, answer, score);

}
