#include <bits/stdc++.h>
using namespace std;

// template <typename T>
// string_view type_name() {
//     string_view name = __PRETTY_FUNCTION__;
//     auto start = name.find("T = ") + 4;
//     auto end = name.find_first_of(";", start);
//     return name.substr(start, end - start);
// }

// template<typename T>
// void Tester(T&& param) {
//     cout << "T: " << type_name<T>() << '\n';
//     cout << "Parameter type: " << type_name<decltype(param)>() << '\n';
// }


// void outOFScope(){
//     // cout << bool_cons::value << "";
// }


// using two_t = std::integral_constant<int, 2>;
// using trueType = std::true_type;


namespace mtl {
    template <typename T>
    struct is_pointer {                 // Primary template: any T
        static constexpr bool value = false;
    };
    
    template <typename T>
    struct is_pointer<T*> : std::true_type {};  // Specialization: T*

    void process(int, std::true_type) {
        std::cout << "Processing integer\n";
    }

    void process(double, std::false_type) {
        std::cout << "Processing non-integer\n";
    }

    template<typename T>
    class ADD
    {
    private:
    T s;
    T a;
    public:
        int ad(T x){
            integral_constant<bool, (is_same<int, T> :: value || is_same<float, T> :: value || is_same<double, T> :: value)> c;
            integral_constant<bool, is_same<char, T> :: value> b;
            if(c == true){
                a = a + x;
                cout << a << "\n";
            }
            else if(b){
                s+= x;
                cout << s << '\n';
            }
            else{
                static_assert(c || b, "you can enter a num or a string");
            }
            return a;
        }
    };
    
}

int main() {
    // Tester(43);
    // int b = 0;
    // int a[2];
    // cout << type_name<decltype(a)>() << "\n";
    // integral_constant<int, 'A'> bool_cons;
    // cout << bool_constant.value << "\n";

    // cout <<    bool_constant()  << "\n";

    // cout <<   bool_constant  << "\n";
    // int x = bool_constant;
    
    // bool_cons::value;

    // const int x = 3;
    // static_assert(x);
    // static_assert(trueType :: value);
    // static_assert(two_t::value * 2 <= bool_cons.value);

    // static_assert(mtl::is_pointer<int>::value == false);
    // static_assert(mtl::is_pointer<int*>::value == true);
    // cout << (mtl::is_pointer<int>::value == false) << " " << (mtl::is_pointer<int>::value == false) << "\n";
    mtl::ADD<double> addition1;
    addition1.ad(3);

    mtl::ADD<char> addition2;
    addition2.ad('3');

}