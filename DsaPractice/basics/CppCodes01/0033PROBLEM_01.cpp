 #include<iostream>
 using namespace std;
 int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int count=0; 
    while(n>0){
        int digit=n%10;
        if(digit==1){
            count=count+1;
        }
        n=n/10;
    }
    cout<<"count of 1's is "<<count<<endl;
 }