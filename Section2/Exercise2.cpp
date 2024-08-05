#include <iostream>
#include <tchar.h>

int main(){

    _tsetlocale(LC_ALL, _T("portuguese"));

    std::cout << "Vou" << std::endl;
    std::cout << "aprender" << std::endl;
    std::cout << "a" << std::endl;
    std::cout << "programar" << std::endl;
    std::cout << "na" << std::endl;
    std::cout << "linguagem" << std::endl;
    std::cout << "C++" << std::endl << std::endl;

    std::cout << "Vou\naprender\na\nprogramar\nna\nlinguagem\nC++\n";

    return 0;
}