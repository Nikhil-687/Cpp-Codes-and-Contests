#include <iostream>
using namespace std;


int fun(auto a){
    // cout << a << " ";
    for(auto i : a)cout << i << " ";cout << "\n";
    return 0;
}


initializer_list<int> xyz(){
    return {1,2,3};
}


template<typename T>
class Stack{};

template<typename Container, typename Index>
auto authAndAccess(Container& c, Index i)
-> decltype(c[i])
{
authenticateUser();
return c[i];
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // int t;
    // cin >> t;
    // while (t--) {
    //     int n;
    //     cin >> n;
    //     vi a(n);
    //     for (int i = 0; i < n; i++) {
    //         cin >> a[i];
    //     }

    // auto z = [](auto& x){
    // for(auto i : x)cout << i << " ";cout << "\n";
        
    //     return 0;
    // };

    //     // auto x(43);
    //     // cout << x << '\n';
    //     auto a = {32};
    //     // fun(a);
    //     z(a);
    //     fun(a);
    //     initializer_list<int> y = xyz();
    //     for(auto i : y)cout << i << " ";cout << "\n";
    // // }
    
    // return 0;

    Stack<int> a;
}