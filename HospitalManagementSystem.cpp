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
};

class info: public one{
    public:
       char name[50], time[50];
       int num, age;
       void get(){
            system("cls"); // clears everything on the console and leaves a plain console for print 
            cin.sync() // discards all unread characters from the input buffer(a temporary storage area)

            cout<<"\nEnter the patient's name: ";
            cin.getline(name, 50);
            cout<<"\nEnter the appointment time: ";
            cin.getline(time, 50);
            cout<<"\nEnter age: ";
            cin>>age;
            cout<<"\nEnter appointment number: ";
            cin>>num;
       }
       void show(){
                cout<<"\nName: "<<name;
                cout<<"\nAge: "<<age;
                cout<<"\nNo: "<<num;
                cout<<"\nTime: "<<time;
       }
};

///////////////////////////////////// CLASS RANA /////////////////////////////

class rana: public info {
    public:
        info a1;
        void get(){
            system("cls");
            ofstream out("Rana.txt", ios::app|ios::binary)
            ai.get()
            out.write((char*)&a1 sizeof(info));
            out.close();
            cout<<"Your entry has been saved";
            getch();
            menu();
        }
        void show(){
            ifstream in("rana.txt");
            if (in==Null)
            {
                cout<<"\n\n No Data in the File.";
                cout<<"\n\n\t\t Press Any Key to continue: ";
                getch();
                menu();
            }
            else{
                while (!in.eof()){
                in.read((char*)&a1,sizeof(a1));
                a1.show();
                }
                in.close();
                getch();
                menu();
            }
        }
};

/////////////////////////////////    class    Dr. Waqar //////////////////////////

class waqar: public info{
    public:
        info a1;
        void get(){
            system("cls");
            ofstream out("Rana.txt", ios::app|ios::binary)
            ai.get()
            out.write((char*)&a1 sizeof(info));
            out.close();
            cout<<"Your entry has been saved";
            getch();
            menu();
        }
        void show(){
            ifstream in("rana.txt");
            if (in==Null)
            {
                cout<<"\n\n No Data in the File.";
                cout<<"\n\n\t\t Press Any Key to continue: ";
                getch();
                menu();
            }
            else{
                while (!in.eof()){
                in.read((char*)&a1,sizeof(a1));
                a1.show();
                }
                in.close();
                getch();
                menu();
            }
        }
};

////////////// class Dr. Ahmad //////////////////////////

class Ahmad: public info{
    public:
        info a1;
        void get(){
            system("cls");
            ofstream out("Rana.txt", ios::app|ios::binary)
            ai.get()
            out.write((char*)&a1 sizeof(info));
            out.close();
            cout<<"Your entry has been saved";
            getch();
            menu();
        }
        void show(){
            ifstream in("rana.txt");
            if (in==Null)
            {
                cout<<"\n\n No Data in the File.";
                cout<<"\n\n\t\t Press Any Key to continue: ";
                getch();
                menu();
            }
            else{
                while (!in.eof()){
                in.read((char*)&a1,sizeof(a1));
                a1.show();
                }
                in.close();
                getch();
                menu();
            }
        }
};

//////////////////////////////// class staff ///////////////////////

class staff: public one{
    public:
        info a1;
        void get(){
            system("cls");
            ofstream out("Rana.txt", ios::app|ios::binary)
            ai.get()
            out.write((char*)&a1 sizeof(info));
            out.close();
            cout<<"Your entry has been saved";
            getch();
            menu();
        }
        void show(){
            ifstream in("rana.txt");
            if (in==Null)
            {
                cout<<"\n\n No Data in the File.";
                cout<<"\n\n\t\t Press Any Key to continue: ";
                getch();
                menu();
            }
            else{
                while (!in.eof()){
                in.read((char*)&a1,sizeof(a1));
                a1.show();
                }
                in.close();
                getch();
                menu();
            }
        }
};