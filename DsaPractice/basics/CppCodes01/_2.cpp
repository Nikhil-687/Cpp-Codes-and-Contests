#include<iostream>
using namespace std;
int main()
{

    cout<<endl<<endl<<endl<<"A SIGN UP/IN "<<endl<<"-------------"<<endl<<"A SIGN UP/IN "<<endl<<"_____________"<<endl;
    cout<<endl<<endl;
    string name;
    string user_name;
    string E_name;
    int age;
    int E_age;
    string B_day;
    string E_B_day;
    long long mob_no;
    long long E_mob_no;
    string gender;
    string E_gender;
    string adress;
    string E_adress;
    string password;
    string re_password;
    string E_password;
    string re_E_password;
    string New_password;
    string re_New_password;
    string password_conf;
    int counter =1;
    char ch;
    char fail;
    string Hint;
    string E_hint;
    string E_hint_2;
    string secreat;
    char option_edit_con;
    int n;
    cout<<"You are diarected to sign up window"<<endl;
    cout<<"01. Can I know your name please "<<endl;
    cin>>name;
    cout<<"02. Enter your age pls"<<endl;
    cin>>age;
    cout<<"03. select your gender pls"<<endl;
    cin>>gender;
    if(gender == "male"){
        cout<<"04. Sir your mobile number pls"<<endl;
        cin>>mob_no;
        cout<<"05. Sir, You'r birth date is "<<endl;
        cin>>B_day;
        cout<<"06. You'r adress is to stored as:"<<endl;
        cin>>adress;
        cout<<"07. Enter your password "<<endl;
        cin>>password;
        cout<<"08. Hint:"<<endl;
        cin>>Hint;
        cout<<endl<<endl<<endl<<endl;
        cout<<"Here is confirmation window for you Please cheack it wisely :"<<endl<<endl;
        cout<<"Sir,"<<endl<<"  You'r Name is :"<<name<<endl<<"  You'r Birth Day is: "<<B_day<<endl<<"  You'r adress is: "<<adress<<endl;
        cout<<"  Strick 'C' to continue ,"<<endl<<"  Strick 'E' to edit the info ";
        cin>>option_edit_con;
        if(option_edit_con == 'C' ){
            cout<<"you will have to reenter you'r password once "<<endl;
            cin>>re_password;
            if(password == re_password){
                cout<<"you can save a secreate of your's it will be fully safe also not read read by us also "<<endl;
                cin>>secreat;
                cout<<"you are now safly savved your secreat and only be accesed by you after loging in this page again";
            }
        }
        else if(option_edit_con == 'E'){
            cout<<"Sir, "<<endl<<"  you will have to enter the number corresponding to the que which you want to change ";
            cin>>n;
            if(n==1){
                cout<<"enter you'r password to proceed ";
                cin>>password_conf;
                if(password == password_conf){
                    cout<<"you'r name is";
                    cin>>E_name;
                }

            }
            else if(n==2){
                cout<<"enter you'r password to proceed ";
                cin>>password_conf;
                if(password == password_conf){
                    cout<<"you'r age is";
                    cin>>E_age;
                }

            }
            else if(n==3){
                cout<<"enter you'r password to proceed ";
                cin>>password_conf;
                if(password == password_conf){
                    cout<<"you'r gender is";
                    cin>>E_gender;
                }

            }
            else if(n==4){
                cout<<"enter you'r password to proceed ";
                cin>>password_conf;
                if(password == password_conf){
                    cout<<"you'r contact number is";
                    cin>>E_mob_no;
                }
            }
            else if(n==5){
                cout<<"enter you'r password to proceed ";
                cin>>password_conf;
                if(password == password_conf){
                    cout<<"you'r birth day is";
                    cin>>E_B_day;
                }
            }
            else if(n==6){
                cout<<"enter you'r password to proceed ";
                cin>>password_conf;
                if(password == password_conf){
                    cout<<"you'r adress is";
                    cin>>E_adress;
                }
            }
            else if(n==8){
                cout<<"enter you'r password to proceed ";
                cin>>password_conf;
                if(password == password_conf){
                    cout<<"you'r Hint is";
                    cin>>E_hint;
                }
            }
            else if(n==7){
                cout<<"enter your name to procide";
                cin>>E_name;
                if(E_name == name){
                    cout<<"enter your user name to edit your password and Hint ";
                    cin>>E_hint;
                    if(E_hint == Hint){
                        cout<<"your Edited password is";
                        cin>>E_password;
                        cout<<"enter new hint ";
                        cin>>E_hint_2; 

                    }
                }
            }
        }
    }
    else if(gender =="female"){
        cout<<"ma'am you'r contact number please"<<endl;
        cin>>mob_no;
        cout<<"Ma'am, You'r birth year is "<<endl;
        cin>>B_day;
    }
    else{
        cout<<"You'r number please "<<endl;
        cin>>mob_no;
    }

}