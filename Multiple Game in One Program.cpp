#include <bits/stdc++.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define TabM cout<<"\t\t\t\t\t\t";
#define TabM2 cout<<"\t\t\t\t     ";
#define TabM3 cout<<"\t\t\t\t\t  ";
#define TabM4 cout<<"\t\t\t\t ";

#define new cout<<"\n";
#define Sound cout<<"\a";

#define StrM cout<<"* * * * ";
#define Str cout<<"* ";
#define BrdrM cout<<"o o o o o o o o o o o ";
#define Brdr cout<<"o ";

#define show cout<<"\tScore : "<<Score<<endl<<endl;
#define showScore cout<<"\tScore : "<<Score<<endl;
#define showLife cout<<"\t Life : "<<Life<<endl<<endl;

using namespace std;

int Randam_Func_09 (int a)
{
    srand(time(NULL));
    a = rand() % 9;
    a++;
    return a;
}

int Randam_Function_100 (int Return_Fruit)
{
    srand(time(NULL));
    Return_Fruit  =  rand() % 100;
    Return_Fruit++;
    return Return_Fruit;
}


int main()
{
            char ch=2;
            TabM cout<<ch<<" MULTIPLE GAME "<<ch;
Start:
            new new
            TabM2 printf("Switch 1,    to Play TIC TAC TIC(Man vs Com)\n");
            TabM2 printf("Switch 2,    to Play TIC TAC TIC(Man vs Man)\n");
            TabM2 printf("Switch 3,    to Play Snake Game (Classic)   \n");
            TabM2 printf("Switch 4,    to Play Snake Game   (Box)     \n");
            TabM2 printf("Switch 5,    to Play PACMAN Mini (Easy)\n");
            TabM2 printf("Switch 6,    to Play PACMAN Mini (Hard)\n");
            TabM2 printf("Switch 7,    to Play Snake-Ladder Ludu (vs Computer)\n");
            TabM2 printf("Switch 8,    to Play Snake-Ladder Ludu (MultiPlayer)\n");
            TabM2 printf("Switch 9,    to Play Cricket (Bowling First)\n");
            TabM2 printf("Switch 10,   to Play Cricket (Batting First)\n");
            TabM2 printf("Switch 0,    to Close the Program\n");//derection end

            new new
            TabM2 printf("SwitCH Case Number (0 to 10): \t");

    int mark;
    cin >> mark;
    new new new

    switch (mark){

    case 1:     ///Tic Tac Toe (Man vs Computer)

        while(1)
        {
            int i,Me=0,Computer=0,Time=0,Win_I=0,Win_Com=0,Call,Level;
            char who,Grid_Data[10],Grid_Symbol[10];

            cout<<"\t\t\t\t\t       TIC TAC TIC\n\n";
            cout<<"\t\t\t  ";       cout<<"[Everytime Press '1' to '9' For Push Your Symbol in the Box] "<<endl<<endl;


                TabM Str StrM new
                TabM Str cout<<"1 2 3 "; Str new
                TabM Str cout<<"4 5 6 "; Str new
                TabM Str cout<<"7 8 9 "; Str new
                TabM Str StrM new new

                for(i=0;i<=9;i++)
                {
                    Grid_Data[i]=0;
                }


        //        new cout<<"\t\t\t  "; cout<<"[Everytime Press '1' to '9' For Push Your Symbol in the Box] "<<endl<<endl;

                Print_Loop_ttt:///Print_Loop

                Grid_Data[Me]=1;
                Grid_Data[Computer]=2;

                for(i=0;i<=9;i++)
                {
                    if(Grid_Data[i] == 0) Grid_Symbol[i]=' ';
                    if(Grid_Data[i] == 1) Grid_Symbol[i]='x';
                    if(Grid_Data[i] == 2) Grid_Symbol[i]='o';

                }

                new
                Sound
                TabM Str StrM new
                TabM Str
                for(i=1;i<=9;i++)
                {
                   cout<<Grid_Symbol[i]<<" ";
                   if(i%3 == 0) {Str new TabM Str }
                }

                StrM new new

                if(Time==0)
                {
                    new TabM cout<<"Choise Level";
                    new TabM3 cout<<"Easy / Medium / Hard";
                    new TabM2 cout<<"   Press - '1' / '2' / '3' : ";
                    cin>>Level;
                    new new
                    if      (Level<=0) goto Start;
                    else if (Level==1) {TabM cout<<"EASY LEVEL\n";}
                    else if (Level==2) {TabM cout<<"MEDIUM LEVEL\n";}
                    else               {TabM cout<<"HARD LEVEL\n";}
                    new

                    TabM3 cout<<"  Who Play First?\n";
                    TabM3 cout<< "('You'/'Computer')\n";
                    TabM4 cout<<"Press 'I' for 'You' or 'C' for 'Computer'\n";
                    TabM4 cout<<"     Press Other Key for Tossing\n";
                    TabM3 cout<<" (Without Quatation) :\n\n";
                    TabM  cout<<"   ";

                    cin>>who;
                    who=tolower(who);
                    if(who!='i' && who!='c')
                    {
                        srand(time(NULL));
                        if(rand() %2 == who %2 ) {new TabM3 cout<<"  You won the Toss\n" ;who='i';}
                        else {new TabM3 cout<<"Computer won the Toss\n" ; who='c';}
                    }

                    new new
                    TabM Str StrM new
                    TabM Str cout<<"1 2 3 "; Str new
                    TabM Str cout<<"4 5 6 "; Str new
                    TabM Str cout<<"7 8 9 "; Str new
                    TabM Str StrM new new

                    Sound
                    TabM Str StrM new
                    TabM Str
                    for(i=1;i<=9;i++)
                    {
                       cout<<Grid_Symbol[i]<<" ";
                       if(i%3 == 0) {Str new TabM Str }
                    }

                    StrM new new


                }

                if(Time == 0 && who == 'c') goto Com;
                if(Time == 0) ;
                else if(Time%2 == 1 && who == 'c' || Time%2 == 0 && who!='c') goto Come_Back_2;
                else goto Come_Back_1;



            while(1)
            {
                You:
                    Time++;

                    ReCall_Me:

                        new new TabM3 cout<<"Your Choise   :\t";
                        cin>>Me;
        //                Me = Me % 10;
                        if(Me<=0) goto Start;
                        if(Grid_Data[Me] == 1 || Grid_Data[Me] == 2) {cout<<"Already Exist\n\n";goto ReCall_Me;}

                    Grid_Data[Me]=1;

                    goto Print_Loop_ttt;

                    Come_Back_1:

                        if(Grid_Data[1] == 1 && Grid_Data[2] == 1 && Grid_Data[3] == 1 || Grid_Data[4] == 1 && Grid_Data[5] == 1 && Grid_Data[6] == 1 || Grid_Data[7] == 1 && Grid_Data[8] == 1 && Grid_Data[9] == 1 || Grid_Data[1] == 1 && Grid_Data[4] == 1 && Grid_Data[7] == 1 || Grid_Data[2] == 1 && Grid_Data[5] == 1 && Grid_Data[8] == 1 || Grid_Data[3] == 1 && Grid_Data[6] == 1 && Grid_Data[9] == 1 ||  Grid_Data[3] == 1 && Grid_Data[5] == 1 && Grid_Data[7] == 1 || Grid_Data[1] == 1 && Grid_Data[5] == 1 && Grid_Data[9] == 1 )
                        {
                            Win_I++;
                            break;
                        }
                    if(Time == 9) break;

                Com:
                    Time++;

                    if(Level==1)
                    {
                        while(1)
                            {
                                Computer = Randam_Func_09 (Call);
                                if(Grid_Data[Computer] == 0 ) break;
                            }
                    }

                    else if(Level==2)
                    {
                        if     (Grid_Data[1] == 2 && Grid_Data[2] == 2 && Grid_Data[3] == 0)  { Grid_Data[3] = 2; Computer =3;}
                        else if(Grid_Data[1] == 2 && Grid_Data[3] == 2 && Grid_Data[2] == 0)  { Grid_Data[2] = 2; Computer =2;}
                        else if(Grid_Data[2] == 2 && Grid_Data[3] == 2 && Grid_Data[1] == 0)  { Grid_Data[1] = 2; Computer =1;}
                        else if(Grid_Data[4] == 2 && Grid_Data[5] == 2 && Grid_Data[6] == 0)  { Grid_Data[6] = 2; Computer =6;}
                        else if(Grid_Data[4] == 2 && Grid_Data[6] == 2 && Grid_Data[5] == 0)  { Grid_Data[5] = 2; Computer =5;}
                        else if(Grid_Data[5] == 2 && Grid_Data[6] == 2 && Grid_Data[4] == 0)  { Grid_Data[4] = 2; Computer =4;}
                        else if(Grid_Data[7] == 2 && Grid_Data[8] == 2 && Grid_Data[9] == 0)  { Grid_Data[9] = 2; Computer =9;}
                        else if(Grid_Data[7] == 2 && Grid_Data[9] == 2 && Grid_Data[8] == 0)  { Grid_Data[8] = 2; Computer =8;}
                        else if(Grid_Data[8] == 2 && Grid_Data[9] == 2 && Grid_Data[7] == 0)  { Grid_Data[7] = 2; Computer =7;}
                        else if(Grid_Data[1] == 2 && Grid_Data[4] == 2 && Grid_Data[7] == 0)  { Grid_Data[7] = 2; Computer =7;}
                        else if(Grid_Data[1] == 2 && Grid_Data[7] == 2 && Grid_Data[4] == 0)  { Grid_Data[4] = 2; Computer =4;}
                        else if(Grid_Data[4] == 2 && Grid_Data[7] == 2 && Grid_Data[1] == 0)  { Grid_Data[1] = 2; Computer =1;}
                        else if(Grid_Data[2] == 2 && Grid_Data[5] == 2 && Grid_Data[8] == 0)  { Grid_Data[8] = 2; Computer =8;}
                        else if(Grid_Data[2] == 2 && Grid_Data[8] == 2 && Grid_Data[5] == 0)  { Grid_Data[5] = 2; Computer =5;}
                        else if(Grid_Data[5] == 2 && Grid_Data[8] == 2 && Grid_Data[2] == 0)  { Grid_Data[2] = 2; Computer =2;}
                        else if(Grid_Data[3] == 2 && Grid_Data[6] == 2 && Grid_Data[9] == 0)  { Grid_Data[9] = 2; Computer =9;}
                        else if(Grid_Data[3] == 2 && Grid_Data[9] == 2 && Grid_Data[6] == 0)  { Grid_Data[6] = 2; Computer =6;}
                        else if(Grid_Data[6] == 2 && Grid_Data[9] == 2 && Grid_Data[3] == 0)  { Grid_Data[3] = 2; Computer =3;}
                        else if(Grid_Data[1] == 2 && Grid_Data[5] == 2 && Grid_Data[9] == 0)  { Grid_Data[9] = 2; Computer =9;}
                        else if(Grid_Data[1] == 2 && Grid_Data[9] == 2 && Grid_Data[5] == 0)  { Grid_Data[5] = 2; Computer =5;}
                        else if(Grid_Data[5] == 2 && Grid_Data[9] == 2 && Grid_Data[1] == 0)  { Grid_Data[1] = 2; Computer =1;}
                        else if(Grid_Data[3] == 2 && Grid_Data[5] == 2 && Grid_Data[7] == 0)  { Grid_Data[7] = 2; Computer =7;}
                        else if(Grid_Data[3] == 2 && Grid_Data[7] == 2 && Grid_Data[5] == 0)  { Grid_Data[5] = 2; Computer =5;}
                        else if(Grid_Data[5] == 2 && Grid_Data[7] == 2 && Grid_Data[3] == 0)  { Grid_Data[3] = 2; Computer =3;}
                        //Depends
                        else if(Grid_Data[1] == 1 && Grid_Data[2] == 1 && Grid_Data[3] == 0)  { Grid_Data[3] = 2; Computer =3;}
                        else if(Grid_Data[1] == 1 && Grid_Data[3] == 1 && Grid_Data[2] == 0)  { Grid_Data[2] = 2; Computer =2;}
                        else if(Grid_Data[2] == 1 && Grid_Data[3] == 1 && Grid_Data[1] == 0)  { Grid_Data[1] = 2; Computer =1;}
                        else if(Grid_Data[4] == 1 && Grid_Data[5] == 1 && Grid_Data[6] == 0)  { Grid_Data[6] = 2; Computer =6;}
                        else if(Grid_Data[4] == 1 && Grid_Data[6] == 1 && Grid_Data[5] == 0)  { Grid_Data[5] = 2; Computer =5;}
                        else if(Grid_Data[5] == 1 && Grid_Data[6] == 1 && Grid_Data[4] == 0)  { Grid_Data[4] = 2; Computer =4;}
                        else if(Grid_Data[7] == 1 && Grid_Data[8] == 1 && Grid_Data[9] == 0)  { Grid_Data[9] = 2; Computer =9;}
                        else if(Grid_Data[7] == 1 && Grid_Data[9] == 1 && Grid_Data[8] == 0)  { Grid_Data[8] = 2; Computer =8;}
                        else if(Grid_Data[8] == 1 && Grid_Data[9] == 1 && Grid_Data[7] == 0)  { Grid_Data[7] = 2; Computer =7;}
                        else if(Grid_Data[1] == 1 && Grid_Data[4] == 1 && Grid_Data[7] == 0)  { Grid_Data[7] = 2; Computer =7;}
                        else if(Grid_Data[1] == 1 && Grid_Data[7] == 1 && Grid_Data[4] == 0)  { Grid_Data[4] = 2; Computer =4;}
                        else if(Grid_Data[4] == 1 && Grid_Data[7] == 1 && Grid_Data[1] == 0)  { Grid_Data[1] = 2; Computer =1;}
                        else if(Grid_Data[2] == 1 && Grid_Data[5] == 1 && Grid_Data[8] == 0)  { Grid_Data[8] = 2; Computer =8;}
                        else if(Grid_Data[2] == 1 && Grid_Data[8] == 1 && Grid_Data[5] == 0)  { Grid_Data[5] = 2; Computer =5;}
                        else if(Grid_Data[5] == 1 && Grid_Data[8] == 1 && Grid_Data[2] == 0)  { Grid_Data[2] = 2; Computer =2;}
                        else if(Grid_Data[3] == 1 && Grid_Data[6] == 1 && Grid_Data[9] == 0)  { Grid_Data[9] = 2; Computer =9;}
                        else if(Grid_Data[3] == 1 && Grid_Data[9] == 1 && Grid_Data[6] == 0)  { Grid_Data[6] = 2; Computer =6;}
                        else if(Grid_Data[6] == 1 && Grid_Data[9] == 1 && Grid_Data[3] == 0)  { Grid_Data[3] = 2; Computer =3;}
                        else if(Grid_Data[1] == 1 && Grid_Data[5] == 1 && Grid_Data[9] == 0)  { Grid_Data[9] = 2; Computer =9;}
                        else if(Grid_Data[1] == 1 && Grid_Data[9] == 1 && Grid_Data[5] == 0)  { Grid_Data[5] = 2; Computer =5;}
                        else if(Grid_Data[5] == 1 && Grid_Data[9] == 1 && Grid_Data[1] == 0)  { Grid_Data[1] = 2; Computer =1;}
                        else if(Grid_Data[3] == 1 && Grid_Data[5] == 1 && Grid_Data[7] == 0)  { Grid_Data[7] = 2; Computer =7;}
                        else if(Grid_Data[3] == 1 && Grid_Data[7] == 1 && Grid_Data[5] == 0)  { Grid_Data[5] = 2; Computer =5;}
                        else if(Grid_Data[5] == 1 && Grid_Data[7] == 1 && Grid_Data[3] == 0)  { Grid_Data[3] = 2; Computer =3;}

                        else if(Time==9)
                            {for(i=1;i<=9;i++)   {if(Grid_Data[i] == 0) Computer=i;}}

                        else
                        {
                            while(1)
                            {
                                Computer = Randam_Func_09 (Call);
                                if(Grid_Data[Computer] == 0 ) break;
                            }
                        }

                    }

                    else
                    {
                        if     (Grid_Data [1] == 2 && Grid_Data [2] == 2 && Grid_Data [3] == 0)  { Grid_Data [3] = 2; Computer =3;}
                        else if(Grid_Data [1] == 2 && Grid_Data [3] == 2 && Grid_Data [2] == 0)  { Grid_Data [2] = 2; Computer =2;}
                        else if(Grid_Data [2] == 2 && Grid_Data [3] == 2 && Grid_Data [1] == 0)  { Grid_Data [1] = 2; Computer =1;}
                        else if(Grid_Data [4] == 2 && Grid_Data [5] == 2 && Grid_Data [6] == 0)  { Grid_Data [6] = 2; Computer =6;}
                        else if(Grid_Data [4] == 2 && Grid_Data [6] == 2 && Grid_Data [5] == 0)  { Grid_Data [5] = 2; Computer =5;}
                        else if(Grid_Data [5] == 2 && Grid_Data [6] == 2 && Grid_Data [4] == 0)  { Grid_Data [4] = 2; Computer =4;}
                        else if(Grid_Data [7] == 2 && Grid_Data [8] == 2 && Grid_Data [9] == 0)  { Grid_Data [9] = 2; Computer =9;}
                        else if(Grid_Data [7] == 2 && Grid_Data [9] == 2 && Grid_Data [8] == 0)  { Grid_Data [8] = 2; Computer =8;}
                        else if(Grid_Data [8] == 2 && Grid_Data [9] == 2 && Grid_Data [7] == 0)  { Grid_Data [7] = 2; Computer =7;}
                        else if(Grid_Data [1] == 2 && Grid_Data [4] == 2 && Grid_Data [7] == 0)  { Grid_Data [7] = 2; Computer =7;}
                        else if(Grid_Data [1] == 2 && Grid_Data [7] == 2 && Grid_Data [4] == 0)  { Grid_Data [4] = 2; Computer =4;}
                        else if(Grid_Data [4] == 2 && Grid_Data [7] == 2 && Grid_Data [1] == 0)  { Grid_Data [1] = 2; Computer =1;}
                        else if(Grid_Data [2] == 2 && Grid_Data [5] == 2 && Grid_Data [8] == 0)  { Grid_Data [8] = 2; Computer =8;}
                        else if(Grid_Data [2] == 2 && Grid_Data [8] == 2 && Grid_Data [5] == 0)  { Grid_Data [5] = 2; Computer =5;}
                        else if(Grid_Data [5] == 2 && Grid_Data [8] == 2 && Grid_Data [2] == 0)  { Grid_Data [2] = 2; Computer =2;}
                        else if(Grid_Data [3] == 2 && Grid_Data [6] == 2 && Grid_Data [9] == 0)  { Grid_Data [9] = 2; Computer =9;}
                        else if(Grid_Data [3] == 2 && Grid_Data [9] == 2 && Grid_Data [6] == 0)  { Grid_Data [6] = 2; Computer =6;}
                        else if(Grid_Data [6] == 2 && Grid_Data [9] == 2 && Grid_Data [3] == 0)  { Grid_Data [3] = 2; Computer =3;}
                        else if(Grid_Data [1] == 2 && Grid_Data [5] == 2 && Grid_Data [9] == 0)  { Grid_Data [9] = 2; Computer =9;}
                        else if(Grid_Data [1] == 2 && Grid_Data [9] == 2 && Grid_Data [5] == 0)  { Grid_Data [5] = 2; Computer =5;}
                        else if(Grid_Data [5] == 2 && Grid_Data [9] == 2 && Grid_Data [1] == 0)  { Grid_Data [1] = 2; Computer =1;}
                        else if(Grid_Data [3] == 2 && Grid_Data [5] == 2 && Grid_Data [7] == 0)  { Grid_Data [7] = 2; Computer =7;}
                        else if(Grid_Data [3] == 2 && Grid_Data [7] == 2 && Grid_Data [5] == 0)  { Grid_Data [5] = 2; Computer =5;}
                        else if(Grid_Data [5] == 2 && Grid_Data [7] == 2 && Grid_Data [3] == 0)  { Grid_Data [3] = 2; Computer =3;}
                        //Depends
                        else if(Grid_Data [1] == 1 && Grid_Data [2] == 1 && Grid_Data [3] == 0)  { Grid_Data [3] = 2; Computer =3;}
                        else if(Grid_Data [1] == 1 && Grid_Data [3] == 1 && Grid_Data [2] == 0)  { Grid_Data [2] = 2; Computer =2;}
                        else if(Grid_Data [2] == 1 && Grid_Data [3] == 1 && Grid_Data [1] == 0)  { Grid_Data [1] = 2; Computer =1;}
                        else if(Grid_Data [4] == 1 && Grid_Data [5] == 1 && Grid_Data [6] == 0)  { Grid_Data [6] = 2; Computer =6;}
                        else if(Grid_Data [4] == 1 && Grid_Data [6] == 1 && Grid_Data [5] == 0)  { Grid_Data [5] = 2; Computer =5;}
                        else if(Grid_Data [5] == 1 && Grid_Data [6] == 1 && Grid_Data [4] == 0)  { Grid_Data [4] = 2; Computer =4;}
                        else if(Grid_Data [7] == 1 && Grid_Data [8] == 1 && Grid_Data [9] == 0)  { Grid_Data [9] = 2; Computer =9;}
                        else if(Grid_Data [7] == 1 && Grid_Data [9] == 1 && Grid_Data [8] == 0)  { Grid_Data [8] = 2; Computer =8;}
                        else if(Grid_Data [8] == 1 && Grid_Data [9] == 1 && Grid_Data [7] == 0)  { Grid_Data [7] = 2; Computer =7;}
                        else if(Grid_Data [1] == 1 && Grid_Data [4] == 1 && Grid_Data [7] == 0)  { Grid_Data [7] = 2; Computer =7;}
                        else if(Grid_Data [1] == 1 && Grid_Data [7] == 1 && Grid_Data [4] == 0)  { Grid_Data [4] = 2; Computer =4;}
                        else if(Grid_Data [4] == 1 && Grid_Data [7] == 1 && Grid_Data [1] == 0)  { Grid_Data [1] = 2; Computer =1;}
                        else if(Grid_Data [2] == 1 && Grid_Data [5] == 1 && Grid_Data [8] == 0)  { Grid_Data [8] = 2; Computer =8;}
                        else if(Grid_Data [2] == 1 && Grid_Data [8] == 1 && Grid_Data [5] == 0)  { Grid_Data [5] = 2; Computer =5;}
                        else if(Grid_Data [5] == 1 && Grid_Data [8] == 1 && Grid_Data [2] == 0)  { Grid_Data [2] = 2; Computer =2;}
                        else if(Grid_Data [3] == 1 && Grid_Data [6] == 1 && Grid_Data [9] == 0)  { Grid_Data [9] = 2; Computer =9;}
                        else if(Grid_Data [3] == 1 && Grid_Data [9] == 1 && Grid_Data [6] == 0)  { Grid_Data [6] = 2; Computer =6;}
                        else if(Grid_Data [6] == 1 && Grid_Data [9] == 1 && Grid_Data [3] == 0)  { Grid_Data [3] = 2; Computer =3;}
                        else if(Grid_Data [1] == 1 && Grid_Data [5] == 1 && Grid_Data [9] == 0)  { Grid_Data [9] = 2; Computer =9;}
                        else if(Grid_Data [1] == 1 && Grid_Data [9] == 1 && Grid_Data [5] == 0)  { Grid_Data [5] = 2; Computer =5;}
                        else if(Grid_Data [5] == 1 && Grid_Data [9] == 1 && Grid_Data [1] == 0)  { Grid_Data [1] = 2; Computer =1;}
                        else if(Grid_Data [3] == 1 && Grid_Data [5] == 1 && Grid_Data [7] == 0)  { Grid_Data [7] = 2; Computer =7;}
                        else if(Grid_Data [3] == 1 && Grid_Data [7] == 1 && Grid_Data [5] == 0)  { Grid_Data [5] = 2; Computer =5;}
                        else if(Grid_Data [5] == 1 && Grid_Data [7] == 1 && Grid_Data [3] == 0)  { Grid_Data [3] = 2; Computer =3;}

                        else if (Time==1)
                        {
                           srand(time(NULL));
                           Computer = (2*(rand()%5))+1;
                        }
                        else if(Time==2 && ( Grid_Data [1]==1 || Grid_Data [3]==1 || Grid_Data [7]==1 || Grid_Data [9]==1  )) {Grid_Data [5]==2; Computer=5;}
                        else if(Time==2 && Grid_Data [5]==1 )
                        {
                            Randam_Func_09 (Call) ;
                            Computer=(rand()%4+1)*2-1;
                            if(Computer==5) Computer=9;
                        }

                        else if (Time==3 && Grid_Data [5]==0)
                        {
                            Computer=5;
                        }

                        else if (Time==3)
                        {
                            while(1)
                            {
                                Computer==Randam_Func_09 (Call) ;
                                if(Computer%2==0) Computer++;
                                else if(Grid_Data [Computer]!=0) Computer++;
                                else break;
                                Computer=Computer%10;
                            }
                        }

                        else if(Time==4 && ( Grid_Data [1]==1 && Grid_Data [9]==1 && Grid_Data [5]==2 || Grid_Data [3]==1 && Grid_Data [7]==1 && Grid_Data [5]==2  ))
                        {
                            srand(time(NULL));
                            Computer  = (1+rand()%4)*2;
                        }

                        else if(Time==9)
                        {
                            for(i=1;i<=9;i++)
                            {
                                if(Grid_Data [i] == 0) Computer=i;
                            }
                        }

                        else
                        {
                            while(1)
                            {
                                Computer = Randam_Func_09 (Call);
                                if(Grid_Data[Computer] == 0 ) break;
                            }
                        }

                    }


                    Grid_Data[Computer]=2;

                    new new TabM3 cout<< "Computer Chose :\t"<<Computer<<endl<<endl;

                    goto Print_Loop_ttt;
                    Come_Back_2:

                    if(Grid_Data[1] == 2 && Grid_Data[2] == 2 && Grid_Data[3] == 2 || Grid_Data[4] == 2 && Grid_Data[5] == 2 && Grid_Data[6] == 2 || Grid_Data[7] == 2 && Grid_Data[8] == 2 && Grid_Data[9] == 2 || Grid_Data[1] == 2 && Grid_Data[4] == 2 && Grid_Data[7] == 2 || Grid_Data[2] == 2 && Grid_Data[5] == 2 && Grid_Data[8] == 2 || Grid_Data[3] == 2 && Grid_Data[6] == 2 && Grid_Data[9] == 2 ||  Grid_Data[3] == 2 && Grid_Data[5] == 2 && Grid_Data[7] == 2 || Grid_Data[1] == 2 && Grid_Data[5] == 2 && Grid_Data[9] == 2 )
                    {
                        Win_Com++;
                        break;
                    }


                    if(Time == 9) break;


            }

            new TabM2

            Sound
            if         (Win_I   >   0)        cout<<"Congratulation! You are Winner.\n";
            else if    (Win_Com >   0)        cout<<"\t Sorry! You are Loser.\n";
            else                              cout<<"\t\tMatch Drawn\n";

            new new new getch();
            TabM cout<<"To Play Again Press-'1'\n";
            TabM cout<<"To goto Menu  Press-'0'\n";
            string again;
            cin>>again;
            if(again=="1") continue;
            else goto Start;

        }
        break;


    case 2:     ///Tic Tac Toe (Man vs Man)

        while(1)
        {
            int i,Player_1=0,Player_2=0,Case=0,Win_1=0,Win_2=0;
            char Box_Data [10];
            char Box_Symbol [10];

            cout<<"\t\t\t\t\t       TIC TAC TIC\n";
            cout<<"\t\t\t\t\t       [Man vs Man]\n\n";

            TabM Str StrM new
            TabM Str cout<<"1 2 3 "; Str new
            TabM Str cout<<"4 5 6 "; Str new
            TabM Str cout<<"7 8 9 "; Str new
            TabM Str StrM new new

            cout<<"\t\t\tWho Play First?(Player-1 / Player-2)  {Press '1' or '2'} : ";
            int who;
            cin>>who;

            if(who<=0) goto Start;
            if(who>2)
            {
                srand(time(NULL));
                if(rand() %2 == who %2 ) {new TabM3 cout<<"Player-1 won the Toss\n" ;who=1;}
                else                     {new TabM3 cout<<"Player-2 won the Toss\n" ;who=2;}
            }

            for(i=0;i<=9;i++)
            {
                Box_Data[i]=0;
            }


            Print_Loop:///Print_Loop

            Box_Data[Player_1]=1;
            Box_Data[Player_2]=2;

            for(i=0;i<=9;i++)
            {
                if(Box_Data[i]==0) Box_Symbol[i]=' ';
                if(Box_Data[i]==1) Box_Symbol[i]='x';
                if(Box_Data[i]==2) Box_Symbol[i]='o';

            }

            new
            cout<<"\a";
            TabM Str StrM new
            TabM Str
            for(i=1;i<=9;i++)
            {
               cout<<Box_Symbol[i]<<" ";
               if(i%3==0) {Str new TabM Str }
            }

            StrM new new

            if(Case==0 && who==2) goto Player2;
            if(Case==0) ;
            else if(Case%2==1 && who==2 || Case%2==0 && who!=2) goto Back_2;
            else goto Back_1;

            while(1)
            {
                Player1:
                    Case++;

                    Recall_Player1:
                        cout<<"Player-1 :   ";
                        cin>>Player_1;

                        if(Player_1>9 || Player_1<1 )
                        {
                            new cout<<"Error Input\n\n";
                            goto Recall_Player1;
                        }

                        if(Box_Data[Player_1]!=0)
                        {
                            new cout<<"Already Exist\n\n";
                            goto Recall_Player1;
                        }



                    Box_Data[Player_1]=1;

                    goto Print_Loop;

                    Back_1:

                        if(Box_Data[1]==1 && Box_Data[2]==1 && Box_Data[3]==1 || Box_Data[4]==1 && Box_Data[5]==1 && Box_Data[6]==1 || Box_Data[7]==1 && Box_Data[8]==1 && Box_Data[9]==1 || Box_Data[1]==1 && Box_Data[4]==1 && Box_Data[7]==1 || Box_Data[2]==1 && Box_Data[5]==1 && Box_Data[8]==1 || Box_Data[3]==1 && Box_Data[6]==1 && Box_Data[9]==1 ||  Box_Data[3]==1 && Box_Data[5]==1 && Box_Data[7]==1 || Box_Data[1]==1 && Box_Data[5]==1 && Box_Data[9]==1 )
                        {
                            Win_1++;
                            break;
                        }
                    if(Case==9) break;

                Player2:
                    Case++;

                    Recall_Player2:///
                        cout<<"Player-2 :   ";
                        cin>>Player_2;

                        if(Player_2>9 || Player_2<1 )
                        {
                            new cout<<"Error Input\n\n";
                            goto Recall_Player2;
                        }

                        if(Box_Data[Player_2]!=0)
                        {
                                new cout<<"Already Exist\n\n";
                                goto Recall_Player2;
                        }

                    Box_Data[Player_1]=2;

                    goto Print_Loop;

                    Back_2:

                    if(Box_Data[1]==2 && Box_Data[2]==2 && Box_Data[3]==2 || Box_Data[4]==2 && Box_Data[5]==2 && Box_Data[6]==2 || Box_Data[7]==2 && Box_Data[8]==2 && Box_Data[9]==2 || Box_Data[1]==2 && Box_Data[4]==2 && Box_Data[7]==2 || Box_Data[2]==2 && Box_Data[5]==2 && Box_Data[8]==2 || Box_Data[3]==2 && Box_Data[6]==2 && Box_Data[9]==2 ||  Box_Data[3]==2 && Box_Data[5]==2 && Box_Data[7]==2 || Box_Data[1]==2 && Box_Data[5]==2 && Box_Data[9]==2 )
                    {
                        Win_2++;
                        break;
                    }

                    if(Case==9) break;


            }

            cout<<"\a";
            new TabM2

            cout<<"\a";
            if(Win_1>0)         cout<<"Congratulation! Player-1 is Winner.\n";
            else if(Win_2>0)    cout<<"Congratulation! Player-2 is Winner.\n";
            else                cout<<"\t\tMatch Drawn\n";

            new new new getch();
                TabM2 cout<<"\tTo Play Again Press-'1'\n";
                TabM2 cout<<"\tTo Close Press-'Any Key';\n";
                string again;
                cin>>again;
                if(again=="1") continue;
                else goto Start;

        }

        break;



    case 3:     ///SNAKE-CLASSIC

        while(1)
        {
            int Fruit,Score = 0,temp=0,Finish=0,Call,Change=0,i,x = 0;
            int Snake_Head = 46;
            int Snake_Body[110] = {0};
            char Move;
            char PlayGround [111]; //0,1-100,NULL+Primary body Size(5)+Extra for avoid silly risk

            cout<<"\t\t\t\t\t\tSNAKE GAME [Classic](10x10)\n\n";
            cout<<"\t\t\t\t[Everytime You should press '1' to '9' for moving; \n\t\t\t\t 8'(up) or '2'(Down) or '4'(Left) or '6'(Right) or\n\t\t\t\t\t  '1'/'3'/'7'/'9' (Cross moving)\n\t\t\t\t\t (According to Keyboard Numarical Keys) ]\n";
            cout<<"\n\t\t\t\t [If Snake Bites it's Body, then The Game is Over.]";

            new new new;
            temp++;

            Fruit  =  Randam_Function_100(Call);

            //First Declaration of Snake Body
            Snake_Body[1]  =  Snake_Head-1;
            Snake_Body[2]  =  Snake_Head-2;
            Snake_Body[3]  =  Snake_Head-3;
            //Snake_Body[4]  =  Snake_Head-4;

            while(1)
            {
                cycle://jate fruit snake er body borabor na ase
                    Change++;
                    for(i = 3+Score; i>0; i--)
                    {
                        if(Fruit == Snake_Body[i]) {x = -1;  break; }
                    }
                    if((x == -1 || Fruit == Snake_Head) && Change <= 100 )
                    {
                        x = 0;
                        Fruit++;
                        Fruit = 1+Fruit%100;
                        goto cycle;
                    }

                for(i = 0; i <= 100; i++)
                {
                    PlayGround [i] = ' ';
                }

                PlayGround [Fruit] = temp%2+42; ///Fruit Symbol
                PlayGround [Snake_Head] = 2; ///Snake Head Symbol

                for(i = Score+3; i>0; i--)
                {
                    PlayGround [Snake_Body[i]]  =  254; ///Snake Body Symbol
                }
                PlayGround [Snake_Body[Score+3]] = 4; ///Snake Tail Symbol

                new;
                TabM;  Brdr;  BrdrM;  new;///Border
                TabM;  Brdr;

                for(i = 1; i <= 100; i++)
                {
                   cout<<PlayGround [i]<<" "; ///PlayGround
                   if(i%10  ==  0) {Brdr;  new;  TabM;  Brdr;  }
                }

                BrdrM new new

                TabM show///Show Score

                if(Finish == -100) break;

        //        cout<<"Press '8'(Up) or '2'(Down) or '4'(Left) or '6'(Right) or '1/3/7/9' (Cross moving) :\t";
                cin>>Move;
                temp++; Change = 0;

                if(Move == '5' || Move == '0') continue;

                for(i = 3+Score; i>0; i--)
                {
                    Snake_Body[i] =  Snake_Body[i-1];
                }
                Snake_Body[1] =  Snake_Head;

                if(Move == '6') {Snake_Head++;      if(Snake_Head%10 == 1)Snake_Head -= 10; }
                if(Move == '4') {Snake_Head--;      if(Snake_Head%10 == 0) Snake_Head += 10; }
                if(Move == '2') {Snake_Head += 10;    }
                if(Move == '8') {Snake_Head -= 10;    }

                //optional
                if(Move == '3') {Snake_Head += 11;   if(Snake_Head%10 == 1)Snake_Head -= 10; }
                if(Move == '7') {Snake_Head -= 11;   if(Snake_Head%10 == 0) Snake_Head += 10; }
                if(Move == '9') {Snake_Head -= 9;    if(Snake_Head%10 == 1)Snake_Head -= 10; }
                if(Move == '1') {Snake_Head += 9;    if(Snake_Head%10 == 0) Snake_Head += 10; }

                if(Snake_Head > 100) Snake_Head -= 100;
                if(Snake_Head <=  0) Snake_Head += 100;

                for(i = 3+Score; i>0; i--)
                {
                    if(Snake_Head == Snake_Body[i]) { Finish = -100; continue; }
                }

                if(Snake_Head == Fruit)
                {
                    Score++;
                    if(Score == 96) Score += 4; //Highest point 100 korar jonno;
                    Sound
                    Fruit =  Randam_Function_100(Call);

                }

            }


            Move = 1; //Smile Sign

            Sound;
            cout<<"\n\t\t\t\t\t\t\tGame Over!"<<Move<<"\n\t\t\t\t\t\t\tScore : "<<Score<<endl;  new

            if(Score >= 100)
            {
                Move = 2; //Smile Sign
                TabM cout<< "\tCongratulation!\n";
                TabM cout<<"\tHighest Score!"<<Move;
                new new
            }
            new new
            new new new getch();
            TabM cout<<"To Play Again Press-'1'\n";
            TabM cout<<"To goto Menu  Press-'0'\n";
            string again;
            cin>>again;
            if(again=="1") continue;
            else goto Start;
        }
        break;

    case 4:     ///SNAKE-BOX

        while(1)
        {
            int Fruit,Score = 0,temp=0,Finish=0,Call,Change=0,i,x = 0;
            int Snake_Head = 46;
            int Snake_Body[110] = {0};
            char Move;
            char Area[111];

            cout<<"\t\t\t\t\t\tSNAKE GAME [Box](10x10)\n\n";
            //cout<<"\t\t\t\t\t [Here You can move only '1' to '100']\n";
            cout<<"\t\t\t\t[Everytime You should press '1' to '9' for moving; \n\t\t\t\t 8'(up) or '2'(Down) or '4'(Left) or '6'(Right) or\n\t\t\t\t\t  '1'/'3'/'7'/'9' (Cross moving)\n\t\t\t\t\t (According to Keyboard Numarical Keys) ]\n";
            cout<<"\n\t\t\t\t [If Snake Bites it's Body or Border, then The Game is Over.]";

            new new new;
            temp++;

            Fruit  =  Randam_Function_100(Call);

            //Primary Declaration of Snake Body
            Snake_Body[1]  =  Snake_Head-1;
            Snake_Body[2]  =  Snake_Head-2;
            Snake_Body[3]  =  Snake_Head-3;

            while(1)
            {

                cyclebox://jate fruit snake er body borabor na ase
                    Change++;
                    for(i = 3+Score; i>0; i--)
                    {
                        if(Fruit == Snake_Body[i]) {x = -1;  break; }
                    }
                    if((x == -1 || Fruit == Snake_Head) && Change <= 100 )
                    {
                        x = 0;
                        Fruit++;
                        Fruit = 1+Fruit%100;
                        goto cyclebox;
                    }

                for(i = 0; i <= 100; i++)
                {
                    Area[i] = ' ';
                }

                Area[Fruit] = temp%2+42; ///Fruit Symbol
                Area[Snake_Head] = 2; ///Snake Head Symbol

                for(i = Score+3; i>0; i--)
                {
                    Area[Snake_Body[i]]  =  254;  ///Snake Body Symbol
                }
                Area[Snake_Body[Score+3]]  =  4;  ///Snake Tail Symbol

                new;
                TabM;  Brdr;  BrdrM;  new;
                TabM;  Brdr;

                for(i = 1; i <= 100; i++)
                {
                   cout<<Area[i]<<" ";
                   if(i%10  ==  0) {Brdr;  new;  TabM;  Brdr;  }
                }

                BrdrM new new

                TabM show

                if(Snake_Head > 100 || Snake_Head <= 0) break;

                cin>>Move;
                temp++; Change = 0;

                if(Move == '5' || Move == '0') continue;

                for(i = 3+Score; i>0; i--)
                {
                    Snake_Body[i] =  Snake_Body[i-1];
                }
                Snake_Body[1] =  Snake_Head;

                if(Move == '6') {Snake_Head++;      if(Snake_Head%10 == 1){ Snake_Head = 0; continue; }}
                if(Move == '4') {Snake_Head--;      if(Snake_Head%10 == 0) { Snake_Head = 0; continue; }}
                if(Move == '2') {Snake_Head += 10;     }
                if(Move == '8') {Snake_Head -= 10;    }
                //otional
                if(Move == '3') {Snake_Head += 11;      if(Snake_Head%10 == 1){ Snake_Head = 0; continue; }}
                if(Move == '7') {Snake_Head -= 11;      if(Snake_Head%10 == 0) { Snake_Head = 0; continue; }}
                if(Move == '9') {Snake_Head -= 9;    if(Snake_Head%10 == 1) { Snake_Head = 0; continue; }}
                if(Move == '1') {Snake_Head += 9;    if(Snake_Head%10 == 0){ Snake_Head = 0; continue; }}

                if(Snake_Head > 100) continue;
                if(Snake_Head  <=   0) continue;

                for(i = 3 + Score; i > 0; i--)
                {
                    if(Snake_Head == Snake_Body[i]) { Snake_Head = -100;  continue; }
                }

                if(Snake_Head == Fruit)
                {
                    Score++;
                    if(Score == 96) Score += 4; //Highest point 100 korar jonno;
                    Sound
                    Fruit =  Randam_Function_100(Call);

                }

            }


                Move = 1; //Smile Sign

            Sound
            if(Snake_Head == -100) cout<<"\n\n\t\t\t\t\t\t       TOUCH BODY!";
            else                 cout<<"\n\n\t\t\t\t\t\t       TOUCH BORDER!";
            cout<<"\n\t\t\t\t\t\t\tGAME OVER!"<<Move<<"\n\t\t\t\t\t\t\tSCORE : "<<Score<<endl;

            if(Score == 100)
            {
                Move = 2; //Smile Sign
                TabM cout<< "\tCongratulation!\n";
                TabM cout<<"\tHighest Score!"<<Move;
                new new
            }
            new new new getch();
            TabM cout<<"To Play Again Press-'1'\n";
            TabM cout<<"To goto Menu  Press-'0'\n";
            string again;
            cin>>again;
            if(again=="1") continue;
            else goto Start;
        }


    case 5:
        while(1)
    {
        int Score = 0,Temp=0,i,j,x = 0,Number_of_Enemy, Life=3,Level;
        int PacMan;
        char Move;
        char PlayGround[201],Fruit[201];
        //int Enemy[Number_of_Enemy];

        cout<<"\t\t\t\t\t\tPACMAN GAME (10x10) - Easy Mode\n\n";
        cout<<"\t\t\t\t\tEverytime You should press '1' to '9' for moving; \n\t\t\t\t 8'(up) or '2'(Down) or '4'(Left) or '6'(Right) or '5'(No Change) \n\t\t\t\t\t or '1'/'3'/'7'/'9' (Cross moving)\n\t\t\t\t\t(According to Keyboard Numarical Keys)\n";
        cout<<"\n\t\t\t\t If The Enemy Touch You, then You will Lost Your Life.\n";
        cout<<"\t\t\t\tIf The Enemy Touch Each Other, then They go away far from you\n";
        cout<<"\n\t\t\t\t     Your Target is to Eat all the Fruits on the Ground\n";


        new new new;

        new TabM cout<<"    Choise Level";
        new TabM3 cout<<"    Easy / Medium / Hard";
        new TabM2 cout<<"       Press - '1' / '2' / '3' : ";
        cin>>Level;
        new new
        if      (Level<=0) goto Start;
        else if (Level==1) {TabM cout<<"EASY LEVEL\n";}
        else if (Level==2) {TabM cout<<"MEDIUM LEVEL\n";}
        else               {TabM cout<<"HARD LEVEL\n";}
        new

        for(i = 0; i < 100; i++)
        {
            Fruit[i]=1;
        }

        pac_start:

        if(Level==1)
        {
            Number_of_Enemy=2;
            int Enemy[Number_of_Enemy];
            Enemy[0] = 0;
            Enemy[1] = 99;
        }

        else if(Level==2)
        {
            Number_of_Enemy=4;
            int Enemy[Number_of_Enemy];
            Enemy[0] = 0;
            Enemy[1] = 99;
            Enemy[2] = 9;
            Enemy[3] = 90;
        }

        else
        {
            Number_of_Enemy=8;
            int Enemy[Number_of_Enemy];
            Enemy[0] = 0;
            Enemy[1] = 99;
            Enemy[2] = 9;
            Enemy[3] = 90;
            Enemy[4] = 5;
            Enemy[5] = 95;
            Enemy[6] = 40;
            Enemy[7] = 49;
        }

        int Enemy[Number_of_Enemy];
        PacMan = 45;
        Temp=0;


        while(1)
        {

            for(i = 0; i < 100; i++)
            {
                PlayGround[i] = ' ';
            }

            for(i = 0; i < 100; i++)
            {
                if(Fruit[i] == 1) PlayGround[i] = '.';
            }

            PlayGround[PacMan] = 1; ///PacMan Symbol

            for(i=0;i<Number_of_Enemy;i++)
            {
                PlayGround[Enemy[i]] = 2;///Enemy Symbol
            }

            if(Temp!=-1) PlayGround[PacMan] = 1; ///PacMan Symbol

            new;
            TabM;  Brdr;  BrdrM;  new;///Border
            TabM;  Brdr;

            for(i = 0; i < 100; i++)
            {
               cout<<PlayGround[i]<<" "; ///Print PlayGround
               if(i%10 == 9) {Brdr;  new;  TabM;  Brdr;  }
            }

            BrdrM new new

            TabM showScore ///Show Score
            TabM showLife


            if(Life == 0) break;           ///Sob Life chole gele khela sesh
            if(Score == 100) break;        ///Sob fruit gulo khele khela sesh hobe
            if(Temp == -1) goto pac_start; ///jodi pacman er life kome jay tobe possition reform hobe


            for(i=0;i<Number_of_Enemy;i++)
            {
                if(Enemy[i] /10-PacMan/10 > 0) Enemy[i] -=10;
                else if (Enemy[i] /10 -PacMan/10 < 0) Enemy[i] +=10;

                if(Enemy[i] %10-PacMan%10 > 0) Enemy[i] --;
                else if (Enemy[i] %10-PacMan%10 < 0) Enemy[i] ++;
            }

            cin>>Move;

            if(Move == '5' || Move == '0') ;

            if(Move == '6') {PacMan++;      if(PacMan%10 == 0)PacMan --; }
            if(Move == '4') {PacMan--;      if((PacMan+20)%10 == 9) PacMan ++; }
            if(Move == '2') {PacMan += 10;    }
            if(Move == '8') {PacMan -= 10;    }

            //optional
            if(Move == '3') {PacMan += 11;   if(PacMan%10 == 0)PacMan --; }
            if(Move == '7') {PacMan -= 11;   if((PacMan+20)%10 == 9) PacMan ++; }
            if(Move == '9') {PacMan -= 9;    if((PacMan+20)%10 == 0)PacMan --; }
            if(Move == '1') {PacMan += 9;    if(PacMan%10 == 9) PacMan ++; }

            if(PacMan >= 100) PacMan -= 10;
            if(PacMan <  0) PacMan += 10;///Can't cross Border

            for(i=0; i<100; i++)
            {
                if(PacMan == i && Fruit[i] == 1)
                {
                    Score++;
                    Fruit[i]=0;
                }
            }

            for(i=0;i<Number_of_Enemy;i++)
            {
                if(PacMan == Enemy[i] )
                {
                    Temp = -1;
                    Life --;
                    break;
                }
            }


            for(i=0;i<Number_of_Enemy;i++)
            {
                for(j=i+1;j<Number_of_Enemy;j++)
                {

                    if(Enemy[i] == Enemy[j] && Temp != -1  )
                    {
                        Enemy[i] = 109 + 10*log2(Number_of_Enemy)+5*i;
                        Enemy[j] = 110 + 10*log2(Number_of_Enemy)+5*j;
                        Sound
                    }
                }
            }
        }

        if(Life==0)
        {
            Move = 2; //Smile Sign
            Sound;
            cout<<"\n\t\t\t\t\t\t\tGame Over!"<<Move<<"\n\t\t\t\t\t\t\tScore : "<<Score<<endl;  new
        }

        if(Score == 100)
        {
            Sound
            Move = 1; //Smile Sign
            TabM cout<< "\tCongratulation!\n";
            TabM cout<<"\tHighest Score!"<<Move;
            new new
        }

        string again;
        new new new getch();
        TabM cout<<"To Play Again Press-'1'\n";
        TabM cout<<"To Close Press-'Any Key'\n";
        TabM; cin>>again;
        new new new
        if(again=="1") continue;
        else goto Start;
    }

    case 6:
        while(1)
    {
        int Score = 0,Temp,i,j,x = 0,Number_of_Enemy=2,Life=3;
        int PacMan;
        char Move;
        char PlayGround[201],Fruit[201];
        int Enemy[Number_of_Enemy];

        cout<<"\t\t\t\t\tPacMan GAME (10x10) - Expert Mode\n\n";
        cout<<"\t\t\t\t\t Ghosts are understoood about your Next Move\n";
        cout<<"\t\t\t\t\tEverytime You should press '1' to '9' for moving; \n\t\t\t\t 8'(up) or '2'(Down) or '4'(Left) or '6'(Right) or '5'(No Change) \n\t\t\t\t\t or '1'/'3'/'7'/'9' (Cross moving)\n\t\t\t\t\t(According to Keyboard Numarical Keys)\n";
        cout<<"\n\t\t\t\t If Any of two ghost Touch You, then You will Lost Your Life.\n";
        cout<<"\t\t\t\tIf The Enemy Touch Each Other, then They go away far from you\n";
        cout<<"\n\t\t\t\tYour Target is to Eat all the Fruits on the Ground & You have 3 Life\n";


        new new new;

        for(i = 0; i < 100; i++)
        {
            Fruit[i]=1;
        }

        start:

        Enemy[0] = 0;
        Enemy[1] = 99;
        PacMan = 45;
        Temp=0;


        while(1)
        {

            for(i = 0; i < 100; i++)
            {
                PlayGround[i] = ' ';
            }

            for(i = 0; i < 100; i++)
            {
                if(Fruit[i] == 1) PlayGround[i] = '.';
            }

            PlayGround[PacMan] = 1; ///PacMan Symbol

            for(i=0;i<Number_of_Enemy;i++)
            {
                PlayGround[Enemy[i]] = 2;///Enemy Symbol
            }

            new;
            TabM;  Brdr;  BrdrM;  new;///Border
            TabM;  Brdr;

            for(i = 0; i < 100; i++)
            {
               cout<<PlayGround[i]<<" "; ///Print PlayGround
               if(i%10 == 9) {Brdr;  new;  TabM;  Brdr;  }
            }

            BrdrM new new

            TabM showScore///Show Score
            TabM showLife


            if(Life == 0) break;
            if(Score == 100) break;
            if(Temp == -1) goto start;

            cin>>Move;

            if(Move == '5' || Move == '0') ;

            if(Move == '6') {PacMan++;      if(PacMan%10 == 0)PacMan -=10; }
            if(Move == '4') {PacMan--;      if((PacMan+20)%10 == 9) PacMan +=10; }
            if(Move == '2') {PacMan += 10;    }
            if(Move == '8') {PacMan -= 10;    }

            //optional
            if(Move == '3') {PacMan += 11;   if(PacMan%10 == 0)PacMan -=10; }
            if(Move == '7') {PacMan -= 11;   if((PacMan+20)%10 == 9) PacMan +=10; }
            if(Move == '9') {PacMan -= 9;    if((PacMan+20)%10 == 0)PacMan -=10; }
            if(Move == '1') {PacMan += 9;    if(PacMan%10 == 9) PacMan +=10; }

            if(PacMan >= 100) PacMan -= 100 ;
            if(PacMan <  0) PacMan += 100;

            for(i=0;i<Number_of_Enemy;i++)
            {
                if(Enemy[i] /10-PacMan/10 > 0) Enemy[i] -=10;
                else if (Enemy[i] /10 -PacMan/10 < 0) Enemy[i] +=10;

                if(Enemy[i] %10-PacMan%10 > 0) Enemy[i] --;
                else if (Enemy[i] %10-PacMan%10 < 0) Enemy[i] ++;
            }

            for(i=0; i<100; i++)
            {
                if(PacMan == i && Fruit[i] == 1)
                {
                    Score++;
                    Fruit[i]=0;
                }
            }

            for(i=0;i<Number_of_Enemy;i++)
            {
                if(PacMan == Enemy[i] )
                {
                    Temp = -1;
                    Life --;
                    break;
                }
            }

            for(i=0;i<Number_of_Enemy;i++)
            {
                for(j=i+1;j<Number_of_Enemy;j++)
                {
                    if(Enemy[i] == Enemy[j] && Temp != -1  )
                    {
                        Enemy[i] = 189;
                        Enemy[j] = 190;
                        Sound
                    }
                }
            }

        }

        if(Life==0)
        {
            Move = 2; //Smile Sign
            Sound;
            cout<<"\n\t\t\t\t\t\t\tGame Over!"<<Move<<"\n\t\t\t\t\t\t\tScore : "<<Score<<endl;  new
        }

        if(Score == 100)
        {
            Sound
            Move = 1; //Smile Sign
            TabM cout<< "\tCongratulation!\n";
            TabM cout<<"\tHighest Score!"<<Move;
            new new
        }

        string again;
        new new new getch();
        TabM cout<<"To Play Again Press-'1'\n";
        TabM cout<<"To Close Press-'Any Key'\n";
        TabM;
        cin>>again;
        new new new
        if(again=="1") continue;
        else goto Start;
    }

    case 7:

    new TabM cout<<" LUDO SNAKE-LADDER GAME"; new new
        while(1)
        {
            int You=0,Com=0;
            int Dice,i,x=0,temp=0;
            new TabM cout<<"Press Any Key on Everytime \n\n";
            Sound

            while(1)
            {
                getch();
                Sound

                for(i=1;i<=2;i++)
                {
                    //getch();
                    temp+=67;
                    temp=temp%100;
                    srand(time(NULL));

                    if(i==1)
                    {
                        Dice=(rand()/2/temp)%6;//jodi randam number 2 khetrei same ache tai vinno songkha dara vag dichi
                        Dice+=1;
                        if(You==0 && Dice!=1) You-=Dice;//'1' sara guti ber hobe na
                        You+=Dice;

                        ///snakes
                        if(You==97)You=12;
                        if(You==63)You=3;
                        if(You==70)You=25;
                        if(You==32)You=13;
                        if(You==60)You=38;
                        if(You==89)You=53;
                        if(You==73)You=47;
                        if(You==82)You=43;


                        ///ladders
                        if(You==8)  You=41;
                        if(You==50) You=93;
                        if(You==6)  You=16;
                        if(You==55) You=80;
                        if(You==59) You=84;
                        if(You==26) You=29;


                       if(You>100) You-=Dice;
                       TabM2 cout<<"Your Possition = "<<You<<"(+"<<Dice<<")"<<"\t";
                       if(You==100)
                            {
                                Sound
                                new new new TabM cout<<"\tCongratulation!";
                                new TabM cout<<"\tYou are Winner.\n";
                                x=1;
                                break;
                            }
                    }

                    if(i==2)
                    {
                        Dice=(rand()/3/temp)%6;//jodi randam number 2 khetrei same ache tai vinno songkha dara vag dichi
                        Dice+=1;
                        if(Com==0 && Dice!=1) Com-=Dice;//'1' sara guti ber hobe na
                        Com+=Dice;

                        ///snakes
                        if(Com==97)Com=12;
                        if(Com==63)Com=3;
                        if(Com==70)Com=25;
                        if(Com==32)Com=13;
                        if(Com==60)Com=38;
                        if(Com==89)Com=53;
                        if(Com==73)Com=47;
                        if(Com==82)Com=43;


                        ///laders
                        if(Com==8)  Com=41;
                        if(Com==50) Com=93;
                        if(Com==6)  Com=16;
                        if(Com==55) Com=80;
                        if(Com==59) Com=84;
                        if(Com==26) Com=29;

                       if(Com>100) Com-=Dice;
                       cout<<"\tComputer Possition = "<<Com<<"(+"<<Dice<<")"<<"\t";
                       if(Com==100)
                        {
                            Sound
                            new new new TabM cout<<"\t\tSorry";
                            new TabM cout<<"\t  You are Loser\n";
                            x=1;
                            break;
                        }
                    }

                }
                if(x==1) break;
                new

            }
            x=0;
            new new new getch();
            TabM cout<<"To Play Again Press-'1'\n";
            TabM cout<<"To goto Menu  Press-'0'\n";
            string again;
            cin>>again;
            if(again=="1") continue;
            else goto Start;

        }

    case 8:

        while(1)
        {
            Sound
            new TabM
            cout<<"LUDU SNAKE-LADDER GAME\n\n";
            cout<<"#Disclaimer: \t\tLudo is Haram Game for Muslim. So you should avoid to play this.\n\n";

                int Number_of_Player;
                TabM cout<<"Number of Player :\t";
                cin>>Number_of_Player;
                if(Number_of_Player<=0) goto Start;

                new TabM3 cout<<"Press Any Key on Everytime \n\n";
                Sound

                int Board[Number_of_Player+1]={0},Temp=0,x=0;
                int Dice,i;

                while(1)
                {
                    ///getch();
                    Temp+=Number_of_Player*(Temp+1)+1;//not so necessary, you can also change 'c' differently
                    Temp=Temp%99;//Minimized size, not so necessary, you can also change 'c' differently

                    for(i=1;i<=Number_of_Player;i++)
                    {
                        Temp+=5;//not so necessary, you can also change 'c' differently
                        getch();
                        srand(time(NULL));

                            Dice=(rand()/(i+1)*i+rand()+Temp*Temp/i)%6;//just for different value of d in same time also,you can also change it differently but '%6' is must nedded
                            Dice+=1;//(0-5)-->(1-6)
                            if(Board[i]==0 && Dice!=1) Board[i]-=Dice;///'1' chara guti ber hobe na
                            Board[i]+=Dice;///position update

                            ///snakes
                            if(Board[i]==97)Board[i]=12;
                            if(Board[i]==63)Board[i]=3;
                            if(Board[i]==70)Board[i]=25;
                            if(Board[i]==32)Board[i]=13;
                            if(Board[i]==60)Board[i]=38;
                            if(Board[i]==89)Board[i]=53;
                            if(Board[i]==73)Board[i]=47;
                            if(Board[i]==82)Board[i]=43;


                            ///ladders
                            if(Board[i]==8)Board[i]=41;
                            if(Board[i]==50)Board[i]=93;
                            if(Board[i]==6)Board[i]=16;
                            if(Board[i]==55)Board[i]=80;
                            if(Board[i]==59)Board[i]=84;
                            if(Board[i]==26)Board[i]=29;


                           if(Board[i]>100) Board[i]-=Dice;///Don't cross 100
                           cout<<"Player-"<<i<<" : "<<Board[i]<<"(+"<<Dice<<")"<<"\t";///Print
                           if(Board[i]==100)///Winner
                                {
                                    cout<<"\a\n\n\n\t\t\t\t\t Congratulation!\n\t\t\t\t\tPlayer "<<i<<" is Winner\n\n\n";
                                    x=1;
                                    break;
                                }


                    }
                    cout<<endl;
                    if(x==1) break;

                }

            x=0;
            new new new getch();
            TabM cout<<"To Play Again Press-'1'\n";
            TabM cout<<"To goto Menu  Press-'0'\n";
            string again;
            cin>>again;
            if(again=="1") continue;
            else goto Start;
        }

    case 9:
        while(1)
        {

            string t1,t2;
            cout<<"Your Team Name    : ";       cin>>t1;
            cout<<"Opposit Team Name : ";       cin>>t2;
            int win=0,lost=0,draw=0;

            int run=0,w=0,b=0,to=0,tp,t,tem,temp;
            char m;
            int n,c,p,over,wick,i;
            cout<<"\t\t\t\t\tOver : ";
            cin>>over;
            if(over<1)
                 return 0;
            cout<<"\t\t\t\t\tWicket : ";
            cin>>wick;
            if(wick<1)  return 0;

            TabM2 cout<<"\nEverytime Press any key from '0' to '6'  :\n\n";

            cout<<"\nBowling  :\n\n";
            while(1)
            {
                b++;
                int prun=run,pw=w;
                tem+=(rand()%100);
                tem=tem%100;
                cin>>m;
                n=m-'0';

                srand(time(NULL));

                t=(rand()+tem)%7;


                if(n==t) {w++;run-=t;}

                run+=t;

                cout<<"\t\t\t\t"<<b/6<<"."<<b%6<<":\t"<<run<<"/"<<w<<"(+"<<run-prun<<"/"<<w-pw<<")"<<endl;
                if(w==wick || b==6*over ) break;


            }
            int orun=run;

            cout<<endl<<t2<<" : "<<run<<"/"<<w<<endl;
            cout<<"\t\t\t\t\ttarget : "<<run+1<<endl<<endl;

             run=0;
             w=0;
             b=0;

            cout<<"\nBatting  :\n\n";

            while(1)
            {
                b++;
                int prun=run,pw=w;
                tem+=(rand()%991);
                tem=tem%100;
                cin>>m;
                n=m-'0';
                if(n>6 || n<0) n=0;

                srand(time(NULL));

                c=(rand()+tem)%100;
                c++;
                if(c<2)p=0;
                else if (c<5)p=1;
                else if (c<12)p=2;
                else if (c<24)p=3;
                else if (c<41)p=4;
                else if (c<71)p=5;
                else p=6;

                if(n==p) {w++;run-=n;}
        //        else if (n%10==c%10) {n=0;}
        //        else if ( n%25==c%p) {n=1;b--;}//wide
        //        else if ( n%225==c%p) {n=5;b--;}//wide & bye-4

                run+=n;

                cout<<"\t\t\t\t"<<b/6<<"."<<b%6<<":\t"<<run<<"/"<<w<<"\t(Need: "<<orun+1-run<<"/"<<wick-w<<"("<<(6*over-b)/6<<"."<<(6*over-b)%6<<")) (+"<<run-prun<<"/"<<w-pw<<")"<<endl;
                if(w==wick || b==6*over || run>orun) break;


            }

            cout<<endl<<t1<<" : "<<run<<"/"<<w<<endl;

            if(run>orun) {win++;cout<<"\t\t\t\tCongratulation! "<<t1<<" is Winner\n";}
            if(run==orun) {draw++;cout<<"\t\t\t\t\tMatch Drawn\n";}
            if(run<orun){lost++; cout<<"\t\t\t\t   Sorry! "<<t2<<" is Winner\n";}



            cout<<endl<<endl;

            new new new getch();
            TabM cout<<"To Play Again Press-'1'\n";
            TabM cout<<"To goto Menu  Press-'0'\n";
            string again;
            cin>>again;
            if(again=="1") continue;
            else goto Start;

            }

    case 10 :
        while(1)
        {
            string t1,t2;
            cout<<"Your Team Name    : ";       cin>>t1;
            cout<<"Opposit Team Name : ";       cin>>t2;

            int win=0,lost=0,draw=0;

            int run=0,w=0,b=0,t,tem,temp;
            char m;
            int n,c,p,over,wick,i;
            cout<<"\t\t\t\t\tOver : ";
            cin>>over;
            if(over<1)
                 return 0;
            cout<<"\t\t\t\t\tWicket : ";
            cin>>wick;
            if(wick<1)  return 0;


            cout<<"\nBatting  :\n\n";

            while(1)
            {
                b++;
                int prun=run,pw=w;
                tem+=(rand()%100);
                tem=tem%100;
                cin>>m;
                n=m-'0';
                if(n>6 || n<0) n=0;

                srand(time(NULL));

                c=(rand()+tem)%100;
                c++;
                if(c<2)p=0;
                else if (c<5)p=1;
                else if (c<12)p=2;
                else if (c<24)p=3;
                else if (c<41)p=4;
                else if (c<71)p=5;
                else p=6;

                if(n==p) {w++;run-=n;}
        //        else if (n%10==c%10) {n=0;}
        //        else if ( n%25==c%p) {n=1;b--;}//wide
        //        else if ( n%225==c%p) {n=5;b--;}//wide & bye-4

                run+=n;

                cout<<"\t\t\t\t"<<b/6<<"."<<b%6<<":\t"<<run<<"/"<<w<<"(+"<<run-prun<<"/"<<w-pw<<")"<<endl;
                if(w==wick || b==6*over ) break;


            }

            int orun=run;
            cout<<endl<<t1<<" : "<<run<<"/"<<w<<endl;

            cout<<"\t\t\t\t\ttarget : "<<run+1<<endl<<endl;

             run=0;
             w=0;
             b=0;

            cout<<"\nBowling  :\n\n";
            while(1)
            {
                b++;
                int prun=run,pw=w;
                tem+=(rand()%100);
                tem=tem%100;
                cin>>m;
                n=m-'0';

                srand(time(NULL));

                t=(rand()+tem)%7;


                if(n==t) {w++;run-=t;}

                run+=t;

                cout<<"\t\t\t\t"<<b/6<<"."<<b%6<<":\t"<<run<<"/"<<w<<"\t(Need: "<<wick-w<<"/"<<orun-run-1<<"("<<(6*over-b)/6<<"."<<(6*over-b)%6<<")) (+"<<run-prun<<"/"<<w-pw<<")"<<endl;
                if(w==wick || b==6*over || run>orun ) break;


            }

            cout<<endl<<t2<<" : "<<run<<"/"<<w<<endl;

            new
            if(run<orun) {win++;cout<<"\t\t\t\tCongratulation! "<<t1<<" is Winner\n";}
            if(run==orun) {draw++;cout<<"\t\t\t\t\tMatch Drawn\n";}
            if(run>orun){lost++; cout<<"\t\t\t\t   Sorry! "<<t2<<" is Winner\n";}

            new new new getch();
            TabM cout<<"To Play Again Press-'1'\n";
            TabM cout<<"To goto Menu  Press-'0'\n";
            string again;
            cin>>again;
            if(again=="1") continue;
            else goto Start;

        }


    case 0:
        cout<<"\t\t\t\t\t\t Program is Closed\n";
        cout<<"\t\t\t\t\t\tJajakallahu Khairan\n\n";
        break;

    default:
        cout<<"\t\t\t\t\t\tError Switching\n\t\t\t\t\t\tProgram is Closed\n";
        cout<<"\t\t\t\t\t\tJajakallahu Khairan\n\n";
        break;
    }

    getch();
    return 0;

}











