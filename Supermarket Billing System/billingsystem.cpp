#include <iostream>
#include<string>
#include<cmath>
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
    m:
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

    data.open("database.txt", ios::in)             //open the file in readind mode
    if (!data){                                   //if the file doesn't exist, we then create the file
        data.open("database.txt", ios::app|ios::out);
        data<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<endl;
        data.close()
        }
    else{                                  // but if the file exist, we read from the fle with the variable declared above
        data<<c<<n<<p<<d<<endl;                     // Initializing the index of file

        while (!data.eof()){
            if(c==pcode){
                token++;
            }
            data<<c<<n<<p<<d;
            }

            data.close()
        }
    
    if (token==1)
        {
            menu()
        }
        if (token==1){
            goto m;
        }
        else{
            data.open("database.txt", ios::app|ios::out);
            data<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<endl;
            data.close()
        }
        cout<<"\n\n\t\t\tRecord Inserted!";
    }


void shopping:: edit(){
    fstream data, data1;
    int pkey;
    int token=0;
    int c;
    int p;
    int d;
    string n;

    cout<<"\n\n\t\t\tModify the record";
    cout<<"\n\n\t\t\tProduct code: ";
    cin>>pkey;
    data.open("database.text", ios::in);
    if(!data){
        cout "\nFile doesn't exist";
    }
    else{
        data1.open("database2.txt", ios::app|ios::in);
        data<<pcode<<pname<<price<<dis;
        while (!data.eof())
        {
            if(pkey==pcode){
                cout<<"\n\t\tProduct new code";
                cin<<c;
                cout<<"\n\t\tName of the product";
                cin>>n;
                cout<<"\n\t\tPrice";
                cin>>p;
                cout<<"\n\t\tDiscount";
                cin>>d;
                data1<<" "<<c<<" "<<n<<" "<<p<<" "<<d<<"\n";
                cout<<"Record edited"; 
            }
            else
            {
                data1<<" "<<pcode<<" "<<price<<" "<<dis<<"\n";
            }
            data>>pcode>>pname>>price>>dis;
        }
        data.close();
        data1.close();

        remove("database.txt");
        rename("database1.txt", "database.txt")
        if(token==0){
            cout<<"\n\nSorry! Record not found";
        }
    }
}

void shopping:: rem(){
    fstream data, data1;
    int pkey;
    int token=0;
    cout<<"\n\n\t\t Delete product";
    cout<<"\n\t\t Product code";
    cin>>pkey;
    data.open("database.txt", ios::in);
    if (!data)
    {
        cout<<"\n\tData doesn't exist";
    }
    else
    {
        data1.open("database.txt", ios::app|ios::in);
        data>>pcode>>pname>>price>>dis;

        while(!data.eof()){
            if (pcode==pkey){
                cout<<"\n\n\tProduct deleted successfully";
                token++;
            }
            else
            {
                data<<" "<<pname<<" "<<pcode<<" "<<price<<" "<<disc"\n";
            }
            data>>pcode>>pname>>price>>dis;
        }
        data.close()
        data1.close()
        remove("database.txt");
        rename("database1.txt", "database.txt");

        if(token==0){
            cout<<"\n\t\tRecord Not Found!";
        }
    }
}

void shopping::list(){
    fstraem data;
    data.open("database.txt", ios::in);
    cout<<"\n\n__________________________________________\n";
    cout<<"ProNo\t\tName\t\tPrice";
    cout<<"\n\n__________________________________________\n";
    data>>pcode>>pname>>price>>dis;
    while(!data.eof){
        cout<<pcode<<"\t\t"<<pname<<"\t\t"<<price;
        data>>pcode<<pname<<price<<dis;
    }
    data.close();
}

void shopping::receipt(){
    fstream data;
    int arrc[100];
    int arrq[100];
    char choice;
    int c=0;
    float amount=0;
    float dis=0;
    float total=0;
    cout<<"\n\n\t\t\tRECEIPT";
    data.open("database.txt", ios::in);

    if(!data){
        cout<<"\n\nEmpty Database";
    }
    else
    {
        data.close();
        list();
        cout<<"\n___________________________________\n";
        cout<<"\n|                                  \n";
        cout<<"\n       Place the Order             \n";
        cout<<"\n|                                  \n";
        cout<<"\n___________________________________\n";
        /// run a specific part of the code based repeatedly and another based on the choice 
        do{
            cout<<"\n\nEnter product code";
            cin<<arrc[c];
            cout<<"\n\nEnter the product quantity";
            cin>>arrq[c];
            for
        }
    }
    
}