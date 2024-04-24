#include <iostream>
#include <windows.h>
#include <ctime>
#include <string>
#include <stdlib.h>

using namespace std;

int gameheading();
int gameview();
int input();
int logic();
int temp(); 

string ch[51];
int p1=0,num;

 string nm1,nm2;
 
int gameheading()
{
    system("color E");
    cout<<"\n\n";
    cout<<"---------------------------------------------------------------------------------------------------------------------------------------------\n\n";
    cout<<"\t----------------------------------------->          ***   SNACK LEADER GAME    ***         <-----------------------------------\n\n";
    cout<<"----------------------------------------------------------------------------------------------------------------------------------------------\n\n\n";   
}

int gameview()
{ 
    system("color A");
    cout<<"\t\t\t\t\t\t\t\tSnack Leader Game..";
    cout<<"\t\t\t Develop by JAIVIK chauhan.......\n";
    
    cout<<"\t\t\t_____________________________________________________________________________________________________________"<<endl;
    cout<<"\t\t\t|         |          |          |          |          |          |          |          |          |          |\n";  
    cout<<"\t\t\t|         |          |          |          |          |          |          |          |          |          |\n";
    cout<<"\t\t\t|""    "<<"#"<<"    |    "<<ch[42]<<"    |    "<<ch[43]<<"    |    "<<ch[44]<<"    |    "<<ch[45]<<"    |    "<<ch[46]<<"    |    "<<ch[47]<<"    |    "<<"#"<<"     |    "<<ch[49]<<"    |    "<<ch[50]<<"    | \n";
    cout<<"\t\t\t|         |          |          |          |          |          |          |          |          |          |\n";
    cout<<"\t\t\t|_________|__________|__________|__________|__________|__________|__________|__________|__________|__________|"<<endl;

    cout<<"\t\t\t|         |          |          |          |          |          |          |          |          |          |\n";  
    cout<<"\t\t\t|         |          |          |          |          |          |          |          |          |          |\n";
    cout<<"\t\t\t|""    "<<ch[40]<<"   |    "<<ch[39]<<"    |    "<<ch[38]<<"    |    "<<ch[37]<<"    |    "<<ch[36]<<"    |    "<<"#"<<"     |    "<<ch[34]<<"    |    "<<ch[33]<<"    |    "<<ch[32]<<"    |    "<<ch[31]<<"    | \n";
    cout<<"\t\t\t|         |          |          |          |          |          |          |          |          |          |\n";
    cout<<"\t\t\t|_________|__________|__________|__________|__________|__________|__________|__________|__________|__________|"<<endl;

    cout<<"\t\t\t|         |          |          |          |          |          |          |          |          |          |\n";  
    cout<<"\t\t\t|         |          |          |          |          |          |          |          |          |          |\n";
    cout<<"\t\t\t|""    "<<ch[21]<<"   |    "<<ch[22]<<"    |    "<<ch[23]<<"    |    "<<ch[24]<<"    |    "<<ch[25]<<"    |    "<<ch[26]<<"    |    "<<"#"<<"     |    "<<ch[28]<<"    |    "<<ch[29]<<"    |    "<<ch[30]<<"    | \n";
    cout<<"\t\t\t|         |          |          |          |          |          |          |          |          |          |\n";
    cout<<"\t\t\t|_________|__________|__________|__________|__________|__________|__________|__________|__________|__________|"<<endl;


    cout<<"\t\t\t|         |          |          |          |          |          |          |          |          |          |\n";  
    cout<<"\t\t\t|         |          |          |          |          |          |          |          |          |          |\n";
    cout<<"\t\t\t|""    "<<ch[20]<<"   |    "<<ch[19]<<"    |     " <<"#"<<"    |    "<<ch[17]<<"    |    "<<ch[16]<<"    |    "<<ch[15]<<"    |    "<<ch[14]<< "    |    "<<ch[13]<< "    |    "<<ch[12]<< "    |    "<<ch[11]<< "    | \n";
    cout<<"\t\t\t|         |          |          |          |          |          |          |          |          |          |\n";
    cout<<"\t\t\t|_________|__________|__________|__________|__________|__________|__________|__________|__________|__________|"<<endl;

    cout<<"\t\t\t|         |          |          |          |          |          |          |          |          |          |\n";  
    cout<<"\t\t\t|         |          |          |          |          |          |          |          |          |          |\n";
    cout<<"\t\t\t|""    "<<ch[1]<<"    |    "<<ch[2]<<"     |    "<<ch[3]<<"     |    "<<ch[4]<<"     |    "<<ch[5]<<"     |    "<<ch[6]<<"     |     "<<ch[7]<<"    |     "<<ch[8]<<"    |     "<<ch[9]<<"    |    "<<"#"<<"     | \n";
    cout<<"\t\t\t|         |          |          |          |          |          |          |          |          |          |\n";
    cout<<"\t\t\t|_________|__________|__________|__________|__________|__________|__________|__________|__________|__________|"<<endl;
    
    cout<<"\n\n\t\t\t\t"<<nm1<<"\t\t\t\t\t\t\t\t\t\t"<<nm2;
    cout<<"\n\n";
    
} 

int input()
{
    cout<<"\n\nenter 1st player name :- ";
    cin>>nm1;
    cout<<"\nenter 2nd player name :- ";
    cin>>nm2;

}

int logic()
{   
   while(p1 != 50)
   {
   srand(time (NULL));
   num = 1 + rand() % 60;
   num=num/10;
   if(num==0) 
    num=6;
   

      for(int i=0 ; i<=50 ; i++)
    {
        ch[i]=to_string(i);
    }
  
        system("CLS");
        gameview();
        std::cout << "\n\t\t--->  ganerating a random a Number ";
        Sleep(500);
        std::cout << " .";
          Sleep(500);
        std::cout << " .";
          Sleep(500);
        std::cout << " .";
          Sleep(500);
        std::cout << " .";
        std::cout<< "\n\n\t\t\tNumber = ";
        //Sleep(3000);
        std::cout << num;
        Sleep(1000);
       temp();
    
   }
}

int temp()
{
    char c1=6;
      for(int j=0 ; j<num ; j++)
    {
        for(int i=0 ; i<=50 ; i++)
    {
        ch[i]=to_string(i);
    }

        ch[++p1]=c1;
        c1;
        Sleep(500);
        system("CLS");
        gameview();
        Sleep(500);
      
    }
   
   if(p1 == 18 || p1==27 || p1== 35 || p1 == 41 || p1==48)
    {
        system("CLS");
    for(int i=0 ; i<=50 ; i++)
    {
        ch[i]=to_string(i);
    }
        p1=0;
        gameview();
    }
}

int main()
{
    gameheading();
    input();
    logic();
   // gameview();
    return 0;
}