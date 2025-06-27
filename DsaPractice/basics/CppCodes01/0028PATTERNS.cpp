#include<iostream>
using namespace std;
int main()
{

    int i=1;
    int j=1;
    while (i<8){
        if(j==1)
        {
            cout<<"P ";
            j=j+1;
            i=i+1;
        }
        else if(j==2){
            if(i>1){
                cout<<"R ";
                j=j+1;
                i=i+1;
            }
        }
        else if(j==3){
            if(i>2){
                cout<<"A ";
                j=j+1;
                i=i+1;
            }
        }
        else if(j==4){
            if(i>3){
                cout<<"C ";
                j=j+1;
                i=i+1;
            }
        }
        else if(j==5){
            if(i>4){
                cout<<"T ";
                j=j+1;
                i=i+1;
            }
        }
        else if(j==6){
            if(i>5){
                cout<<"I ";
                j=j+1;
                i=i+1;
            
            }
        }
        else if(j==7){
            if(i>6){
                cout<<"C ";
                j=j+1;
                i=i+1;
            }
        }
        else if(j==8){
            if(i>7){
                cout<<"E ";
                j=j+1;
                i=i+1;
            }
        }
    }
    cout<<"M A K E S"<<endl<<"  A  "<<endl<<"M A N"<<endl;
    int i2=1;
    int j2=1;
    while(i2<7){
        if (j2==1)
        {
            cout<<"P ";
            i2=i2+1;
            j2=j2+1;
        }
        else if(j2==2){
            if(i2<7){
                cout<<"E ";
                i2=i2+1;
                j2=j2+1;
            }
        }
        else if(j2==3){
            if(i2<6){
                cout<<"R ";
                i2=i2+1;
                j2=j2+1;
            }
        }
        else if(j2==4){
            if(i2<5){
                cout<<"F ";
                i2=i2+1;
                j2=j2+1;
            }
        }
        else if(j2==5){
            if(i2<4){
                cout<<"E ";
                i2=i2+1;
                j2=j2+1;
            }
        }
        else if(j2==3){
            if(i2<7){
                cout<<"C ";
                i2=i2+1;
                j2=j2+1;
            }
        }
        else if(j2==7){
            if(i2<2){
                cout<<"T ";
                i2=i2+1;
                j2=j2+1;
            }
        }

    }
}