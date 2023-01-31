#include<iostream>
#include<fstream>
#include<windows.h>
#include<iomanip>
#include<conio.h>
#include<cstring>

using namespace std;

/////function declaration//////

void menu();
void pascode();
void cpascode();

/////////////////////////////   class one ////////////////////////////
class one{
    public:
      virtual void get()=0;
      virtual void show()=0;
}