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
        void rem();
        void list();
        void receipt();
};

void shopping :: menu(){
    m:

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
            cout<<"Invalid email/password!"
        }
        break;
    case 2:
        buyer();
        break;

    case 3:
        exit(0);
    default:
        cout<<"Please select form the given options!";
        break;
    }
goto m;
}

void shopping:: administrator(){
    m:
    int choice;
    cout<<"\n\n\n\t\t Administrator Menu";
    cout<<"\n\t\t\t______1) Add product_____";
    cout<<"\n\t\t\t                         ";
    cout<<"\n\t\t\t______2) Modify product__";
    cout<<"\n\t\t\t                         "; 
    cout<<"\n\t\t\t______3) Delete product__";
    cout<<"\n\t\t\t                         ";
    cout<<"\n\t\t\t______4) Back to Main Menu";

    cout<<"\n\n\tPlease enter your choice";
    switch (choice)
    {
    case 1:
        add();
        break;
    case 2:
        edit();
        break;
    case 3:
        rem();
        break;
    case 4:
        menu();
        break;
    default:
        cout<<"Invalid choice"<<endl;
        break;
    }
goto m;
}

void shopping::buyer{
    m:
    int choice;
    cout<<"\t\t\t     Buyer    \n";
    cout<<"\t\t\t______________\n";
    cout<<"                    \n";
    cout<<"\t\t\t 1) Buy Product\n";
    cout<<"                    \n";
    cout<<"\t\t\t 2) Go Back   \n";
    cout<<"                    \n";
    cout<<"Enter your choice   \n";
    cin>>choice;

    switch (choice)
    {
    case 1:
        receipt();
        break;
    case 2:
        menu();
        break;
    default:
        cout<<"Invalid choice";
        break;
    }
goto m;
}

void shopping :: add(){
    fstream data;
    int c;
    int token=0;
    float p;
    float d;
    string n;

    cout<<"\n\n\t\t\t  Add new product";
    cout<<"\n\t\t\t Product code of the Product: ";
    cin>>pcode;
    cout<<"\n\t\t\tName of the Product";
    cin>>pname;
    cout<<"\n\t\t\tPrice of the Product";
    cin>>price;
    cout<<"\n\t\t\tDiscount on the Product";
    cin>>dis;

    data.open("database.txt", ios::in)
    if (!data){ ///if the file doesn't exist, we then create the file
        data.open("database.txt", ios::app|ios::out){
            data<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<endl;
            data.close()
        }
    else{ // but if the file exist, we read from the fle with the variable declared above
        data<<c<<n<<p<<d<<endl; // Initializing the index of file

    }
    }
}