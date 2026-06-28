#include <bits/stdc++.h>
using namespace std;
 
vector<char> sort57(char start = 'A'){
    int n = 5;
    vector<char> a(5);
        char x;

        for(int i = 0;i < n;i++){
            a[i] = i+start;
        }
        cout << "? " << a[0] << " " << a[1] << "\n";
        cin >> x;
        if('>' == x){
            swap(a[0], a[1]);
        }

        cout << "? " << a[0] << " " << a[2] << "\n";
        cin >> x;
        if('>' == x){
            a[2] = a[1];
            a[1] = a[0];
            a[0] = 'C';
        }

        cout << "? " << a[3] << " " << a[4] << "\n";
        cin >> x;
        if('>' == x){
            swap(a[3], a[4]);
        }

        vector<char> b, c;
        b.push_back(a[0]);
        b.push_back(a[1]);
        b.push_back(a[2]);
        c.push_back(a[3]);
        c.push_back(a[4]);

        int i, j, k = 0;
        for(i = 0, j = 0;i < 3 && j < 2;){
            cout << "? " << b[i] << " " << c[j] << "\n";
            cin >> x;
            if('>' == x){
                a[k] = c[j];
                j++;
                k++;
            }
            else{
                a[k] = b[i];
                i++;k++;
            }
        }

    return a;
}

vector<char> sortSorted(vector<char> a, vector<char> b){
    vector<char> ch;
    int l = 0, m = 0;
    char x;
    for(; l < (int)a.size() && m < (int)b.size();){
        cout << "? " << a[l] << " " << b[m] << "\n";
        cin >> x;
        if('>' == x){
            ch.push_back(b[m]);
            m++;
        }
        else{
            ch.push_back(a[l]);
            l++;
        }
    }
    for(;l < (int)a.size();l++){
        ch.push_back(a[l]);
    }
    for(;m < (int)b.size();m++){
        ch.push_back(b[m]);
    }
    return ch;
}

int main() {
    int t = 1;
    // cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<char> a(n);

        for(int i = 0;i < n;i++){
            a[i] = i+'A';
        }


        if(n == 5){
            vector<char> s = sort57('A');
            cout << "! ";
            for(int i = 0;i < 5;i++){
                cout << s[i];
            }
            cout << "\n";
        }
        else{
            for(int i = 0;i < 25;i+=5){
                vector<char> s = sort57('A' + i);
                for(int j = 0;j < 5;j++){
                    a[i+j] = s[j];
                }
            }

            vector<char> b, c, d;
            for(int i = 0;i < 5;i++)
            b.push_back(a[i]);
            for(int i = 5;i < 10;i++)
            c.push_back(a[i]);
            d = sortSorted(b, c);

            for(int i = 0;i < 10;i++){
                a[i] = d[i];
            }

            b.resize(0);
            c.resize(0);
            for(int i = 10;i < 15;i++)
            b.push_back(a[i]);
            for(int i = 15;i < 20;i++)
            c.push_back(a[i]);
            d = sortSorted(b, c);

            for(int i = 10;i < 20;i++){
                a[i] = d[i];
            }

            b.resize(0);
            c.resize(0);

            for(int i = 20;i < 25;i++)
            b.push_back(a[i]);

            c.push_back(a[25]);
            d = sortSorted(b, c);

            for(int i = 20;i <= 25;i++){
                a[i] = d[i];
            }



            b.resize(0);
            c.resize(0);

            for(int i = 0;i < 10;i++)
            b.push_back(a[i]);
            for(int i = 10;i < 20;i++)
            c.push_back(a[i]);
            d = sortSorted(b, c);

            for(int i = 0;i < 20;i++){
                a[i] = d[i];
            }

            b.resize(0);
            c.resize(0);

            for(int i = 0;i < 20;i++)
            b.push_back(a[i]);
            for(int i = 20;i < 26;i++)
            c.push_back(a[i]);
            d = sortSorted(b, c);

            for(int i = 0;i < 26;i++){
                a[i] = d[i];
            }

            cout << "! ";
            for(int i = 0;i < 26;i++){
                cout << a[i];
            }
            cout << "\n";

        }

    }
    
    return 0;
}