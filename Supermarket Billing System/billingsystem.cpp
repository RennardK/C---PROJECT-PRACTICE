#include <iostream>
#include <fstream>

using namespace std;

class shopping{
    private:
        int pcode;
        float price;
        float dis;
        string pname;
    public:
        void menu();
        void administrator();
        void buyer();
        void add();
        void edit();
        void remove();
        void list();
        void receipt();
};

void shopping :: menu(){
    int choice;
    string email;
    string password;

    cout<<"\t\t\t\t______________________________\n";
    cout<<"\t\t\t\t                              \n";
    cout<<"        Supermarket Main Menu         \n";
    cout<<"\t\t\t\t                              \n";
    cout<<"\t\t\t\t______________________________\n";

    //////////////Menu where the user has to select whether they are admin or buyer////////////
    cout<<"\t\t\t\t       1) Administrator        |\n";
    cout<<"\t\t\t\t                               |\n";
    cout<<"\t\t\t\t       2) Buyer                |\n";
    cout<<"\t\t\t\t                               |\n";
    cout<<"\t\t\t\t       3) Exit                 |\n";
    cout<<"\t\t\t\t                               |\n\n";
    cout<<"\t\t\t\t Please Select fromm the menu above!\n\n";
    cin>>choice;

    switch (choice)
    {
    case 1:
    // labeladminlogin:
        cout<<"\t\t\t Please log in"<<endl;
        cout<<"\t\t\t Enter email: ";
        cin>>email>>endl;
        cout<<"\t\t\t Enter Password: ";
        cin>>password;

        if (email==robby@gmail.com && password==robby123){
            administrator();
        }
        // else if (email==robby@gmail.com && password!=robby123){
        //     cout<<"Incorrect password";
        //     goto labeladminlogin;
        // }
        // else if (email!=robby@gmail.com && password==robby123)
        // {
        //     cout<<"Invalid email";
        //     goto labeladminlogin
        // }
        else
        {
            cout<<"Invalid login details!"
        }
        break;
    case 2:
        buyer();
        break;

    case 3:
    
    default:
        break;
    }
}