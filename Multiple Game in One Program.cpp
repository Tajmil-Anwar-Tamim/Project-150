#include <bits/stdc++.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>                        ///for getch();

#define TabM  cout << "\t\t\t\t\t\t";     ///Likhagulo Middle Show korar jonno
#define TabM2 cout << "\t\t\t\t     ";
#define TabM3 cout << "\t\t\t\t\t  ";
#define TabM4 cout << "\t\t\t\t ";

#define new   cout << "\n";              ///New Line
#define Sound cout << "\a";              /// Sound 

#define StrM  cout << "* * * * ";
#define Str   cout << "* ";
#define BrdrM cout << "o o o o o o o o o o o ";
#define Brdr  cout << "o ";

#define show        cout << "\tScore : " << Score << endl << endl;
#define showScore   cout << "\tScore : " << Score << endl;
#define showLife    cout << "\t Life : " << Life << endl << endl;

using namespace std;

int Randam_Func_09 (int a)                  ///Decited Computer's Chose Index in Tic Tac Toe Game
{
    srand(time(NULL));
    a  =  rand() % 9;
    a++;
    return a;
}

int Randam_Function_100 (int Return_Fruit) ///Decited Fruit possition in Snake Game
{
    srand(time(NULL));
    Return_Fruit   =   rand() % 100;
    Return_Fruit++;
    return Return_Fruit;
}


int main()
{
            char ch = 2;  ///Smile Face
            TabM cout << ch << "   MULTIPLE GAME   " << ch;
Menu:
            new new
            TabM2 printf("Switch 1,    to Play         TIC TAC TIC(Man vs Com)\n");
            TabM2 printf("Switch 2,    to Play         TIC TAC TIC(Man vs Man)\n\n");
            TabM2 printf("Switch 3,    to Play            SNAKE GAME (Classic)\n");
            TabM2 printf("Switch 4,    to Play            SNAKE GAME (  Box  )\n\n");
            TabM2 printf("Switch 5,    to Play            PACMAN Lite (Normal)\n");
            TabM2 printf("Switch 6,    to Play            PACMAN Lite (Expert)\n\n");
            TabM2 printf("Switch 7,    to Play        SNAKE-LUDO (vs Computer)\n");
            TabM2 printf("Switch 8,    to Play        SNAKE-LUDO (MultiPlayer)\n\n");
            TabM2 printf("Switch 9,    to Play    SUDOKU  (Fixed  Given Value)\n");
            TabM2 printf("Switch 10,   to Play    SUDOKU  (Custom Given Value)\n\n");
            TabM2 printf("Switch 11,   to Play         CRICKET (Bowling First)\n");
            TabM2 printf("Switch 12,   to Play         CRICKET (Batting First)\n\n");
            TabM2 printf("Switch 0,    to CLOSE                   THE PROGRAM\n\n");                 ///Introduction end

            new new ///New Line

            TabM2 printf("SWITCH CASE NUMBER (0 to 10): \t");

    int mark;
    cin  >>  mark;
    new new new



    switch (mark){


    case 1:     ///Tic Tac Toe (Man vs Computer)

        while(1)
        {
            int i,Me = 0,Computer = 0,Time = 0,Win_I = 0,Win_Com = 0,Call,Level;
            char who,Index_Data[11];  ///'who' uses for who play first & Index_Data[10] contains Data which Index fill up or Not
            char Index_Symbol[11];    ///Box-Symbol String (show 'x','o',' ')

            cout << "\t\t\t\t\t       TIC TAC TIC\n\n";
            cout << "\t\t\t  ";  cout << "[Everytime Press '1' to '9' For Push Your Symbol in the Box] " << endl << endl;


                ///Show the Index Numbers (below)
                TabM Str StrM new
                TabM Str cout << "1 2 3 ";  Str new
                TabM Str cout << "4 5 6 ";  Str new
                TabM Str cout << "7 8 9 ";  Str new
                TabM Str StrM new new

                for(i = 0; i <= 9; i++)
                {
                    Index_Data[i] = 0;
                }

    ///           new cout << "\t\t\t  ";  cout << "[Everytime Press '1' to '9' For Push Your Symbol in the Box] " << endl << endl;

                Print_Loop_ttt_vsc:///Print_Update

                Index_Data[Me] = 1;
                Index_Data[Computer] = 2;

                for(i = 0; i <= 9; i++)
                {
                    if(Index_Data[i] == 0) Index_Symbol[i] = ' ';      ///Unfilled
                    if(Index_Data[i] == 1) Index_Symbol[i] = 'x';      ///Filled by You
                    if(Index_Data[i] == 2) Index_Symbol[i] = 'o';      ///Filled by Computer

                }

                new
                Sound
                TabM Str StrM new                       ///Index Border Degign
                TabM Str

                for(i = 1; i <= 9; i++)
                {
                   cout << Index_Symbol[i] << " ";           ///Show Update
                   if(i%3 == 0) {Str new TabM Str }     ///jehutu colomn 3 ta tai 3 index por por new line
                }

                StrM new new

                if(Time == 0)                         ///only first time show these (below)
                    {
                        new TabM cout << "Choise Level";
                        new TabM3 cout << "Easy / Medium / Hard";
                        new TabM2 cout << "   Press - '1' / '2' / '3' : ";
                        cin >> Level;
                        new new

                        if      (Level <= 0) break;  ///if you want to close the game
                        else if (Level == 1) {TabM cout << "EASY LEVEL\n"; }
                        else if (Level == 2) {TabM cout << "MEDIUM LEVEL\n"; }
                        else               {TabM cout << "HARD LEVEL\n"; }
                        new

                        ///who play first(You/Computer/Toss)

                        TabM3 cout << "  Who Play First?\n";
                        TabM3 cout <<  "('You'/'Computer')\n";
                        TabM4 cout << "Press 'I' for 'You' or 'C' for 'Computer'\n";
                        TabM4 cout << "     Press 'Other Any Key' for Tossing\n";
                        TabM3 cout << " (Without Quatation) :\n\n";
                        TabM  cout << "   ";

                        cin >> who;
                        who = tolower(who);
                        if(who != 'i' && who != 'c')            ///Tossing
                        {
                            srand(time(NULL));
                            if(rand() %2 == who %2 ) {new TabM3 cout << "  You won the Toss\n" ; who = 'i'; }
                            else {new TabM3 cout << "Computer won the Toss\n" ;  who = 'c'; }
                        }

                        new new
                        TabM Str StrM new
                        TabM Str cout << "1 2 3 ";  Str new
                        TabM Str cout << "4 5 6 ";  Str new
                        TabM Str cout << "7 8 9 ";  Str new
                        TabM Str StrM new new

                        Sound
                        TabM Str StrM new
                        TabM Str

                        for(i = 1; i <= 9; i++)
                        {
                           cout << Index_Symbol[i] << " ";
                           if(i%3 == 0) {Str new TabM Str }
                        }

                        StrM new new
                    }

                if(Time == 0 && who == 'c') goto Com;              ///Computer er First chal hole
                if(Time == 0) ;
                else if(Time%2 == 1 && who == 'c' || Time%2 == 0 && who != 'c') goto Come_Back_2;      ///Jor o bijor tomo chaler hiseb (Computer age chal dile bijor tomo chal gulo Computer er ar ami age chal dile jor tomo chal gulo Computer er)
                else goto Come_Back_1;                                                               /// " " "



            while(1)
            {
                You:
                    Time++;                 ///kotota ghor fill up holo- seta count kora hocche

                    ReCall_Me:

                        new new TabM3 cout << "Your Choise   :\t";
                        cin >> Me;
    ///                    Me  =  Me % 10;
                        if(Me<0 || Me  >=  10)
                        {new TabM cout << "Wrong Input";  goto Menu;  }              /// jodi wrong chal dewa hoy, then- game close hobe


                        if(Index_Data[Me]  !=  0)                       ///jodi ghor-tite already chal dewa hoye thake
                        {cout << "Already Exist\n\n"; goto ReCall_Me; }   ///tobe accept hobe na, punoray chal dewa lagbe

                    Index_Data[Me] = 1;                ///Index-tate Amar chal input holo

                    goto Print_Loop_ttt_vsc;         ///for printing update result

                    Come_Back_1:         ///print kore punoray fire ase

                        if(Index_Data[1] == 1 && Index_Data[2] == 1 && Index_Data[3] == 1 || Index_Data[4] == 1 && Index_Data[5] == 1 && Index_Data[6] == 1 || Index_Data[7] == 1 && Index_Data[8] == 1 && Index_Data[9] == 1 || Index_Data[1] == 1 && Index_Data[4] == 1 && Index_Data[7] == 1 || Index_Data[2] == 1 && Index_Data[5] == 1 && Index_Data[8] == 1 || Index_Data[3] == 1 && Index_Data[6] == 1 && Index_Data[9] == 1 ||  Index_Data[3] == 1 && Index_Data[5] == 1 && Index_Data[7] == 1 || Index_Data[1] == 1 && Index_Data[5] == 1 && Index_Data[9] == 1 )
                        {
                            Win_I++;
                            break;               ///Ami jitle game finished hobe
                        }
                    if(Time == 9) break;         ///sob (9ta) ghor puron holegame finished

                Com:
                    Time++;                      ///kotobar chal dewa holo/ kotota Index puron holo, seta count kora hocche

                    if(Level == 1)                ///Easy mode : Computer sob chal randamly dibe
                    {
                        while(1)
                            {
                                Computer  =  Randam_Func_09(Call);
                                if(Index_Data[Computer] == 0 ) break;
                            }
                    }

                    else if(Level == 2)       ///Medium Level : kichuta buddhimotta apply korbe computer, bad computer a bishesh koushole fade fele harano somvob
                    {
                        ///Attack of Computer (Computer er nije jitar Formula gulo)
                        if     (Index_Data[1] == 2 && Index_Data[2] == 2 && Index_Data[3] == 0)  { Index_Data[3]  =  2;  Computer  = 3; }
                        else if(Index_Data[1] == 2 && Index_Data[3] == 2 && Index_Data[2] == 0)  { Index_Data[2]  =  2;  Computer  = 2; }
                        else if(Index_Data[2] == 2 && Index_Data[3] == 2 && Index_Data[1] == 0)  { Index_Data[1]  =  2;  Computer  = 1; }
                        else if(Index_Data[4] == 2 && Index_Data[5] == 2 && Index_Data[6] == 0)  { Index_Data[6]  =  2;  Computer  = 6; }
                        else if(Index_Data[4] == 2 && Index_Data[6] == 2 && Index_Data[5] == 0)  { Index_Data[5]  =  2;  Computer  = 5; }
                        else if(Index_Data[5] == 2 && Index_Data[6] == 2 && Index_Data[4] == 0)  { Index_Data[4]  =  2;  Computer  = 4; }
                        else if(Index_Data[7] == 2 && Index_Data[8] == 2 && Index_Data[9] == 0)  { Index_Data[9]  =  2;  Computer  = 9; }
                        else if(Index_Data[7] == 2 && Index_Data[9] == 2 && Index_Data[8] == 0)  { Index_Data[8]  =  2;  Computer  = 8; }
                        else if(Index_Data[8] == 2 && Index_Data[9] == 2 && Index_Data[7] == 0)  { Index_Data[7]  =  2;  Computer  = 7; }
                        else if(Index_Data[1] == 2 && Index_Data[4] == 2 && Index_Data[7] == 0)  { Index_Data[7]  =  2;  Computer  = 7; }
                        else if(Index_Data[1] == 2 && Index_Data[7] == 2 && Index_Data[4] == 0)  { Index_Data[4]  =  2;  Computer  = 4; }
                        else if(Index_Data[4] == 2 && Index_Data[7] == 2 && Index_Data[1] == 0)  { Index_Data[1]  =  2;  Computer  = 1; }
                        else if(Index_Data[2] == 2 && Index_Data[5] == 2 && Index_Data[8] == 0)  { Index_Data[8]  =  2;  Computer  = 8; }
                        else if(Index_Data[2] == 2 && Index_Data[8] == 2 && Index_Data[5] == 0)  { Index_Data[5]  =  2;  Computer  = 5; }
                        else if(Index_Data[5] == 2 && Index_Data[8] == 2 && Index_Data[2] == 0)  { Index_Data[2]  =  2;  Computer  = 2; }
                        else if(Index_Data[3] == 2 && Index_Data[6] == 2 && Index_Data[9] == 0)  { Index_Data[9]  =  2;  Computer  = 9; }
                        else if(Index_Data[3] == 2 && Index_Data[9] == 2 && Index_Data[6] == 0)  { Index_Data[6]  =  2;  Computer  = 6; }
                        else if(Index_Data[6] == 2 && Index_Data[9] == 2 && Index_Data[3] == 0)  { Index_Data[3]  =  2;  Computer  = 3; }
                        else if(Index_Data[1] == 2 && Index_Data[5] == 2 && Index_Data[9] == 0)  { Index_Data[9]  =  2;  Computer  = 9; }
                        else if(Index_Data[1] == 2 && Index_Data[9] == 2 && Index_Data[5] == 0)  { Index_Data[5]  =  2;  Computer  = 5; }
                        else if(Index_Data[5] == 2 && Index_Data[9] == 2 && Index_Data[1] == 0)  { Index_Data[1]  =  2;  Computer  = 1; }
                        else if(Index_Data[3] == 2 && Index_Data[5] == 2 && Index_Data[7] == 0)  { Index_Data[7]  =  2;  Computer  = 7; }
                        else if(Index_Data[3] == 2 && Index_Data[7] == 2 && Index_Data[5] == 0)  { Index_Data[5]  =  2;  Computer  = 5; }
                        else if(Index_Data[5] == 2 && Index_Data[7] == 2 && Index_Data[3] == 0)  { Index_Data[3]  =  2;  Computer  = 3; }

                        ///Depends of Computer(computer er amar jita atkanor formula gulo)
                        else if(Index_Data[1] == 1 && Index_Data[2] == 1 && Index_Data[3] == 0)  { Index_Data[3]  =  2;  Computer  = 3; }
                        else if(Index_Data[1] == 1 && Index_Data[3] == 1 && Index_Data[2] == 0)  { Index_Data[2]  =  2;  Computer  = 2; }
                        else if(Index_Data[2] == 1 && Index_Data[3] == 1 && Index_Data[1] == 0)  { Index_Data[1]  =  2;  Computer  = 1; }
                        else if(Index_Data[4] == 1 && Index_Data[5] == 1 && Index_Data[6] == 0)  { Index_Data[6]  =  2;  Computer  = 6; }
                        else if(Index_Data[4] == 1 && Index_Data[6] == 1 && Index_Data[5] == 0)  { Index_Data[5]  =  2;  Computer  = 5; }
                        else if(Index_Data[5] == 1 && Index_Data[6] == 1 && Index_Data[4] == 0)  { Index_Data[4]  =  2;  Computer  = 4; }
                        else if(Index_Data[7] == 1 && Index_Data[8] == 1 && Index_Data[9] == 0)  { Index_Data[9]  =  2;  Computer  = 9; }
                        else if(Index_Data[7] == 1 && Index_Data[9] == 1 && Index_Data[8] == 0)  { Index_Data[8]  =  2;  Computer  = 8; }
                        else if(Index_Data[8] == 1 && Index_Data[9] == 1 && Index_Data[7] == 0)  { Index_Data[7]  =  2;  Computer  = 7; }
                        else if(Index_Data[1] == 1 && Index_Data[4] == 1 && Index_Data[7] == 0)  { Index_Data[7]  =  2;  Computer  = 7; }
                        else if(Index_Data[1] == 1 && Index_Data[7] == 1 && Index_Data[4] == 0)  { Index_Data[4]  =  2;  Computer  = 4; }
                        else if(Index_Data[4] == 1 && Index_Data[7] == 1 && Index_Data[1] == 0)  { Index_Data[1]  =  2;  Computer  = 1; }
                        else if(Index_Data[2] == 1 && Index_Data[5] == 1 && Index_Data[8] == 0)  { Index_Data[8]  =  2;  Computer  = 8; }
                        else if(Index_Data[2] == 1 && Index_Data[8] == 1 && Index_Data[5] == 0)  { Index_Data[5]  =  2;  Computer  = 5; }
                        else if(Index_Data[5] == 1 && Index_Data[8] == 1 && Index_Data[2] == 0)  { Index_Data[2]  =  2;  Computer  = 2; }
                        else if(Index_Data[3] == 1 && Index_Data[6] == 1 && Index_Data[9] == 0)  { Index_Data[9]  =  2;  Computer  = 9; }
                        else if(Index_Data[3] == 1 && Index_Data[9] == 1 && Index_Data[6] == 0)  { Index_Data[6]  =  2;  Computer  = 6; }
                        else if(Index_Data[6] == 1 && Index_Data[9] == 1 && Index_Data[3] == 0)  { Index_Data[3]  =  2;  Computer  = 3; }
                        else if(Index_Data[1] == 1 && Index_Data[5] == 1 && Index_Data[9] == 0)  { Index_Data[9]  =  2;  Computer  = 9; }
                        else if(Index_Data[1] == 1 && Index_Data[9] == 1 && Index_Data[5] == 0)  { Index_Data[5]  =  2;  Computer  = 5; }
                        else if(Index_Data[5] == 1 && Index_Data[9] == 1 && Index_Data[1] == 0)  { Index_Data[1]  =  2;  Computer  = 1; }
                        else if(Index_Data[3] == 1 && Index_Data[5] == 1 && Index_Data[7] == 0)  { Index_Data[7]  =  2;  Computer  = 7; }
                        else if(Index_Data[3] == 1 && Index_Data[7] == 1 && Index_Data[5] == 0)  { Index_Data[5]  =  2;  Computer  = 5; }
                        else if(Index_Data[5] == 1 && Index_Data[7] == 1 && Index_Data[3] == 0)  { Index_Data[3]  =  2;  Computer  = 3; }

                        else if(Time == 9)                ///seshe je ghor faka thakbe setate chalbe (time complexity komanor jonno just, not so necessary)
                            {   for(i = 1; i <= 9; i++)   {if(Index_Data[i] == 0) Computer = i; }  }

                        else                            /// kono shortoi na mille randamly chal dibe computer
                        {
                            while(1)
                            {
                                Computer  =  Randam_Func_09(Call);
                                if(Index_Data[Computer] == 0 ) break;
                            }
                        }

                    }

                    else            ///Hard Level (Harano osomvob - hoy com. jitbe nahoy draw) - Medium er sathe aro kichu shorto add kora hoyeche jate com. ke fade feleo harano na jay)
                    {
                        ///Attacks
                        if     (Index_Data [1] == 2 && Index_Data [2] == 2 && Index_Data [3] == 0)  { Index_Data [3]  =  2;  Computer  = 3; }
                        else if(Index_Data [1] == 2 && Index_Data [3] == 2 && Index_Data [2] == 0)  { Index_Data [2]  =  2;  Computer  = 2; }
                        else if(Index_Data [2] == 2 && Index_Data [3] == 2 && Index_Data [1] == 0)  { Index_Data [1]  =  2;  Computer  = 1; }
                        else if(Index_Data [4] == 2 && Index_Data [5] == 2 && Index_Data [6] == 0)  { Index_Data [6]  =  2;  Computer  = 6; }
                        else if(Index_Data [4] == 2 && Index_Data [6] == 2 && Index_Data [5] == 0)  { Index_Data [5]  =  2;  Computer  = 5; }
                        else if(Index_Data [5] == 2 && Index_Data [6] == 2 && Index_Data [4] == 0)  { Index_Data [4]  =  2;  Computer  = 4; }
                        else if(Index_Data [7] == 2 && Index_Data [8] == 2 && Index_Data [9] == 0)  { Index_Data [9]  =  2;  Computer  = 9; }
                        else if(Index_Data [7] == 2 && Index_Data [9] == 2 && Index_Data [8] == 0)  { Index_Data [8]  =  2;  Computer  = 8; }
                        else if(Index_Data [8] == 2 && Index_Data [9] == 2 && Index_Data [7] == 0)  { Index_Data [7]  =  2;  Computer  = 7; }
                        else if(Index_Data [1] == 2 && Index_Data [4] == 2 && Index_Data [7] == 0)  { Index_Data [7]  =  2;  Computer  = 7; }
                        else if(Index_Data [1] == 2 && Index_Data [7] == 2 && Index_Data [4] == 0)  { Index_Data [4]  =  2;  Computer  = 4; }
                        else if(Index_Data [4] == 2 && Index_Data [7] == 2 && Index_Data [1] == 0)  { Index_Data [1]  =  2;  Computer  = 1; }
                        else if(Index_Data [2] == 2 && Index_Data [5] == 2 && Index_Data [8] == 0)  { Index_Data [8]  =  2;  Computer  = 8; }
                        else if(Index_Data [2] == 2 && Index_Data [8] == 2 && Index_Data [5] == 0)  { Index_Data [5]  =  2;  Computer  = 5; }
                        else if(Index_Data [5] == 2 && Index_Data [8] == 2 && Index_Data [2] == 0)  { Index_Data [2]  =  2;  Computer  = 2; }
                        else if(Index_Data [3] == 2 && Index_Data [6] == 2 && Index_Data [9] == 0)  { Index_Data [9]  =  2;  Computer  = 9; }
                        else if(Index_Data [3] == 2 && Index_Data [9] == 2 && Index_Data [6] == 0)  { Index_Data [6]  =  2;  Computer  = 6; }
                        else if(Index_Data [6] == 2 && Index_Data [9] == 2 && Index_Data [3] == 0)  { Index_Data [3]  =  2;  Computer  = 3; }
                        else if(Index_Data [1] == 2 && Index_Data [5] == 2 && Index_Data [9] == 0)  { Index_Data [9]  =  2;  Computer  = 9; }
                        else if(Index_Data [1] == 2 && Index_Data [9] == 2 && Index_Data [5] == 0)  { Index_Data [5]  =  2;  Computer  = 5; }
                        else if(Index_Data [5] == 2 && Index_Data [9] == 2 && Index_Data [1] == 0)  { Index_Data [1]  =  2;  Computer  = 1; }
                        else if(Index_Data [3] == 2 && Index_Data [5] == 2 && Index_Data [7] == 0)  { Index_Data [7]  =  2;  Computer  = 7; }
                        else if(Index_Data [3] == 2 && Index_Data [7] == 2 && Index_Data [5] == 0)  { Index_Data [5]  =  2;  Computer  = 5; }
                        else if(Index_Data [5] == 2 && Index_Data [7] == 2 && Index_Data [3] == 0)  { Index_Data [3]  =  2;  Computer  = 3; }
                        ///Depends
                        else if(Index_Data [1] == 1 && Index_Data [2] == 1 && Index_Data [3] == 0)  { Index_Data [3]  =  2;  Computer  = 3; }
                        else if(Index_Data [1] == 1 && Index_Data [3] == 1 && Index_Data [2] == 0)  { Index_Data [2]  =  2;  Computer  = 2; }
                        else if(Index_Data [2] == 1 && Index_Data [3] == 1 && Index_Data [1] == 0)  { Index_Data [1]  =  2;  Computer  = 1; }
                        else if(Index_Data [4] == 1 && Index_Data [5] == 1 && Index_Data [6] == 0)  { Index_Data [6]  =  2;  Computer  = 6; }
                        else if(Index_Data [4] == 1 && Index_Data [6] == 1 && Index_Data [5] == 0)  { Index_Data [5]  =  2;  Computer  = 5; }
                        else if(Index_Data [5] == 1 && Index_Data [6] == 1 && Index_Data [4] == 0)  { Index_Data [4]  =  2;  Computer  = 4; }
                        else if(Index_Data [7] == 1 && Index_Data [8] == 1 && Index_Data [9] == 0)  { Index_Data [9]  =  2;  Computer  = 9; }
                        else if(Index_Data [7] == 1 && Index_Data [9] == 1 && Index_Data [8] == 0)  { Index_Data [8]  =  2;  Computer  = 8; }
                        else if(Index_Data [8] == 1 && Index_Data [9] == 1 && Index_Data [7] == 0)  { Index_Data [7]  =  2;  Computer  = 7; }
                        else if(Index_Data [1] == 1 && Index_Data [4] == 1 && Index_Data [7] == 0)  { Index_Data [7]  =  2;  Computer  = 7; }
                        else if(Index_Data [1] == 1 && Index_Data [7] == 1 && Index_Data [4] == 0)  { Index_Data [4]  =  2;  Computer  = 4; }
                        else if(Index_Data [4] == 1 && Index_Data [7] == 1 && Index_Data [1] == 0)  { Index_Data [1]  =  2;  Computer  = 1; }
                        else if(Index_Data [2] == 1 && Index_Data [5] == 1 && Index_Data [8] == 0)  { Index_Data [8]  =  2;  Computer  = 8; }
                        else if(Index_Data [2] == 1 && Index_Data [8] == 1 && Index_Data [5] == 0)  { Index_Data [5]  =  2;  Computer  = 5; }
                        else if(Index_Data [5] == 1 && Index_Data [8] == 1 && Index_Data [2] == 0)  { Index_Data [2]  =  2;  Computer  = 2; }
                        else if(Index_Data [3] == 1 && Index_Data [6] == 1 && Index_Data [9] == 0)  { Index_Data [9]  =  2;  Computer  = 9; }
                        else if(Index_Data [3] == 1 && Index_Data [9] == 1 && Index_Data [6] == 0)  { Index_Data [6]  =  2;  Computer  = 6; }
                        else if(Index_Data [6] == 1 && Index_Data [9] == 1 && Index_Data [3] == 0)  { Index_Data [3]  =  2;  Computer  = 3; }
                        else if(Index_Data [1] == 1 && Index_Data [5] == 1 && Index_Data [9] == 0)  { Index_Data [9]  =  2;  Computer  = 9; }
                        else if(Index_Data [1] == 1 && Index_Data [9] == 1 && Index_Data [5] == 0)  { Index_Data [5]  =  2;  Computer  = 5; }
                        else if(Index_Data [5] == 1 && Index_Data [9] == 1 && Index_Data [1] == 0)  { Index_Data [1]  =  2;  Computer  = 1; }
                        else if(Index_Data [3] == 1 && Index_Data [5] == 1 && Index_Data [7] == 0)  { Index_Data [7]  =  2;  Computer  = 7; }
                        else if(Index_Data [3] == 1 && Index_Data [7] == 1 && Index_Data [5] == 0)  { Index_Data [5]  =  2;  Computer  = 5; }
                        else if(Index_Data [5] == 1 && Index_Data [7] == 1 && Index_Data [3] == 0)  { Index_Data [3]  =  2;  Computer  = 3; }

                        ///Some Extra-intelegence of Computer (below) <-- jate kono vabe fade felano na jay
                        else if (Time == 1)
                        {
                           srand(time(NULL));
                           Computer  =  (2*(rand()%5))+1;
                        }
                        else if(Time == 2 && ( Index_Data [1] == 1 || Index_Data [3] == 1 || Index_Data [7] == 1 || Index_Data [9] == 1  )) {Index_Data [5] == 2;  Computer = 5; }

                        else if(Time == 2 && Index_Data [5] == 1 )
                        {
                            Randam_Func_09(Call) ;
                            Computer = (rand()%4+1)*2-1;
                            if(Computer == 5) Computer = 9;
                        }

                        else if (Time == 3 && Index_Data [5] == 0)
                        {
                            Computer = 5;
                        }

                        else if (Time == 3)
                        {

                            while(1)
                            {
                                Computer == Randam_Func_09(Call) ;
                                if(Computer%2 == 0) Computer++;
                                else if(Index_Data [Computer] != 0) Computer++;
                                else break;
                                Computer = Computer%10;
                            }
                        }

                        else if(Time == 4 && ( Index_Data [1] == 1 && Index_Data [9] == 1 && Index_Data [5] == 2 || Index_Data [3] == 1 && Index_Data [7] == 1 && Index_Data [5] == 2  ))
                        {
                            srand(time(NULL));
                            Computer   =  (1+rand()%4)*2;
                        }

                        else if(Time == 9)
                        {
                            for(i = 1; i <= 9; i++)
                            {
                                if(Index_Data [i] == 0) Computer = i;
                            }
                        }


                        else                /// uporer kono shorto-i na mille Randam number Call korbe
                        {
                            while(1)
                            {
                                Computer  =  Randam_Func_09(Call);
                                if(Index_Data[Computer] == 0 ) break;
                            }
                        }

                    }


                    Index_Data[Computer] = 2;  ///Input of Computer (computer er chal dewa)

                    new new TabM3 cout <<  "Computer Chose :\t" << Computer << endl << endl;   ///Output Computer choise

                    goto Print_Loop_ttt_vsc;     ///Print Update Result
                    Come_Back_2:                 ///Come Back after printing

                    if(Index_Data[1] == 2 && Index_Data[2] == 2 && Index_Data[3] == 2 || Index_Data[4] == 2 && Index_Data[5] == 2 && Index_Data[6] == 2 || Index_Data[7] == 2 && Index_Data[8] == 2 && Index_Data[9] == 2 || Index_Data[1] == 2 && Index_Data[4] == 2 && Index_Data[7] == 2 || Index_Data[2] == 2 && Index_Data[5] == 2 && Index_Data[8] == 2 || Index_Data[3] == 2 && Index_Data[6] == 2 && Index_Data[9] == 2 ||  Index_Data[3] == 2 && Index_Data[5] == 2 && Index_Data[7] == 2 || Index_Data[1] == 2 && Index_Data[5] == 2 && Index_Data[9] == 2 )
                    {
                        Win_Com++;
                        break;            ///Computer jitle-o game finished
                    }


                    if(Time == 9) break;  ///sob ghor puron hole-o game finished


            }

            new TabM2

            Sound
            if         (Win_I   >   0)        cout << "Congratulation! You are Winner.\n";
            else if    (Win_Com >   0)        cout << "\t Sorry! You are Loser.\n";
            else                              cout << "\t\tMatch Drawn\n";

            new new new getch();
            TabM2 cout << "\tTo Play Again Press-'1'; \n";
            TabM2 cout << "\tTo Goto  Menu Press-'0'; \n";
            string Again;
            cin >> Again;
            if(Again == "1") continue;       ///punoray game Menu hobe
            else break;                    ///program close hobe
        }
        break;


    case 2:     ///Tic Tac Toe (Man vs Man)

        /// Tic Tac Toe (Man vs Man) Game ti onekta Tic Tac Toe (Man vs Computer) er motoi
        /// Sudhu Parthokko holo Ekhane 2 jon Player khelbe (Computer khelbe na)

        while(1)
        {
            int  i,Player_1 = 0,Player_2 = 0,Time = 0,Win_1 = 0,Win_2 = 0;
            char Index_Data [10];
            char Index_Symbol [10];

            cout << "\t\t\t\t\t       TIC TAC TIC\n";
            cout << "\t\t\t\t\t       [Man vs Man]\n\n";

            TabM Str StrM new
            TabM Str cout << "1 2 3 ";  Str new
            TabM Str cout << "4 5 6 ";  Str new
            TabM Str cout << "7 8 9 ";  Str new
            TabM Str StrM new new

            ///ke age chalbe Player '1' na '2' naki Toss
            cout << "\t\t\tWho Play First?(Player-1 / Player-2)  {Press '1' or '2'} : ";

            char Who;
            cin >> Who;
            int who = Who-'0';

            if(who <= 0) goto Menu;
            if(who>2)
            {
                srand(time(NULL));
                if(rand() %2 == who %2 ) {new TabM3 cout << "Player-1 won the Toss\n" ; who = 1; }
                else                     {new TabM3 cout << "Player-2 won the Toss\n" ; who = 2; }
            }

            for(i = 0; i <= 9; i++)
            {
                Index_Data[i] = 0;
            }

            Print_Loop_ttt_vs_man:   ///Print_Loop

            Index_Data[Player_1] = 1;
            Index_Data[Player_2] = 2;

            for(i = 0; i <= 9; i++)
            {
                if(Index_Data[i] == 0) Index_Symbol[i] = ' ';
                if(Index_Data[i] == 1) Index_Symbol[i] = 'x';
                if(Index_Data[i] == 2) Index_Symbol[i] = 'o';

            }

            new
            Sound
            TabM Str StrM new
            TabM Str

            for(i = 1; i <= 9; i++)
            {
               cout << Index_Symbol[i] << " ";
               if(i%3 == 0) {Str new TabM Str }
            }

            StrM new new

            if(Time == 0 && who == 2) goto Player2;
            if(Time == 0) ;
            else if(Time%2 == 1 && who == 2 || Time%2 == 0 && who != 2) goto Back_2;
            else goto Back_1;

            while(1)
            {
                Player1:

                    Time++;

                    Recall_Player1:

                        cout << "Player-1 :   ";
                        cin >> Player_1;

                        if(Player_1>9 || Player_1<1 )
                        {
                            new cout << "Error Input\n\n";
                            goto Menu;
                        }

                        if(Index_Data[Player_1] != 0)
                        {
                            new cout << "Already Exist\n\n";
                            goto Recall_Player1;
                        }



                    Index_Data[Player_1] = 1;

                    goto Print_Loop_ttt_vs_man;

                    Back_1:

                        if(Index_Data[1] == 1 && Index_Data[2] == 1 && Index_Data[3] == 1 || Index_Data[4] == 1 && Index_Data[5] == 1 && Index_Data[6] == 1 || Index_Data[7] == 1 && Index_Data[8] == 1 && Index_Data[9] == 1 || Index_Data[1] == 1 && Index_Data[4] == 1 && Index_Data[7] == 1 || Index_Data[2] == 1 && Index_Data[5] == 1 && Index_Data[8] == 1 || Index_Data[3] == 1 && Index_Data[6] == 1 && Index_Data[9] == 1 ||  Index_Data[3] == 1 && Index_Data[5] == 1 && Index_Data[7] == 1 || Index_Data[1] == 1 && Index_Data[5] == 1 && Index_Data[9] == 1 )
                        {
                            Win_1++;
                            break;
                        }
                    if(Time == 9) break;

                Player2:
                    Time++;

                    Recall_Player2:///
                        cout << "Player-2 :   ";
                        cin >> Player_2;

                        if(Player_2>9 || Player_2<1 )
                        {
                            new cout << "Error Input\n\n";
                            goto Menu;
                        }

                        if(Index_Data[Player_2] != 0)
                        {
                                new cout << "Already Exist\n\n";
                                goto Recall_Player2;
                        }

                    Index_Data[Player_1] = 2;

                    goto Print_Loop_ttt_vs_man;

                    Back_2:

                    if(Index_Data[1] == 2 && Index_Data[2] == 2 && Index_Data[3] == 2 || Index_Data[4] == 2 && Index_Data[5] == 2 && Index_Data[6] == 2 || Index_Data[7] == 2 && Index_Data[8] == 2 && Index_Data[9] == 2 || Index_Data[1] == 2 && Index_Data[4] == 2 && Index_Data[7] == 2 || Index_Data[2] == 2 && Index_Data[5] == 2 && Index_Data[8] == 2 || Index_Data[3] == 2 && Index_Data[6] == 2 && Index_Data[9] == 2 ||  Index_Data[3] == 2 && Index_Data[5] == 2 && Index_Data[7] == 2 || Index_Data[1] == 2 && Index_Data[5] == 2 && Index_Data[9] == 2 )
                    {
                        Win_2++;
                        break;
                    }

                    if(Time == 9) break;


            }

            Sound
            new TabM2

            Sound
            if(Win_1>0)         cout << "Congratulation! Player-1 is Winner.\n";
            else if(Win_2>0)    cout << "Congratulation! Player-2 is Winner.\n";
            else                cout << "\t\tMatch Drawn\n";

            new new new getch();
                TabM2 cout << "\tTo Play Again Press-'1'\n";
                TabM2 cout << "\tTo Close Press-'Any Key'; \n";
                string Again;
                cin >> Again;
                if(Again == "1") continue;
                else goto Menu;
        }

        break;

    case 3:     ///SNAKE-CLASSIC

        while(1)
        {
            int Fruit,Score  =  0,temp,Finish = 0,Call,Change,i,x  =  0;
            int Snake_Head  =  46;         ///snake head initial possition
            int Snake_Body[110]  =  {0};   ///0,1-100,Primary body Size(5)+Extra some for avoid silly risk
            char Move;
            char PlayGround[111];        ///0,1-100,NULL+Primary body Size(5)+Extra some for avoid silly risk

            cout << "\t\t\t\t\t\tSNAKE GAME [Classic](10x10)\n\n";
            cout << "\t\t\t\t[Everytime You should press '1' to '9' for moving;  \n\t\t\t\t 8'(up) or '2'(Down) or '4'(Left) or '6'(Right) or\n\t\t\t\t\t  '1'/'3'/'7'/'9' (Cross moving)\n\t\t\t\t\t (According to Keyboard Numarical Keys) ]\n";
            cout << "\n\t\t\t\t [If Snake Bites it's Body, then The Game is Over.]";

            new new new;
            temp++;

            Fruit   =   Randam_Function_100(Call);

            ///First Initialization of Snake Body <--(below)
            Snake_Body[1]   =   Snake_Head-1;
            Snake_Body[2]   =   Snake_Head-2;
            Snake_Body[3]   =   Snake_Head-3;

            while(1)
            {
                cycle:                  ///jate fruit snake er body borabor na ase
                    Change++;
                    for(i  =  3+Score;  i>0;  i--)
                    {
                        if(Fruit == Snake_Body[i]) {x  =  -1;   break;  }
                    }
                    if((x == -1 || Fruit == Snake_Head) && Change  <=  100 ) ///Chnge variable ta newar karon holo jodi snake body r size full arear soman hoy orthat fruit dewar moto kono jayga na thake tahole snake body borabor kono ek jaygay fruit porbe , eta na use korle oi muhurte program continiously choltei thakto, susthu vabe game complete hoto na
                    {
                        x  =  0;
                        Fruit++;
                        Fruit  =  1+Fruit%100;   ///jate 100 overtek na kore
                        goto cycle;
                    }

                for(i  =  0;  i  <=  100;  i++)
                {
                    PlayGround [i]  =  ' ';
                }

                PlayGround [Fruit]  =  temp%2+42;  ///Fruit Symbol (*,+)
                PlayGround [Snake_Head]  =  2;     ///Snake Head Symbol (Ascii 2)

                for(i  =  Score+3;  i>0;  i--)
                {
                    PlayGround [Snake_Body[i]]   =   254;  ///Snake Body Symbol
                }
                PlayGround [Snake_Body[Score+3]]  =  4;  ///Snake Tail Symbol

                new;
                TabM;   Brdr;   BrdrM;   new;   ///Border
                TabM;   Brdr;

                for(i  =  1;  i  <=  100;  i++)
                {
                   cout << PlayGround [i] << " ";            /// show Update resulte of Game-PlayGround
                   if(i%10 == 0) {Brdr  new  TabM  Brdr}  ///proti 10 ghor por por new line asbe (jehutu Column 10 ta)
                }

                BrdrM new new

                TabM show       ///Show Score

                if(Finish == -1) break;  ///snake nijeke bite korle game over

        ///        cout << "Press '8'(Up) or '2'(Down) or '4'(Left) or '6'(Right) or '1/3/7/9' (Cross moving) :\t";
                cin >> Move;
                temp++;  Change  =  0;

                if(Move == '5' || Move == '0') continue;  ///no change

                for(i  =  3+Score;  i>0;  i--)
                {
                    Snake_Body[i]  =   Snake_Body[i-1];   ///Snake er body possition update
                }
                Snake_Body[1]  =   Snake_Head;

                ///to move to up / down / left / right / cross (below) - (According to Key-board Numarical Pads)
                if(Move == '6') {Snake_Head++;      /** to move Right */  if(Snake_Head%10 == 1) Snake_Head  -=  10;  /**Dan dike ber hoye gele oi borabor Bam dik diye asbe */ }
                if(Move == '4') {Snake_Head--;      /** to move Down  */  if(Snake_Head%10 == 0) Snake_Head  +=  10;  /**Bam dike ber hoye gele oi borabor Dan dik diye asbe */}
                if(Move == '2') {Snake_Head  +=  10;  /** to move Down  */   }
                if(Move == '8') {Snake_Head  -=  10;  /** to move Up    */   }

                ///optional(cross moving)
                if(Move == '3') {Snake_Head  +=  11;  /**Right-Down*/   if(Snake_Head%10 == 1) Snake_Head  -=  10;  } ///box er ekdik diye snake ber hoye gele, oi borabor biporit dik theke snake fire asbe.
                if(Move == '7') {Snake_Head  -=  11;  /**Left-Up   */  if(Snake_Head%10 == 0)  Snake_Head  +=  10;  } /// " "
                if(Move == '9') {Snake_Head  -=   9;  /**Right-Up  */  if(Snake_Head%10 == 1)  Snake_Head  -=  10;  } /// " "
                if(Move == '1') {Snake_Head  +=   9;  /**Left-Down */  if(Snake_Head%10 == 0)  Snake_Head  +=  10;  } /// " "

                if(Snake_Head > 100) Snake_Head  -=  100;  ///box er ekdik diye snake ber hoye gele, oi borabor biporit dik theke snake fire asbe.
                if(Snake_Head  <=   0) Snake_Head  +=  100;  /// " " "

                for(i  =  3+Score;  i>0;  i--)
                {
                    if(Snake_Head == Snake_Body[i]) { Finish  =  -1;  continue;  } ///jodi Snake nijeke Bite kore, then game over
                }

                if(Snake_Head == Fruit)         ///Snake Fruit eat korar sathe sathe -
                {
                    Score++;                     ///-Score barbe
                    if(Score == 97) Score  +=  3;  ///Highest point 100 korar jonno;    ///ekhane 4 holo snake er initial body size (not so necessary)
                    Sound                       ///-Sound hobe
                    Fruit  =   Randam_Function_100(Call);      /// -fruit er possition change hobe

                }

            }


            Move  =  1;  ///Smile Sign

            Sound;
            cout << "\n\t\t\t\t\t\t\tGame Over!" << Move << "\n\t\t\t\t\t\t\tScore : " << Score << endl;   new

            if(Score  >=  100)         ///if snake size is equal to playground size
            {
                Move  =  2;                            ///Smile Sign
                TabM cout <<  "\tCongratulation!\n";
                TabM cout << "\tHighest Score!" << Move;
                new new
            }

            new new new
            getch();

            string Again;
            TabM cout << "To Play Again, Press- '1' \n";
            TabM cout << "To Go To  Menu, Press- '0' \n";
            TabM cin >> Again;
            new new new
            if(Again == "1") continue;  ///to play Again this game
            else break;               ///go to  Menu
        }
        break;

    case 4:     ///SNAKE-BOX

        ///Ei Game ti-r orthat Snake (Box)-er sathe purboborti Snake (Classic) er Besh mill royeche.
        ///Sudhu Parthokko ei jaygay je Snake er Body er pashapashi Border e touch lagleo Game over hobr.
        ///Tai Comment khub ekta beshi add korsi na, karon beshir vag comment-e purboborti Snake Classic a add kora hoyeche

        while(1)
        {
            int Fruit,Score  =  0,temp = 0,Finish = 0,Call,Change = 0,i,x  =  0;
            int Snake_Head  =  46;
            int Snake_Body[110]  =  {0};
            char Move;
            char Area[111];

            cout << "\t\t\t\t\t\tSNAKE GAME [Box](10x10)\n\n";
            ///cout << "\t\t\t\t\t [Here You can move only '1' to '100']\n";
            cout << "\t\t\t\t[Everytime You should press '1' to '9' for moving;  \n\t\t\t\t 8'(up) or '2'(Down) or '4'(Left) or '6'(Right) or\n\t\t\t\t\t  '1'/'3'/'7'/'9' (Cross moving)\n\t\t\t\t\t (According to Keyboard Numarical Keys) ]\n";
            cout << "\n\t\t\t\t [If Snake Bites it's Body or Border, then The Game is Over.]";

            new new new;
            temp++;

            Fruit   =   Randam_Function_100(Call);

            ///Primary Declaration of Snake Body
            Snake_Body[1]   =   Snake_Head-1;
            Snake_Body[2]   =   Snake_Head-2;
            Snake_Body[3]   =   Snake_Head-3;

            while(1)
            {

                cyclebox:///jate fruit snake er body borabor na ase
                    Change++;
                    for(i  =  3+Score;  i>0;  i--)
                    {
                        if(Fruit == Snake_Body[i]) {x  =  -1;   break;  }
                    }
                    if((x == -1 || Fruit == Snake_Head) && Change  <=  100 )
                    {
                        x  =  0;
                        Fruit++;
                        Fruit  =  1+Fruit%100;
                        goto cyclebox;
                    }

                for(i  =  0;  i  <=  100;  i++)
                {
                    Area[i]  =  ' ';
                }

                Area[Fruit]  =  temp%2+42;  ///Fruit Symbol(*,+)
                Area[Snake_Head]  =  2;     ///Snake Head Symbol

                for(i  =  Score+3;  i>0;  i--)
                {
                    Area[Snake_Body[i]]   =   254;   ///Snake Body Symbol
                }
                Area[Snake_Body[Score+3]]   =   4;   ///Snake Tail Symbol

                new;
                TabM;   Brdr;   BrdrM;   new;
                TabM;   Brdr;

                for(i  =  1;  i  <=  100;  i++)
                {
                   cout << Area[i] << " ";
                   if(i%10  ==  0) {Brdr;   new;   TabM;   Brdr;   }
                }

                BrdrM new new

                TabM show

                if(Snake_Head > 100 || Snake_Head  <=  0) break;

                cin >> Move;
                temp++;  Change  =  0;

                if(Move == '5' || Move == '0') continue;  ///No change

                for(i  =  3+Score;  i>0;  i--)
                {
                    Snake_Body[i]  =   Snake_Body[i-1];   ///Snake Body Possition Update
                }
                Snake_Body[1]  =   Snake_Head;

                ///Move to up/down/left/right/cross Moving (below)
                if(Move == '6') {Snake_Head++;       if(Snake_Head%10 == 1)  { Snake_Head  =  0;  continue;  }}      ///Box e touch lagle Game over
                if(Move == '4') {Snake_Head--;       if(Snake_Head%10 == 0)  { Snake_Head  =  0;  continue;  }}      /// " " "
                if(Move == '8') {Snake_Head  -=  10;     }
                if(Move == '2') {Snake_Head  +=  10;     }
                ///otional
                if(Move == '3') {Snake_Head  +=  11;       if(Snake_Head%10 == 1)  { Snake_Head  =  0;  continue;  }}  /// " " "
                if(Move == '7') {Snake_Head  -=  11;       if(Snake_Head%10 == 0)  { Snake_Head  =  0;  continue;  }}  /// " " "
                if(Move == '9') {Snake_Head  -=   9;       if(Snake_Head%10 == 1)  { Snake_Head  =  0;  continue;  }}  /// " " "
                if(Move == '1') {Snake_Head  +=   9;       if(Snake_Head%10 == 0)  { Snake_Head  =  0;  continue;  }}  /// " " "

                if(Snake_Head > 100) continue;   ///Box e touch lagle Game over
                if(Snake_Head  <=   0) continue;   /// " " "

                for(i  =  3 + Score;  i > 0;  i--)
                {
                    if(Snake_Head == Snake_Body[i]) { Snake_Head  =  -100;   continue;  }
                }

                if(Snake_Head == Fruit)     ///Fruit Eat korle
                {
                    Score++;                 ///Score Barbe
                    if(Score == 97) Score  +=  3;  ///Highest point 100 korar jonno just;  not so necessary
                    Sound
                    Fruit  =   Randam_Function_100(Call);  /// Fruit possition change

                }

            }


            Move  =  1;  ///Smile Sign

            Sound
            if(Snake_Head == -100) cout << "\n\n\t\t\t\t\t\t       TOUCH BODY!";
            else                   cout << "\n\n\t\t\t\t\t\t       TOUCH BORDER!";
            cout << "\n\t\t\t\t\t\t\tGAME OVER!" << Move << "\n\t\t\t\t\t\t\tSCORE : " << Score << endl;

            if(Score == 100)
            {
                Move  =  2;  ///Smile Sign
                TabM cout <<  "\tCongratulation!\n";
                TabM cout << "\tHighest Score!" << Move;
                new new
            }
            new new new getch();
            TabM cout << "To Play Again Press-'1'\n";
            TabM cout << "To goto Menu  Press-'0'\n";
            string Again;
            cin >> Again;
            if(Again == "1") continue;
            else goto Menu;
        }
        break;

    case 5: ///PacMan Lite (Normal mode)

            while(1)
            {
                int Score  =  0,Temp = 0,i,j,x  =  0,Number_of_Enemy, Life = 3,Level;
                int PacMan;
                char Move;
                char PlayGround[201],Fruit[201];                     /// Playground Size 10*10 = 100 (0-99) + ghost gulor dhakka khawar por randm possition ja (100 - 199) er moddhe thakbe

                cout << "\t\t\t\t\t\tPACMAN GAME (10x10) - Easy Mode\n\n";
                cout << "\t\t\t\t\tEverytime You should press '1' to '9' for moving;  \n\t\t\t\t 8'(up) or '2'(Down) or '4'(Left) or '6'(Right) or '5'(No Change) \n\t\t\t\t\t or '1'/'3'/'7'/'9' (Cross moving)\n\t\t\t\t\t(According to Keyboard Numarical Keys)\n";
                cout << "\n\t\t\t\t If The Enemy Touch You, then You will Lost Your Life.\n";
                cout << "\t\t\t\tIf The Enemy Touch Each Other, then They go away far from you\n";
                cout << "\n\t\t\t\t     Your Target is to Eat all the Fruits on the Ground\n";


                new new new;

                new TabM cout << "Choise Level";                       ///choise Level according to Number of ghost
                new TabM3 cout << "Easy / Medium / Hard";
                new TabM2 cout << "   Press - '1' / '2' / '3' : ";
                cin >> Level;
                new new

                if      (Level <= 0) break;                            ///If You want to close the Program
                else if (Level == 1) {TabM cout << "EASY LEVEL\n"; }
                else if (Level == 2) {TabM cout << "MEDIUM LEVEL\n"; }
                else               {TabM cout << "HARD LEVEL\n"; }
                new

                for(i  =  0;  i < 100;  i++)                            ///Initially sob gulo ghorei dot dekhabe
                {
                    Fruit[i] = 1;                                      ///'1' indicate korse oi possition a fruit ache
                }

                Pac_Reform:                                          ///if Pacman Lost his a Life then Program Menu from here

                if(Level == 1)
                {
                    Number_of_Enemy = 2;                           ///Easy Level a 2 ti ghost thakbe
                    int Enemy[Number_of_Enemy];
                    Enemy[0]  =  0;
                    Enemy[1]  =  99;                               ///Ghost gulor initial possiton
                }

                else if(Level == 2)
                {
                    Number_of_Enemy = 4;                           ///Medium Level a 4 ti ghost thakbe
                    int Enemy[Number_of_Enemy];
                    Enemy[0]  =  0;
                    Enemy[1]  =  99;
                    Enemy[2]  =  9;
                    Enemy[3]  =  90;                               ///Ghost gulor initial possiton
                }

                else
                {
                    Number_of_Enemy = 8;                           ///Hard Level a 8 ti ghost thakbe
                    int Enemy[Number_of_Enemy];
                    Enemy[0]  =  0;
                    Enemy[1]  =  99;
                    Enemy[2]  =  9;
                    Enemy[3]  =  90;
                    Enemy[4]  =  5;
                    Enemy[5]  =  95;
                    Enemy[6]  =  40;
                    Enemy[7]  =  49;                               ///Ghost gulor initial possiton
                }

                int Enemy[Number_of_Enemy];
                PacMan  =  45;                                     ///Pacman er initial possition
                Temp = 0;


                while(1)                                        ///Protibar Move korar por Program ekhane chole asbe
                {

                    for(i  =  0;  i < 100;  i++)
                    {
                        PlayGround[i]  =  ' ';
                    }

                    for(i  =  0;  i < 100;  i++)
                    {
                        if(Fruit[i] == 1) PlayGround[i]  =  '.';           ///jodi Fruit thake tobe Dot Sign dekhabe
                    }

                    PlayGround[PacMan]  =  1;                          ///PacMan Symbol (Smile face Black)

                    for(i = 0; i<Number_of_Enemy; i++)
                    {
                        PlayGround[Enemy[i]]  =  2;                    ///Enemy Symbol (Smile face White)
                    }

                    new;
                    TabM;   Brdr;   BrdrM;   new;                       ///Border
                    TabM;   Brdr;

                    for(i  =  0;  i < 100;  i++)
                    {
                       cout << PlayGround[i] << " ";                     ///Print PlayGround
                       if(i%10 == 9) {Brdr;   new;   TabM;   Brdr;   }  ///proti 10 ghor por por new line asbe (jehutu Column 10 ta)
                    }

                    BrdrM new new

                        for(i = 0; i<Number_of_Enemy; i++)
                        {
                            if(Enemy[i] >= 100 && Enemy[i] <= 109)
                            {
                                TabM cout << "\tWarning\n\n";      ///jodi kono ghost box er kachakachi chole ase tokhon warning dibe
                            }
                        }

                    TabM showScore                  ///Show Current Score
                    TabM showLife                   ///Show Pacman remaining Life


                    if(Life == 0)       break;               ///Remaining Life '0' hole Game Over
                    if(Score == 100)    break;               ///Sob fruit gulo khele Game Over & Highest Score hobe
                    if(Temp == -1)      goto Pac_Reform;      ///jodi pacman er life kome jay, tobe sobar possition reform hobe


                    for(i = 0; i<Number_of_Enemy; i++)
                    {
                        if      (Enemy[i] /10 - PacMan/10 > 0) Enemy[i]  -= 10;  ///Jodi Ghost er RowNumber Amar RowNumber theke BESHI hoy, tobe tar RowNumber Kombe & Amar Nikote asbe
                        else if (Enemy[i] /10 - PacMan/10 < 0) Enemy[i]  += 10;  ///Jodi Ghost er RowNumber Amar RowNumber theke KOM   hoy, tobe tar RowNumber Barbe & Amar Nikote asbe
                                                                              ///R Same RowNumber hole No Change

                        if      (Enemy[i] %10 - PacMan%10 > 0) Enemy[i] --;    ///Jodi Ghost er Column Number Amar Column Number theke BESHI hoy,tobe tar Column Number Kombe & Amar Nikote asbe
                        else if (Enemy[i] %10 - PacMan%10 < 0) Enemy[i] ++;    ///Jodi Ghost er Column Number Amar Column Number theke  KOM  hoy,tobe tar Column Number Barbe & Amar Nikote asbe
                                                                              ///R Same Column Number hole No Change
                    }

                    cin >> Move;

                    if(Move == 'x' || Move == 'X') {Life = 0;  break; } ///if You want to Close the Game press 'x'/'X';

                    if(Move == '6') {PacMan++;         /** to move Right*/     if(PacMan%10 == 0)      PacMan --;  /** Dont cross right border Right*/  }
                    if(Move == '4') {PacMan--;         /** to move Left */     if((PacMan+20)%10 == 9) PacMan ++;  /** Dont cross right border Right*/  } ///'-' Value Avoiding er jonno +20 dichi
                    if(Move == '2') {PacMan  +=  10;  }  /**to move Down  */
                    if(Move == '8') {PacMan  -=  10;  }  /**to move Up    */

                    if(Move == '3') {PacMan  +=  11;  /** to move Right-Down*/     if(PacMan%10      == 0)    PacMan --;  }
                    if(Move == '7') {PacMan  -=  11;  /** to move Left-Up   */     if((PacMan+20)%10 == 9)    PacMan ++;  }
                    if(Move == '9') {PacMan  -=  9;   /** to move Right-Up  */     if((PacMan+20)%10 == 0)    PacMan --;  }
                    if(Move == '1') {PacMan  +=  9;   /** to move Left-Down */     if(PacMan%10      == 9)    PacMan ++;  }

                    if(PacMan  >=  100) PacMan  -=  10;  ///Don't cross Down-Border
                    if(PacMan <  0) PacMan  +=  10;    ///Don't cross Upper-Border

                    for(i = 0;  i<100;  i++)
                    {
                        if(PacMan == i && Fruit[i] == 1)/// jodi Pacman er position-a fruit thake -
                        {
                            Score++;                     /// - tobe Score 1 barbe
                            Fruit[i] = 0;                  /// & Fruit ta delete hoye jabe
                        }
                    }

                    for(i = 0; i<Number_of_Enemy; i++)
                    {
                        if(PacMan == Enemy[i] )     /// jodi Ghost Pacman er body touch kore-
                        {
                            Temp  =  -1;
                            Life --;                 /// -tobe Life kome jabe
                            Sound
                            break;
                        }
                    }


                    for(i = 0; i<Number_of_Enemy; i++)
                    {
                        for(j = i+1; j<Number_of_Enemy; j++)
                        {

                            if(Enemy[i] == Enemy[j] && Temp  !=  -1  )  ///Jodi Ghost gulor moddhe dhakka lage
                            {
                                Enemy[i]  =  109 + 10*Number_of_Enemy-i;    ///tobe tara dure chole jabe & punaray nich theke ground a chole asar chestha korbe
                                Enemy[j]  =  110 + 10*Number_of_Enemy+j;    /// "  "

                                Sound
                            }
                        }
                    }

                }

                if(Life == 0)
                {
                    Move  =  2;  ///Ghost Sign (white-Smile)
                    Sound;
                    cout << "\n\t\t\t\t\t\t\tGame Over!" << Move << "\n\t\t\t\t\t\t\tScore : " << Score << endl;   new
                }

                if(Score == 100)
                {
                    Sound
                    Move  =  1;        /// Pacman sign (black-Smile)
                    TabM cout <<  "\tCongratulation!\n";
                    TabM cout << "\tHighest Score!" << Move;  ///100 is highest score , because there are 100 fruit in the ground
                    new new
                }

                string Again;
                new new new getch();
                TabM    cout << "To Play Again Press-'1'\n";
                TabM    cout << "To Goto  Menu Press-'0'\n";
                TabM;     cin >> Again;
                new new new
                if(Again == "1") continue;
                else break;
            }

        break;


    case 6:  ///PacMan Lite (Expert mode)

        ///PacMan Lite (Expert mode) tir sathe purboborti PacMan Lite (Normal mode)-er Besh mill royeche.
        ///Sudhu Parthokko ei jaygay je,ekhane ghost gulo amar pore move korbe (jar fole amar next move onujayi ora podokkhep nibe)
        ///jar fole game ti besh jotil hoye giyeche , ei jotilota dur korar jonno PacMan er border ved korar onumoti diyechi & Gost er songkha 2 er moddhei simaboddho rekhechi.
        ///Tai Comment khub ekta beshi add korsi na, karon beshir vag comment-e purboborti Snake Classic a add kora hoyeche



        while(1)
        {
            int Score  =  0,Temp,i,j,x  =  0,Number_of_Enemy = 2,Life = 3;
            int PacMan;
            char Move;
            char PlayGround[201],Fruit[201];
            int Enemy[Number_of_Enemy];

            cout << "\t\t\t\t\tPacMan GAME (10x10) - Expert Mode\n\n";
            cout << "\t\t\t\t\t Ghosts are understoood about your Next Move\n";
            cout << "\t\t\t\t\tEverytime You should press '1' to '9' for moving;  \n\t\t\t\t 8'(up) or '2'(Down) or '4'(Left) or '6'(Right) or '5'(No Change) \n\t\t\t\t\t or '1'/'3'/'7'/'9' (Cross moving)\n\t\t\t\t\t(According to Keyboard Numarical Keys)\n";
            cout << "\n\t\t\t\t If Any of two ghost Touch You, then You will Lost Your Life.\n";
            cout << "\t\t\t\tIf The Enemy Touch Each Other, then They go away far from you\n";
            cout << "\n\t\t\t\tYour Target is to Eat all the Fruits on the Ground & You have 3 Life\n";


            new new new;

            for(i  =  0;  i < 100;  i++)
            {
                Fruit[i] = 1;
            }

            Pac_Reform_2:

            Enemy[0]  =  0;
            Enemy[1]  =  99;
            PacMan    =  45;
            Temp      =   0;


            while(1)
            {

                for(i  =  0;  i < 100;  i++)
                {
                    PlayGround[i]  =  ' ';
                }

                for(i  =  0;  i < 100;  i++)
                {
                    if(Fruit[i] == 1) PlayGround[i]  =  '.';
                }

                PlayGround[PacMan]  =  1;  ///PacMan Symbol

                for(i = 0; i<Number_of_Enemy; i++)
                {
                    PlayGround[Enemy[i]]  =  2; ///Enemy Symbol
                }

                new;
                TabM;   Brdr;   BrdrM;   new; ///Border
                TabM;   Brdr;

                for(i  =  0;  i < 100;  i++)
                {
                   cout << PlayGround[i] << " ";  ///Print PlayGround
                   if(i%10 == 9) {Brdr;   new;   TabM;   Brdr;   }
                }

                BrdrM new new

                for(i = 0; i<Number_of_Enemy; i++)
                {
                    if(Enemy[i] >= 100 && Enemy[i] <= 109)
                    {
                        TabM cout << "\tWarning\n\n";      ///jodi kono ghost box er kachakachi chole ase tokhon warning dibe
                    }
                }

                TabM showScore///Show Score
                TabM showLife


                if(Life == 0) break;
                if(Score == 100) break;
                if(Temp == -1) goto Pac_Reform_2;

                cin >> Move;

                if(Move == 'x' || Move == 'X') {Life = 0;  break; } ///if You want to Close the Game press 'x'/'X';

                ///Pacman Moving(below)
                if(Move == '6') {PacMan++;       if(PacMan%10 == 0)PacMan  -= 10;  }
                if(Move == '4') {PacMan--;       if((PacMan+20)%10 == 9) PacMan  += 10;  }
                if(Move == '2') {PacMan  +=  10;     }
                if(Move == '8') {PacMan  -=  10;     }

                if(Move == '3') {PacMan  +=  11;    if(PacMan%10 == 0)PacMan  -= 10;  }
                if(Move == '7') {PacMan  -=  11;    if((PacMan+20)%10 == 9) PacMan  += 10;  }
                if(Move == '9') {PacMan  -=  9;     if((PacMan+20)%10 == 0)PacMan  -= 10;  }
                if(Move == '1') {PacMan  +=  9;     if(PacMan%10 == 9) PacMan  += 10;  }

                if(PacMan  >=  100) PacMan  -=  100 ;
                if(PacMan <  0) PacMan  +=  100;

                ///Enemy(Ghost) Moving according to my possition (below) - Ghostgulo sobsomoy amar kache chole asar chestha korbe
                for(i = 0; i<Number_of_Enemy; i++)
                {
                    if(Enemy[i] /10-PacMan/10 > 0) Enemy[i]  -= 10;
                    else if (Enemy[i] /10 -PacMan/10 < 0) Enemy[i]  += 10;

                    if(Enemy[i] %10-PacMan%10 > 0) Enemy[i] --;
                    else if (Enemy[i] %10-PacMan%10 < 0) Enemy[i] ++;
                }

                for(i = 0;  i<100;  i++)
                {
                    if(PacMan == i && Fruit[i] == 1)
                    {
                        Score++;
                        Fruit[i] = 0;
                    }
                }

                for(i = 0; i<Number_of_Enemy; i++)
                {
                    if(PacMan == Enemy[i] )
                    {
                        Temp  =  -1;
                        Life --;
                        Sound
                        break;
                    }
                }

                for(i = 0; i<Number_of_Enemy; i++)
                {
                    for(j = i+1; j<Number_of_Enemy; j++)
                    {
                        if(Enemy[i] == Enemy[j] && Temp  !=  -1  )
                        {
                            Enemy[i]  =  189;
                            Enemy[j]  =  190;
                            Sound
                        }
                    }
                }

            }

            if(Life == 0)
            {
                Move  =  2;  ///Smile Sign
                Sound;
                cout << "\n\t\t\t\t\t\t\tGame Over!" << Move << "\n\t\t\t\t\t\t\tScore : " << Score << endl;   new
            }

            if(Score == 100)
            {
                Sound
                Move  =  1;  ///Smile Sign
                TabM cout <<  "\tCongratulation!\n";
                TabM cout << "\tHighest Score!" << Move;
                new new
            }

            string Again;
            new new new getch();
            TabM cout << "To Play Again Press-'1'\n";
            TabM cout << "To Close Press-'Any Key'\n";
            TabM;
            cin >> Again;
            new new new
            if(Again == "1") continue;
            else goto Menu;
        }
        break;


    case 7: ///Ludo Snake-Ladder (vs Computer)

    new TabM cout << " LUDO SNAKE-LADDER GAME";  new new
        while(1)
        {
            int You = 0,Com = 0;
            int Dice,i,x = 0,temp = 0;
            new TabM cout << "Press Any Key on Everytime \n\n";
            Sound

            while(1)
            {
                getch();
                Sound

                for(i = 1; i <= 2; i++)
                {
                    ///getch();
                    temp += 67;
                    temp = temp%100;
                    srand(time(NULL));

                    if(i == 1)
                    {
                        Dice = (rand()/2/temp)%6;          ///jodi randam number 2 khetrei same ache tai vinno songkha dara vag dichi
                        Dice = rand()%6;
                        Dice += 1;
                        if(You == 0 && Dice != 1) You -= Dice;     ///'1' sara guti ber hobe na
                        You += Dice;

                        ///snakes
                        if(You == 97)You = 12;
                        if(You == 63)You =  3;
                        if(You == 70)You = 25;
                        if(You == 32)You = 13;
                        if(You == 60)You = 38;
                        if(You == 89)You = 53;
                        if(You == 73)You = 47;
                        if(You == 82)You = 43;


                        ///ladders
                        if(You == 8)  You = 41;
                        if(You == 50) You = 93;
                        if(You == 6)  You = 16;
                        if(You == 55) You = 80;
                        if(You == 59) You = 84;
                        if(You == 26) You = 29;


                       if(You>100) You -= Dice;
                       TabM2 cout << "Your Possition  =  " << You << "(+" << Dice << ")" << "\t";
                       if(You == 100)
                            {
                                Sound
                                new new new TabM cout << "\tCongratulation!";
                                new TabM cout << "\tYou are Winner.\n";
                                x = 1;
                                break;
                            }
                    }

                    if(i == 2)
                    {
                        Dice = (rand()/3/temp)%6; ///jodi randam number 2 khetrei same ache tai vinno songkha dara vag dichi
                        Dice = rand()%6;
                        Dice += 1;
                        if(Com == 0 && Dice != 1) Com -= Dice; ///'1' sara guti ber hobe na
                        Com += Dice;

                        ///snakes
                        if(Com == 97)Com = 12;
                        if(Com == 63)Com = 3;
                        if(Com == 70)Com = 25;
                        if(Com == 32)Com = 13;
                        if(Com == 60)Com = 38;
                        if(Com == 89)Com = 53;
                        if(Com == 73)Com = 47;
                        if(Com == 82)Com = 43;


                        ///laders
                        if(Com ==  8)  Com = 41;
                        if(Com == 50) Com = 93;
                        if(Com ==  6)  Com = 16;
                        if(Com == 55) Com = 80;
                        if(Com == 59) Com = 84;
                        if(Com == 26) Com = 29;

                       if(Com>100) Com -= Dice;
                       cout << "\tComputer Possition  =  " << Com << "(+" << Dice << ")" << "\t";
                       if(Com == 100)
                        {
                            Sound
                            new new new TabM cout << "\t\tSorry";
                            new TabM cout << "\t  You are Loser\n";
                            x = 1;
                            break;
                        }
                    }

                }
                if(x == 1) break;
                new

            }
            x = 0;
            new new new getch();
            TabM cout << "To Play Again Press-'1'\n";
            TabM cout << "To goto Menu  Press-'0'\n";
            string Again;
            cin >> Again;
            if(Again == "1") continue;
            else goto Menu;

        }
        break;

    case 8: ///Ludo Snake-Ladder (Multiplayer)

        while(1)
        {
            Sound
            new TabM
            cout << "LUDU SNAKE-LADDER GAME\n\n";
            ///cout << "#Disclaimer: \t\tLudo is Haram Game for Muslim. So you should avoid to play this.\n\n";

                int Number_of_Player;
                TabM cout << "Number of Player :\t";
                cin >> Number_of_Player;
                if(Number_of_Player <= 0) goto Menu;

                new TabM3 cout << "Press Any Key on Everytime \n\n";
                Sound

                int Board[Number_of_Player+1] = {0},Temp = 0,x = 0;
                int Dice,i;

                while(1)
                {
                    ///getch();
                    Temp += Number_of_Player*(Temp+1)+1; ///not so necessary, you can also change 'c' differently
                    Temp = Temp%99; ///Minimized size, not so necessary, you can also change 'c' differently

                    for(i = 1; i <= Number_of_Player; i++)
                    {
                        Temp += 5; ///not so necessary, you can also change 'c' differently
                        getch();
                        srand(time(NULL));

                            Dice = (rand()/(i+1)*i+rand()+Temp*Temp/i)%6; ///just for different value of d in same time also,you can also change it differently but '%6' is must nedded
                            Dice += 1; ///(0-5)-->(1-6)
                            if(Board[i] == 0 && Dice != 1) Board[i] -= Dice; ///'1' chara guti ber hobe na
                            Board[i] += Dice; ///position update

                            ///snakes
                            if(Board[i] == 97)Board[i] = 12;
                            if(Board[i] == 63)Board[i] = 3;
                            if(Board[i] == 70)Board[i] = 25;
                            if(Board[i] == 32)Board[i] = 13;
                            if(Board[i] == 60)Board[i] = 38;
                            if(Board[i] == 89)Board[i] = 53;
                            if(Board[i] == 73)Board[i] = 47;
                            if(Board[i] == 82)Board[i] = 43;


                            ///ladders
                            if(Board[i] == 8)Board[i] = 41;
                            if(Board[i] == 50)Board[i] = 93;
                            if(Board[i] == 6)Board[i] = 16;
                            if(Board[i] == 55)Board[i] = 80;
                            if(Board[i] == 59)Board[i] = 84;
                            if(Board[i] == 26)Board[i] = 29;


                           if(Board[i]>100) Board[i] -= Dice; ///Don't cross 100
                           cout << "Player-" << i << " : " << Board[i] << "(+" << Dice << ")" << "\t"; ///Print
                           if(Board[i] == 100)///Winner
                                {
                                    cout << "\a\n\n\n\t\t\t\t\t Congratulation!\n\t\t\t\t\tPlayer " << i << " is Winner\n\n\n";
                                    x = 1;
                                    break;
                                }


                    }
                    cout << endl;
                    if(x == 1) break;

                }

            x = 0;
            new new new getch();
            TabM cout << "To Play Again Press-'1'\n";
            TabM cout << "To goto Menu  Press-'0'\n";
            string Again;
            cin >> Again;
            if(Again == "1") continue;
            else goto Menu;
        }
        break;



    case 9: ///Sudoku (Fixed)
        while(1)
        {
            TabM cout << "\tSUDOKU GAME\n\n\n";
            int Sudoku[101] = {0},cnt,row,col,Index,Value,i,j,k;   ///Sudoku holo Main Array jeti sokol index Value contain korbe, etake 2D array hisebeo newa jaito but ami neini
            char Temp[101];    /// ei string-tar kaj holo, jate given index gulor value ami poriborton korte na pari.


            ///Given Index Value (below) <-- Eigulo ami amar iccha onujayi sohoj vabe diyechi, onno jekono proper value input dewa jabe
            Sudoku[21] = 1;
            Sudoku[22] = 2;
            Sudoku[23] = 3;
            Sudoku[24] = 4;
            Sudoku[26] = 6;
            Sudoku[27] = 7;
            Sudoku[28] = 8;
            Sudoku[29] = 9;

            Sudoku[31] = 4;
            Sudoku[32] = 5;
            Sudoku[33] = 6;
            Sudoku[34] = 7;
            Sudoku[36] = 9;
            Sudoku[37] = 1;
            Sudoku[38] = 2;
            Sudoku[39] = 3;

            Sudoku[41] = 2;
            Sudoku[42] = 3;
            Sudoku[43] = 1;
            Sudoku[44] = 5;
            Sudoku[46] = 4;
            Sudoku[47] = 8;
            Sudoku[48] = 9;
            Sudoku[49] = 7;

            Sudoku[61] = 8;
            Sudoku[62] = 9;
            Sudoku[63] = 7;
            Sudoku[64] = 2;
            Sudoku[66] = 1;
            Sudoku[67] = 5;
            Sudoku[68] = 6;
            Sudoku[69] = 4;

            Sudoku[71] = 6;
            Sudoku[72] = 4;
            Sudoku[73] = 5;
            Sudoku[74] = 9;
            Sudoku[76] = 8;
            Sudoku[77] = 3;
            Sudoku[78] = 1;
            Sudoku[79] = 2;

            Sudoku[81] = 9;
            Sudoku[82] = 7;
            Sudoku[83] = 8;
            Sudoku[84] = 3;
            Sudoku[86] = 2;
            Sudoku[87] = 6;
            Sudoku[88] = 4;
            Sudoku[89] = 5;


            TabM  ///Likha gulo jate majhe dekha jay

            ///Initial print(below Loop)
            for(i = 11; i<100; i++)
            {
                if(Sudoku[i] == 0) printf("%c  ",Sudoku[i]+'.');
                else printf("%c  ",Sudoku[i]+'0');
                if((i%10)% 3 == 0) cout << " ";
                if((i/10)% 3 == 0 && i%10 == 9) {cout << endl;  TabM}
                if(i%10 == 9) {i++;  cout << endl;  TabM}

            }
            Sound

            ///(below-Loop)--> kongulo index initially faka chilo r kongulo faka chilo na seta jachai
            for(i = 0; i <= 100; i++)
            {
                if(Sudoku[i] == 0 ) Temp[i] = 0 ;
                else              Temp[i] = 1 ;
            }

            cout << "\n\n\n";
            TabM2 cout << "You should Fill Up All The Empty Index by Inserting Proper Value\n\n";


            while(1)
            {
                char flag = 1;      ///Shorto Puron Korte perechi kina seta jachai

                cout << "Enter Row & Column Number  : ";
                cin >> row >> col;

                if(row <0 || col<0) {cout << "Error Index\n\n";  goto Menu; } ///if I want to close the program
                if(col >9) col = 0;
                if(row >9) row = 0;  ///ei 2 line dewa khub important chilo na, tao diyechi ejonno je jate Wrong Value dileo Program thik moro Run hoy
                Index = 10*row+col;

//////                cout << "Enter Index Number \t: ";  ///jodi row , col er bodole direct Index number Scan kortam, But seta bujte hoytooneker osubidha hoto, tai Comment kore rekhechi
//////                cin >> Index;
//////                row = Index/10;  col = Index%10;
//////                if(Index<0 || Index >99) Index = 0;


                if(Temp[Index] != 0) {cout << "Not Changeable\n\n";  continue; }  ///Given Value gulo Change kora jabe na

                cout << "Index[" << row << "][" << col << "]\t\t    =  ";
                cin >> Value;   ///Index Value Input

                cout << endl;

                if(Value<0) Value = -Value;
                if(Value>9) Value = Value%10;  ///ei 2 line dewa khub important chilo na, tao diyechi ejonno je jate jekono value dile thikmoto Input hoy

                Sudoku[Index] = Value;  ///Initilized

                ///Row-Wise Shorto puron hoyeche kina seta jachai(below-Loop)
                for(k = 1; k <= 9; k++)
                {
                    for(j = 11; j <= 91; j += 10)
                    {
                        cnt = 0;
                        for(i = j; i <= j+8; i++)
                        {
                            if(Sudoku[i] == k) cnt++;
                        }
                        if(cnt != 1) {flag = 0;  break; }
                    }
                    if(flag == 0) break;
                }

                ///Row-Wise Shorto puron hoyeche kina seta jachai(below-Loop)
                for(k = 1; k <= 9; k++)
                {
                    if(flag == 0) break;

                    for(j = 11; j <= 19; j++)
                    {
                        cnt = 0;
                        for(i = j;  i <= 99;  i += 10)
                        {
                            if(Sudoku[i] == k) cnt++;
                        }
                        if(cnt  !=  1) {flag = 0;  break; } ///Sobgulo Number Kebol-Matro 1 bar ache kina;  na thakle shorto puron hoyni
                    }
                    if(flag == 0) break;
                }


                ///(3*3)-Size er Box gulote Shorto puron hoyeche kina seta jachai (below 9 Macro loop)

                for(k = 1; k <= 9; k++)
                {
                    if(flag == 0) break;
                        cnt = 0;
                    for(j = 11; j <= 39; j += 10)
                    {
                        for(i = j; i <= j+2; i++)
                        {
                            if(Sudoku[i] == k) cnt++;
                        }

                    }
                    if(cnt != 1) {flag = 0;  break; }
                }

                for(k = 1; k <= 9; k++)
                {
                    if(flag == 0) break;
                        cnt = 0;
                    for(j = 14; j <= 39; j += 10)
                    {
                        for(i = j; i <= j+2; i++)
                        {
                            if(Sudoku[i] == k) cnt++;
                        }

                    }
                    if(cnt != 1) {flag = 0;  break; }

                }

                 for(k = 1; k <= 9; k++)
                {
                    if(flag == 0) break;
                                    cnt = 0;
                    for(j = 17; j <= 39; j += 10)
                    {
                        for(i = j; i <= j+2; i++)
                        {
                            if(Sudoku[i] == k) cnt++;
                        }

                    }
                    if(cnt != 1) {flag = 0;  break; }
                }

                 for(k = 1; k <= 9; k++)
                {
                    if(flag == 0) break;
                                    cnt = 0;
                    for(j = 41; j <= 69; j += 10)
                    {

                        for(i = j; i <= j+2; i++)
                        {
                            if(Sudoku[i] == k) cnt++;
                        }

                    }
                    if(cnt != 1) {flag = 0;  break; }
                }

                 for(k = 1; k <= 9; k++)
                {
                    if(flag == 0) break;
                                    cnt = 0;
                    for(j = 44; j <= 69; j += 10)
                    {

                        for(i = j; i <= j+2; i++)
                        {
                            if(Sudoku[i] == k) cnt++;
                        }

                    }
                    if(cnt != 1) {flag = 0;  break; }
                }

                 for(k = 1; k <= 9; k++)
                {
                    if(flag == 0) break;
                                    cnt = 0;
                    for(j = 47; j <= 69; j += 10)
                    {

                        for(i = j; i <= j+2; i++)
                        {
                            if(Sudoku[i] == k) cnt++;
                        }

                    }
                    if(cnt != 1) {flag = 0;  break; }
                }

                 for(k = 1; k <= 9; k++)
                {
                    if(flag == 0) break;
                                    cnt = 0;
                    for(j = 71; j <= 99; j += 10)
                    {

                        for(i = j; i <= j+2; i++)
                        {
                            if(Sudoku[i] == k) cnt++;
                        }

                    }
                    if(cnt != 1) {flag = 0;  break; }
                }

                 for(k = 1; k <= 9; k++)
                {
                    if(flag == 0) break;
                                    cnt = 0;
                    for(j = 74; j <= 99; j += 10)
                    {

                        for(i = j; i <= j+2; i++)
                        {
                            if(Sudoku[i] == k) cnt++;
                        }

                    }
                    if(cnt != 1) {flag = 0;  break; }
                }

                 for(k = 1; k <= 9; k++)
                {
                    if(flag == 0) break;
                                    cnt = 0;
                    for(j = 77; j <= 99; j += 10)
                    {

                        for(i = j; i <= j+2; i++)
                        {
                            if(Sudoku[i] == k) cnt++;
                        }

                    }
                    if(cnt != 1) {flag = 0;  break; }
                }


                TabM

                ///Print the Sudoku Matrix(Below)
                for(i = 11; i<100; i++)
                {
//////                    cout << Sudoku[i] << "  ";
                    if(Sudoku[i] == 0) printf("%c  ",Sudoku[i]+'.');  ///'0' use korle Empty Index gulo bujhte osubidha hoy, tai '.' use korechi
                    else             printf("%c  ",Sudoku[i]+'0');
                    if((i%10)% 3 == 0) cout << " ";
                    if((i/10)% 3 == 0 && i%10 == 9) {cout << endl;  TabM}
                    if(i%10 == 9) {i++;  cout << endl;  TabM}

                }

                cout << "\n\n\n";
                Sound

                if(flag == 1){TabM cout << "   Congratulation\n\n\n";  break; } ///jodi Shobgulo Shorto thik moto fill up hoy, tobe Ami thik moto Game sompurno korte perechi

            }

            new new new getch();
            TabM cout << "To Play Again Press-'1'\n";
            TabM cout << "To goto Menu  Press-'0'\n";
            string Again;
            cin >> Again;
            if(Again == "1") continue;
            else goto Menu;


        }

    case 10:  ///Sudoku (Custom)
        while(1)
        {
            TabM cout << "\tSUDOKU GAME\n\n\n";
            int Sudoku[101] = {0},cnt,row,col,Index,Value,i,j,k;
            char temp_index,Temp[101];

            ///First print(All Blank) --> Below

            TabM   ///Lekha gulo jate middle e dekha jay

            for(i = 11; i<100; i++)
            {
                if(Sudoku[i] == 0) printf("%c  ",Sudoku[i]+'.');   ///'0' use korle Empty Index gulo bujhte osubidha hoy, tai '.' use korechi
                else printf("%c  ",Sudoku[i]+'0');
                if((i%10)% 3 == 0) cout << " ";
                if((i/10)% 3 == 0 && i%10 == 9) {cout << endl;  TabM}
                if(i%10 == 9) {i++;  cout << endl;  TabM}

            }

            cout << "\n\nNow, Initialize the Given Values of Index. Empty Indexs should be Initialized with '0'. After Initialization The Game will be Menu.\n\n";

            ///Ei program ti-te Copiler er moddhei Given Data Gulo Input Dewa Jabe Nicher Loop tir sahajje

            for(i = 1; i<10; i++)
            {
                for(j = 1; j<10; j++)
                {
                    cout << "Index[" << i << "][" << j << "]  =  ";
                    cin >> Sudoku[10*i+j];

                    if(Sudoku[10*i+j]<0 || Sudoku[10*i+j]>9) {cout << "Error Input\n\n";  goto Menu; } ///jodi Game close korte chai


                }
            }

            /// Complete Given Data's Initialization

            new new new

            ///Now The Game will Menu (below)

            TabM cout << "  Now The Game Starts\n\n";

            TabM

            for(i = 11; i<100; i++) ///Initial print
            {
                if(Sudoku[i] == 0) printf("%c  ",Sudoku[i]+'.');
                else printf("%c  ",Sudoku[i]+'0');
                if((i%10)% 3 == 0) cout << " ";
                if((i/10)% 3 == 0 && i%10 == 9) {cout << endl;  TabM}
                if(i%10 == 9) {i++;  cout << endl;  TabM}

            }

             ///(below-Loop)--> kongulo index initially faka chilo r kongulo faka chilo na seta jachai
            for(i = 0; i <= 100; i++)
            {
                if(Sudoku[i] == 0 ) Temp[i] = 0 ;
                else              Temp[i] = 1 ;
            }

            new new new
            Sound
            TabM2 cout << "You should Fill Up All The Empty Index by Inserting Proper Value\n\n";

            while(1)
            {
                char flag = 1;      ///Shorto Puron Korte perechi kina seta jachai

                cout << "Enter Row & Column Number  : ";
                cin >> row >> col;

                if(row<0 || col<0) {flag = 0; break; } ///if I want to close the program
                if(col >9) col = 0;
                if(row >9) row = 0;  ///ei 2 line dewa khub important chilo na, tao diyechi ejonno je jate Wrong Value dileo Program thik moro Run hoy
                Index = 10*row+col;

//////                cout << "Enter Index Number \t: ";
//////                cin >> Index;
//////                row = Index/10;  col = Index%10;
//////                if(Index<0 || Index >99) Index = 0;


                if(Temp[Index] != 0) {cout << "Not Changeable\n\n";  continue; }  ///Given Value gulo Change kora jabe na

                cout << "Index[" << row << "][" << col << "]\t\t    =  ";
                cin >> Value;   ///Index Value Input

                cout << endl;

                if(Value<0) Value = -Value;
                if(Value>9) Value = Value%10;  ///ei 2 line dewa khub important chilo na, tao diyechi ejonno je jate jekono value dile thikmoto Input hoy

                Sudoku[Index] = Value;         ///Initilized

                ///Row-Wise Shorto puron hoyeche kina seta jachai(below-Loop)
                for(k = 1; k <= 9; k++)
                {
                    for(j = 11; j <= 91; j += 10)
                    {
                        cnt = 0;
                        for(i = j; i <= j+8; i++)
                        {
                            if(Sudoku[i] == k) cnt++;
                        }
                        if(cnt != 1) {flag = 0;  break; }
                    }
                    if(flag == 0) break;
                }

                ///Row-Wise Shorto puron hoyeche kina seta jachai(below-Loop)
                for(k = 1; k <= 9; k++)
                {
                    if(flag == 0) break;

                    for(j = 11; j <= 19; j++)
                    {
                        cnt = 0;
                        for(i = j;  i <= 99;  i += 10)
                        {
                            if(Sudoku[i] == k) cnt++;
                        }
                        if(cnt  !=  1) {flag = 0;  break; } ///Sobgulo Number Kebol-Matro 1 bar ache kina;  na thakle shorto puron hoyni
                    }
                    if(flag == 0) break;
                }


                ///(3*3)-Size er Box gulote Shorto puron hoyeche kina seta jachai (below 9 Macro loop)

                for(k = 1; k <= 9; k++)
                {
                    if(flag == 0) break;
                        cnt = 0;
                    for(j = 11; j <= 39; j += 10)
                    {
                        for(i = j; i <= j+2; i++)
                        {
                            if(Sudoku[i] == k) cnt++;
                        }

                    }
                    if(cnt != 1) {flag = 0;  break; }
                }

                for(k = 1; k <= 9; k++)
                {
                    if(flag == 0) break;
                        cnt = 0;
                    for(j = 14; j <= 39; j += 10)
                    {
                        for(i = j; i <= j+2; i++)
                        {
                            if(Sudoku[i] == k) cnt++;
                        }

                    }
                    if(cnt != 1) {flag = 0;  break; }

                }

                 for(k = 1; k <= 9; k++)
                {
                    if(flag == 0) break;
                                    cnt = 0;
                    for(j = 17; j <= 39; j += 10)
                    {
                        for(i = j; i <= j+2; i++)
                        {
                            if(Sudoku[i] == k) cnt++;
                        }

                    }
                    if(cnt != 1) {flag = 0;  break; }
                }

                 for(k = 1; k <= 9; k++)
                {
                    if(flag == 0) break;
                                    cnt = 0;
                    for(j = 41; j <= 69; j += 10)
                    {

                        for(i = j; i <= j+2; i++)
                        {
                            if(Sudoku[i] == k) cnt++;
                        }

                    }
                    if(cnt != 1) {flag = 0;  break; }
                }

                 for(k = 1; k <= 9; k++)
                {
                    if(flag == 0) break;
                                    cnt = 0;
                    for(j = 44; j <= 69; j += 10)
                    {

                        for(i = j; i <= j+2; i++)
                        {
                            if(Sudoku[i] == k) cnt++;
                        }

                    }
                    if(cnt != 1) {flag = 0;  break; }
                }

                 for(k = 1; k <= 9; k++)
                {
                    if(flag == 0) break;
                                    cnt = 0;
                    for(j = 47; j <= 69; j += 10)
                    {

                        for(i = j; i <= j+2; i++)
                        {
                            if(Sudoku[i] == k) cnt++;
                        }

                    }
                    if(cnt != 1) {flag = 0;  break; }
                }

                 for(k = 1; k <= 9; k++)
                {
                    if(flag == 0) break;
                                    cnt = 0;
                    for(j = 71; j <= 99; j += 10)
                    {

                        for(i = j; i <= j+2; i++)
                        {
                            if(Sudoku[i] == k) cnt++;
                        }

                    }
                    if(cnt != 1) {flag = 0;  break; }
                }

                 for(k = 1; k <= 9; k++)
                {
                    if(flag == 0) break;
                                    cnt = 0;
                    for(j = 74; j <= 99; j += 10)
                    {

                        for(i = j; i <= j+2; i++)
                        {
                            if(Sudoku[i] == k) cnt++;
                        }

                    }
                    if(cnt != 1) {flag = 0;  break; }
                }

                 for(k = 1; k <= 9; k++)
                {
                    if(flag == 0) break;
                                    cnt = 0;
                    for(j = 77; j <= 99; j += 10)
                    {

                        for(i = j; i <= j+2; i++)
                        {
                            if(Sudoku[i] == k) cnt++;
                        }

                    }
                    if(cnt != 1) {flag = 0;  break; }
                }


                TabM

                ///Print the Sudoku Matrix(Below)
                for(i = 11; i<100; i++)
                {
        ///          cout << Sudoku[i] << "  ";
                    if(Sudoku[i] == 0) printf("%c  ",Sudoku[i]+'.');  ///'0' use korle Empty Index gulo bujhte osubidha hoy, tai '.' use korechi
                    else             printf("%c  ",Sudoku[i]+'0');
                    if((i%10)% 3 == 0) cout << " ";
                    if((i/10)% 3 == 0 && i%10 == 9) {cout << endl;  TabM}
                    if(i%10 == 9) {i++;  cout << endl;  TabM}

                }

                new new new
                Sound

                if(flag == 1){TabM cout << "   Congratulation!\n\n\n";  break; } ///jodi Shobgulo Shorto thik moto fill up hoy, tobe Ami thik moto Game sompurno korte perechi

            }
                    new new new getch();
                    TabM cout << "To Play Again Press-'1'\n";
                    TabM cout << "To goto Menu  Press-'0'\n";
                    string Again;
                    cin >> Again;
                    if(Again == "1") continue;
                    else goto Menu;

        }


    case 11:  ///Head-Tail Type Cricket(Bowling First)

        while(1)
        {
            string Team_1, Team_2;         ///Team 2 tir nam
            cout << "Your Team Name    : ";       cin >> Team_1;
            cout << "Opposit Team Name : ";       cin >> Team_2;

            int win = 0,  lost = 0, draw = 0;
            int Run = 0, Wicket = 0, Ball = 0, Temp;
            char My_Hit_Temp;
            int My_Hit, Com_Hit_Temp, Com_Hit, Over_Total, Wicket_Total, i;

            TabM cout << "Over   : ";
            cin >> Over_Total;
            if(Over_Total<1) goto Menu;  ///if i want to close this Game

            TabM cout << "Wicket : ";
            cin >> Wicket_Total;
            if(Wicket_Total<1) goto Menu; ///if i want to close this Game

            TabM2 cout << "\nEverytime Press any key from '0' to '6'  :\n\n";

            cout << "\nYour Bowling  :\n\n";

            ///Bowling Loop (below)
            while(1)
            {
                Ball++;
                int Run_Previous = Run, Wicket_Previous  =  Wicket;

                Temp += (rand() % 100);
                Temp = Temp % 100;

                cin >> My_Hit_Temp;

                if(My_Hit_Temp == 'x' || My_Hit_Temp == 'X') goto Menu;;

                My_Hit  =  My_Hit_Temp-'0';

                srand(time(NULL));

                Com_Hit = (rand()+Temp) % 7;///Output: 0 to 6

                if(My_Hit == Com_Hit) {Wicket++;Run  -=  Com_Hit;} ///jodi Amar Select kora songkha r Computer er Select kora songkha Same hoy tobe Wicket porbe

                Run += Com_Hit;                                    ///- r same na hole Computer er select kora songkha Run hisebe add hobe

                cout << "\t\t\t\t" << Ball/6 << "." << Ball % 6 << ":\t" << Run << "/" << Wicket << "(+" << Run-Run_Previous << "/" << Wicket-Wicket_Previous << ")" << endl;
                if(Wicket == Wicket_Total || Ball == 6*Over_Total ) break;

            }
            int Op_Run = Run;

            cout << endl << Team_2 << " : " << Run << "/" << Wicket << endl;
            cout << "\t\t\t\t\ttarget : " << Run+1 << endl << endl;

             Run = 0;
             Wicket = 0;
             Ball = 0;

            cout << "\nYour Batting  :\n\n";

            while(1)
            {
                Ball++;
                int Run_Previous = Run, Wicket_Previous  =  Wicket;

                Temp += (rand() % 991);
                Temp = Temp % 100;
                cin >> My_Hit_Temp;

                if(My_Hit_Temp == 'x' || My_Hit_Temp == 'X') goto Menu;;
                My_Hit = My_Hit_Temp - '0';
                if(My_Hit>6 || My_Hit<0) My_Hit = 0;

                srand(time(NULL));

                Com_Hit_Temp  =  (rand()+Temp) % 100;
                Com_Hit_Temp++;

                if      (Com_Hit_Temp<2)    Com_Hit = 0;
                else if (Com_Hit_Temp< 5)   Com_Hit = 1;
                else if (Com_Hit_Temp<12)   Com_Hit = 2;
                else if (Com_Hit_Temp<24)   Com_Hit = 3;
                else if (Com_Hit_Temp<41)   Com_Hit = 4;
                else if (Com_Hit_Temp<71)   Com_Hit = 5;
                else                        Com_Hit = 6;

                if(My_Hit == Com_Hit) {Wicket++;Run  -=  My_Hit;}

                Run += My_Hit;

                cout << "\t\t\t\t" << Ball/6 << "." << Ball % 6 << ":\t" << Run << "/" << Wicket << "\t(Need: " << Op_Run+1-Run << "/" << Wicket_Total-Wicket << "(" << (6*Over_Total-Ball)/6 << "." << (6*Over_Total-Ball) % 6 << ")) (+" << Run-Run_Previous << "/" << Wicket-Wicket_Previous << ")" << endl;
                if(Wicket == Wicket_Total || Ball == 6*Over_Total || Run>Op_Run) break;


            }

            int My_Run = Run;

            cout << endl << Team_1 << " : " << My_Run << "/" << Wicket << endl;

            new TabM3
            if(My_Run>Op_Run) cout << Team_1 << " won by " << Wicket_Total-Wicket << " Wicket\n";
            if(My_Run<Op_Run) cout << Team_2 << " won by " << Op_Run-Run << " Run\n";

            new
            if(My_Run >  Op_Run) {win++;  cout << "\t\t\t\tCongratulation! Your Team " << Team_1 << " is Winner\n";}
            if(My_Run == Op_Run) {draw++; cout << "\t\t\t\t\tMatch Drawn\n";}
            if(My_Run <  Op_Run) {lost++; cout << "\t\t\t\tSorry! Opportunate Team " << Team_2 << " is Winner\n";}

            new new new getch();
            TabM cout << "To Play Again Press-'1'\n";
            TabM cout << "To goto Menu  Press-'0'\n";
            string Again;
            cin >> Again;
            if(Again == "1") continue;
            else goto Menu;;

            }

        break;

    case 12 :  ///Head-Tail Type Cricket(Batting First)
        while(1)
        {
            string Team_1,Team_2;
            cout << "Your Team Name    : ";        cin >> Team_1;
            cout << "Opposit Team Name : ";        cin >> Team_2;

            int win = 0,lost = 0,draw = 0;

            int Run = 0,w = 0,Ball = 0,temp;
            char m;
            int Hit,c,Hit_Op,over,wick,i;

            cout << "\t\t\t\t\tOver : ";
            cin >> over;

            if(over<1)  goto Menu;

            cout << "\t\t\t\t\tWicket : ";
            cin >> wick;

            if(wick<1)  goto Menu;

            cout << "\nYour Batting  :\n\n";

            while(1)
            {
                Ball++;
                int pRun = Run,pw = w;
                temp += (rand()%100);
                temp = temp%100;
                cin >> m;
                if(m == 'x' || m == 'X') goto Menu;
                Hit = m-'0';
                if(Hit>6 || Hit<0) Hit = 0;

                srand(time(NULL));

                c = (rand()+temp)%100;
                c++;
                if(c<2)Hit_Op = 0;
                else if (c<5)Hit_Op = 1;
                else if (c<12)Hit_Op = 2;
                else if (c<24)Hit_Op = 3;
                else if (c<41)Hit_Op = 4;
                else if (c<71)Hit_Op = 5;
                else Hit_Op = 6;

                if(Hit == Hit_Op) {w++; Run -= Hit; }

                Run += Hit;

                cout << "\t\t\t\t" << Ball/6 << "." << Ball%6 << ":\t" << Run << "/" << w << "(+" << Run-pRun << "/" << w-pw << ")" << endl;
                if(w == wick || Ball == 6*over ) break;


            }

            int myRun = Run;
            cout << endl << Team_1 << " : " << Run << "/" << w << endl;

            cout << "\t\t\t\t\ttarget : " << Run+1 << endl << endl;

             Run = 0;
             w = 0;
             Ball = 0;

            cout << "\nBowling  :\n\n";
            while(1)
            {
                Ball++;
                int pRun = Run,pw = w;
                temp += (rand()%100);
                temp = temp%100;
                cin >> m;
                if(m == 'x' || m == 'X') goto Menu;
                Hit = m-'0';

                srand(time(NULL));

                Hit_Op = (rand()+temp)%7;

                if(Hit == Hit_Op) {w++; Run -= Hit_Op; }

                Run += Hit_Op;

                cout << "\t\t\t\t" << Ball/6 << "." << Ball%6 << ":\t" << Run << "/" << w << "\t(Need: " << wick-w << "/" << myRun-Run-1 << "(" << (6*over-Ball)/6 << "." << (6*over-Ball)%6 << ")) (+" << Run-pRun << "/" << w-pw << ")" << endl;
                if(w == wick || Ball == 6*over || Run>myRun ) break;

            }

            int oppRun = Run;
            cout << endl << Team_2 << " : " << Run << "/" << w << endl;

            new TabM3

            if(oppRun>myRun) cout << Team_2 << " won by " << wick-w << " Wicket\n";
            if(oppRun<myRun) cout << Team_1 << " won by " << myRun-oppRun << " Run\n";

            new
            if(oppRun<myRun)    { win++; cout << "\t\t\t\tCongratulation! Your Team " << Team_1 << " is Winner\n"; }
            if(oppRun == myRun) {draw++; cout << "\t\t\t\t\tMatch Drawn\n"; }
            if(oppRun>myRun)    {lost++; cout << "\t\t\t\tSorry! Opportunate Team " << Team_2 << " is Winner\n"; }

            new new new getch();
            TabM cout << "To Play Again Press-'1'\n";
            TabM cout << "To goto Menu  Press-'0'\n";
            string Again;
            cin >> Again;
            if(Again == "1") continue;
            else goto Menu;

        }
        break;

    case 0:
        cout << "\t\t\t\t\t\t Program is Closed\n";
        cout << "\t\t\t\t\t\tJajakallahu Khairan\n\n";
        getch();
        return 0;

    default:
        cout << "\t\t\t\t\t\tError Switching\n\t\t\t\t\t\tProgram is Closed\n";
        cout << "\t\t\t\t\t\tJajakallahu Khairan\n\n";
        getch();
        return 0;
    }

    goto Menu;

}

