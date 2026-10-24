// Complete the timeConversion function. It must return a new string representing the input time in 24-hour format.timeConversion has the following parameter(s):string s: a time in 12-hour clock format
// Returns:string: the time in 24-hour format
// Input FormatA single string s that represents a time in 12-hour clock format (i.e., hh:mm:ssAM or hh:mm:ssPM).Constraints:All input times are valid.


#include<iostream>
#include<string>
#include<sstream>
using namespace std; 

int main() {
    string s1, s2, s3;
    getline(cin, s1, ':');
    getline(cin, s2, ':');
    getline(cin, s3, '\n');
    
    // if AM
    if(s3[2] == 'A'){
        cout << s1 << ":" << s2 << ":";
        // s3 also contains AM/PM so printing only first 2 letter which resemble seconds.
        cout << s3[0] << s3[1] << "\n" ;
    }
    // if PM
    else{
        // if hour < 10
        if(s1.size() == 1){
            // increasing hours by 12 to settle PM
            cout << ((int)s1[0] - '0' + 12) << ":" << s2 << ":" << s3[0] << s3[1] << "\n" ;
        }
        // if hour is amoung [10, 11]
        else{
            if(s1[1] == '0'){
                cout << 22;
            }
            if(s1[1] == '1'){
                cout << 23;
            }
            cout << ":" << s2 << ":" << s3[0] << s3[1] << "\n";
        }
    }
    return 0;
}