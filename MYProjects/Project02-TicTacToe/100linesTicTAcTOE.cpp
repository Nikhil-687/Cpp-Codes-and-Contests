/*#include<bits/stdc++.h>
using namespace std;

string a = "123456789";
pair<bool,char> check(){
    pair<bool,int> a2;
    a2.first = 0;
    for(int i = 0;i < 3;i++){
        if(a[i*3+1] == a[i*3+2] && a[i*3+0] == a[i*3+2]){
            a2.first = 1;
            a2.second = a[i*3];
            return a2;
        }
    }
    for(int i = 0;i < 3;i++){
        if(a[i] == a[3 + i] && a[i] == a[2*3 + i]){
            a2.first = 1;
            a2.second = a[i];
            return a2;
        }
    }
    if((a[0] == a[4] && a[0] == a[8]) || (a[2] == a[4] && a[4] == a[6])){
        a2.first = 1;
        a2.second = a[4];
        return a2;
    }
    return a2;
}
char move(int x, char k)
{

    if(a[x-1] >= 48 && a[x-1] <= 57){
        a[x-1] = k;
        if(check().first){return check().second;}
        else{
            cout << "\n\n\n";
            cout << "\t\t " << a[0] <<  " | " << a[1] <<  " | " << a[2] <<  " \n";
            // cout << "\t\t " << "  | " << "  |  " <<  " \n";
            cout << "\t\t---+---+---\n";
            //cout << "\t\t " << "  | " << "  |  " <<  " \n";
            cout << "\t\t " << a[3] <<  " | " << a[4] <<  " | " << a[5] <<  " \n";
            //cout << "\t\t " << "  | " << "  |  " <<  " \n";
            cout << "\t\t---+---+---\n";    
            cout << "\t\t " << a[6] <<  " | " << a[7] <<  " | " << a[8] <<  " \n";
            // cout << "\t\t " << "  | " << "  |  " <<  " \n";
            return '0';
        }
    }
    else return '-';
}

int main ()
{
    string n1;
    string n2;
    cout << "Enter the name of first player: ";
    cin >> n1;
    cout << "Enter the name of second player: ";
    cin >> n2;
    char win;
    int i_max = 9;
    for(int i = 1;i <= i_max;i++){
        if(i%2 == 0){
            cout << "You'r turn " << n2 << ": ";
            int x;cin >> x;
            char B = move(x, n2[0]);
            if(B == '-'){
                i_max++;
                cout << n2 <<" your chance is cancelled as box " << x << " is already filled\n";
            }
            else if(B == '0'){  }
            else {
                win = B;
                goto X;
            }
        }
        else{
            cout << "You'r turn " << n1 << ": ";
            int x;cin >> x;char B = move(x, n1[0]);
            if(B == '-'){
                cout << n1 <<" your chance is cancelled as box " << x << " is already filled\n";
                i_max++;
            }
            else if(B == '0'){  }
            else {
                win = B;
                goto X;
            }
        }
    }
    cout << "Game is a DRAW\n";
    X:;
    if(n1[0] == win){
        cout << "Congates, " << n1 <<  " you won the game\n";
    }
    else{
        cout << "Congates, " << n2 <<  " you won the game\n";
    }
}
*/
#include<bits/stdc++.h>
using namespace std;

string a = "123456789";
pair<bool,char> check(){
    pair<bool,int> a2;
    a2.first = 0;
    for(int i = 0;i < 3;i++){
        if(a[i*3+1] == a[i*3+2] && a[i*3+0] == a[i*3+2]){
            a2.first = 1;
            a2.second = a[i*3];
            return a2;
        }
    }
    for(int i = 0;i < 3;i++){
        if(a[i] == a[3 + i] && a[i] == a[2*3 + i]){
            a2.first = 1;
            a2.second = a[i];
            return a2;
        }
    }
    if((a[0] == a[4] && a[0] == a[8]) || (a[2] == a[4] && a[4] == a[6])){
        a2.first = 1;
        a2.second = a[4];
        return a2;
    }
    return a2;
}
char move(int x, char k)
{

    if(a[x-1] >= 48 && a[x-1] <= 57){
        a[x-1] = k;
        if(check().first){return check().second;}
        else{
            cout << "\n\n\n";
            cout << "\t\t " << a[0] <<  " | " << a[1] <<  " | " << a[2] <<  " \n";
            // cout << "\t\t " << "  | " << "  |  " <<  " \n";
            cout << "\t\t---+---+---\n";
            //cout << "\t\t " << "  | " << "  |  " <<  " \n";
            cout << "\t\t " << a[3] <<  " | " << a[4] <<  " | " << a[5] <<  " \n";
            //cout << "\t\t " << "  | " << "  |  " <<  " \n";
            cout << "\t\t---+---+---\n";    
            cout << "\t\t " << a[6] <<  " | " << a[7] <<  " | " << a[8] <<  " \n";
            // cout << "\t\t " << "  | " << "  |  " <<  " \n";
            return '0';
        }
    }
    else return '-';
}

int main ()
{
    string n1;
    string n2;
    cout << "Enter the name of first player: ";
    cin >> n1;
    cout << "Enter the name of second player: ";
    cin >> n2;
    char win;
    int i_max = 9;
    for(int i = 1;i <= i_max;i++){
        if(i%2 == 0){
            cout << "You'r turn " << n2 << ": ";
            int x;cin >> x;
            char B = move(x, n2[0]);
            if(B == '-'){
                i_max++;
                cout << n2 <<" your chance is cancelled as box " << x << " is already filled\n";
            }
            else if(B == '0'){  }
            else {
                win = B;
                goto X;
            }
        }
        else{
            cout << "You'r turn " << n1 << ": ";
            int x;cin >> x;char B = move(x, n1[0]);
            if(B == '-'){
                cout << n1 <<" your chance is cancelled as box " << x << " is already filled\n";
                i_max++;
            }
            else if(B == '0'){  }
            else {
                win = B;
                goto X;
            }
        }
    }
    cout << "Game is a DRAW\n";
    goto Y;
    X:;
    if(n1[0] == win){
        cout << "Congates, " << n1 <<  " you won the game\n";
    }
    else{
        cout << "Congates, " << n2 <<  " you won the game\n";
    }
    Y:;
}