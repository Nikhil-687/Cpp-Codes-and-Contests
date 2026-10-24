#include <bits/stdc++.h>

namespace nik
{
    template<class T>
    bool comp(T a, T b){
        return a > b;
    }
    template<class T, class Compare>
    void nikSort(const T& a, const T& b, Compare comparition){
        if(comparition(a, b)){
            std::cout << "swap " << a << " and " << b << std::endl;
            return ;
        }
        std::cout << "no swap needed" << std::endl;
        return ;
    }

    template<class T>
    void nikSort(const T& a, const T& b, Comp comparition = comp<T>){
        if(comparition(a, b)){
            std::cout << "swap " << a << " and " << b << std::endl;
            return ;
        }
        std::cout << "no swap needed" << std::endl;
        return ;
    }
} // namespace nik

int main() {

    nik::nikSort(3, 2, [](int a, int b){return a > b;});
    nik::nikSort(3, 2);

    return 0;
}