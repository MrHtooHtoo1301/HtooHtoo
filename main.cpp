#include <iostream>
using std::cout;
namespace first {
    std::string  Kyaw_Zin= "1 YEARS and 4 MONTHS";
}
namespace second {
    std::string Kyaw_Zin= "20 YEARS";
}
typedef std::string S;
int main() {

    S name = "Kyaw Zin";
    S girlfriend = "Htoo Lae Win";
    cout << girlfriend << " is the girlfriend of " << name << " for "<< first::Kyaw_Zin << ".";


    return 0;

}
