#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<iomanip.h>
int flag=0;
void main()
{
	cout<<"#############"<<"  WELCOME TO THE QUIZ SHOW  BY DIKKU"<<"*************"<<endl;
   cout<<endl<<setw(20)<<setfill('-');
   cout<<"press any key"<<endl;
   getch();

   cout<<endl<<"---------##MENU##---------"<<endl;
   cout<<endl<<">>PRESS S,THEN ENTER KEY TO play THE QUIZ"<<endl<<">>PRESS Q, THEN ENTER KEY TO EXIT THE GAME"<<endl;
   char z;
   cin>>z;
   if(z=='q')
   {
   	exit(0);
   }
   else
   {
      cout<<endl<<endl<<"1)RAFAEL NADAL IS THE POPULAR PLAYER ASSOCIATED WITH WHICH GAME?"<<endl;
      cout<<setw(50)<<"-"<<endl;
      cout<<endl<<"1)CRICKET     2)FOOTBALL"<<endl<<"3)LAWN TENNIS    4)GOLF";
      cout<<endl<<"ANS:";
      int a;
      cin>>a;
      if(a==1||a==2||a==4)
      {
      	cout<<"WRONG ANSWER   :("<<endl;
         cout<<"GAME OVER"<<endl<<"YOUR TOTAL POINTS="<<flag;
         getch();
         exit(0);
      }
      if(a==3)
      {
      	cout<<"CORRECT ANSWER  :)"<<endl;
         flag++;
         cout<<endl<<"                  PRESS ENTER FOR NEXT QUESTION"<<endl;
         getch();
      }
      cout<<endl<<"2)WHICH ACID IS FOUND IN LEMON?"<<endl;
      cout<<setw(50)<<"-"<<endl;
      cout<<endl<<"1)NITRIC ACID     2)CITRIC ACID"<<endl<<"3)HCL   4)TARTARIC ACID";
      cout<<endl<<"ANS:";
      int b;
      cin>>b;
      if(b==1||b==3||b==4)
      {
         cout<<"WRONG ANSWER  :("<<endl;
         cout<<"GAME OVER"<<endl<<"YOUR TOTAL POINTS="<<flag;
         getch();
         exit(0);
      }
      if(b==2)
      {
      	cout<<"CORRECT ANSWER  :)"<<endl;
         flag++;
         cout<<"PRESS ENTER FOR NEXT QUESTION";
         getch();
      }
      cout<<endl<<"3)WHAT IS THE SCIENTIFIC NAME OF FROG?"<<endl;
      cout<<setw(50)<<"-"<<endl;
      cout<<endl<<"1)HOMO SEPIANS     2)BALISTROMA"<<endl<<"3)RANA TIGRINA   4)LETIMONA";
      cout<<endl<<"ANS:";
      int c;
      cin>>c;
      if(c==1||c==2||c==4)
      {
         cout<<"WRONG ANSWER"<<endl;
         cout<<"GAME OVER"<<endl<<"YOUR TOTAL POINTS="<<flag;
         getch();
         exit(0);
      }
      if(c==3)
      {
      	cout<<"CORRECT ANSWER"<<endl;
         flag++;
         cout<<"PRESS ENTER FOR NEXT QUESTION";
         getch();
      }
      cout<<endl<<"4)WHO IS THE WRITER OF NOBEL 'HAMLET'?"<<endl;
      cout<<setw(50)<<"-"<<endl;
      cout<<endl<<"1)RABINDRA NATH TAGORE     2)SHAKESPEAR"<<endl<<"3)LEOTOLOSTOY   4)LENNNIN";
      cout<<endl<<"ANS:";
      int d;
      cin>>d;
      if(d==1||d==3||d==4)
      {
         cout<<"WRONG ANSWER"<<endl;
         cout<<"GAME OVER"<<endl<<"YOUR TOTAL POINTS="<<flag;
         getch();
         exit(0);
      }
      if(d==2)
      {
      	cout<<"CORRECT ANSWER"<<endl;
         flag++;
         cout<<"PRESS ENTER FOR NEXT QUESTION";
         getch();
      }
      cout<<endl<<"5)IN WHICH MONTH GTA V WAS OFFICIALY LAUNCHED?"<<endl;
      cout<<setw(50)<<"-"<<endl;
      cout<<endl<<"1)SEPTEMBER     2)OCTOBER"<<endl<<"3)AUGUST   4)JULY";
      cout<<endl<<"ANS:";
      int e;
      cin>>e;
      if(e==2||e==3||e==4)
      {
         cout<<"WRONG ANSWER"<<endl;
         cout<<"GAME OVER"<<endl<<"YOUR TOTAL POINTS="<<flag;
         getch();
         exit(0);
      }
      if(e==1)
      {
      	cout<<"CORRECT ANSWER"<<endl;
         flag++;
         cout<<"PRESS ENTER FOR NEXT QUESTION";
         getch();
      }
       cout<<endl<<"6)STEVEN GERRAD,THE FAMOUS ENGLISH FOOTBALLER IS  ASSOCIATED WITH WHICH FOOTBALL CLUB?"<<endl;
      cout<<setw(50)<<"-"<<endl;
      cout<<endl<<"1)LIVERPOOL     2)MANCHESTER UNITED"<<endl<<"3)REAL MADRID   4)ARSENAL";
      cout<<endl<<"ANS:";
      int f;
      cin>>f;
      if(f==2||f==3||f==4)
      {
         cout<<"WRONG ANSWER"<<endl;
         cout<<"GAME OVER"<<endl<<"YOUR TOTAL POINTS="<<flag;
         getch();
         exit(0);
      }
      if(f==1)
      {
      	cout<<"CORRECT ANSWER"<<endl;
         flag++;
         cout<<"PRESS ENTER FOR NEXT QUESTION";
         getch();
      cout<<endl<<endl<<"GAME OVER "<<endl<<endl<<"YOUR TOTAL SCORE IS "<<flag<<endl<<"THANK YOU FOR PLAYING";
   }
   }

   getch();
}
