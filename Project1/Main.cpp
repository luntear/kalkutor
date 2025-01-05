#include <iostream>
int dzielenie(int x, int y, int c);

int main()
{
    
    std::cout << "Podaj dwie liczby i symbol działania po spacji" << std::endl;
    int x = 0;
    int z = 0;
    char y = '1';
    int obliczenia = 0;

    std::cin >> x >> y;
    dziel0:
    std::cin >> z;
    switch(y)
    {
        case'+':
            obliczenia = x + z;
            break;
        case '-':
            obliczenia = x - z;
            break;
        case'*':
            obliczenia = x * z;
            break;
        case'/':
            if (z!= 0) {
                obliczenia = x / z;
            }
            else {
                std::cout << "niemozna dzielic przez 0,podaj ponownie druga liczbe: ";
                goto dziel0;
            }
            break;           
    }if (z != 0) {
        std::cout << "wynik twojego działania to:" << obliczenia;
    }

    return 0;

}
/*int dzielenie(int x, int y, int c)
{

    c = x / y;
    int asd = 6;
    int asd2 = 2;
    int asd3 = 0;
    std::cin >> asd; "\n";
    std::cout << "asdasd" << std::endl;

    std::cin >> asd2;
    c = dzielenie(x, y, c);
    std::cout << asd3;
    std::cout << "to x " << x << "to y" << y;

    std::cout << "Hello World!" << c << std::endl;
    std::cout << "test" << std::endl;
    return c;

}
*/