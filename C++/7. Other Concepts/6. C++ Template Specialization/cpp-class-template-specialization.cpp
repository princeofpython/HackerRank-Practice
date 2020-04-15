#include <iostream>
using namespace std;
enum class Fruit { apple, orange, pear };
enum class Color { red, green, orange };

template <typename T> struct Traits;

template<>
struct Traits<Fruit>{
    static string name(int index){
        return (index == (int)Fruit::apple) ? "apple" :
               (index == (int)Fruit::orange) ? "orange" :
               (index == (int)Fruit::pear) ? "pear" : "unknown" ;
    }
};
template<>
struct Traits<Color>{
    static string name(int index){
        return (index == (int)Color::red) ? "red" :
               (index == (int)Color::green) ? "green" :
               (index == (int)Color::orange) ? "orange" : "unknown" ;
    }
};

int main()
{
	int t = 0; std::cin >> t;

    for (int i=0; i!=t; ++i) {
        int index1; std::cin >> index1;
        int index2; std::cin >> index2;
        cout << Traits<Color>::name(index1) << " ";
        cout << Traits<Fruit>::name(index2) << "\n";
    }
}
