# Documentations

remember a time when taking a input is longer than actual solution
I'have tried solving this perticular issue

this is a minimal script written considering longer inputs, better memory usage, keeping minimal time investment

` there is a very easy syntax rules for using this script `

# step 1: Import
```
#include<streamOut.hpp>
// not included in standard so you can copy in your local machine with this name
```

# step 2: Use it as follow
## single integer variable
```
n(int)
```
## single char variable
```
n(char)
```
## single string variable
```
n(string)
//remember you have string library imported
```
## vector<int> , requires inital size
```
a(vector<int>)[n]
// any thing in [] is read as size for the array.
```


# {} => Gient player
## 1 when follow a space ' ' it is treated as a object, a group whose whole could be repeated 
```
for eg:
t(int) {n(int) a[n](vector<int>)}[t]
```
we consider a while loop 
```
int t, x; //(not in any token even in future)
cin >> t;
x = 0;
while(x < t){
    int n;
    cin >> n;
    vector<int> a(n);
    int x = 0;
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    x++;
}
```

## 2 when it is with a variable
```
for eg:
n(int) a[n](vector<int>){//xyz}
```

xyz is a code block or function name which is executed on every a[i]

```
for eg:
n(int) a[n](vector<int>){
    if(a%2 == 0){cout << "Even\n";}
    else cout << "Odd\n";
}
```