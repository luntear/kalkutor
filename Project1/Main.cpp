#include <iostream>

//zrob to na funkcje i od poczatku zobacz na pulla requesta 
// zrob menu do wyboru funkcji 
// nieskonczona pentla chyba ze z 

int main()
{
    
    std::cout << "Podaj dwie liczby i symbol działania po spacji" << std::endl;
    int x ;
    int z ;
    char y ;
    int obliczenia ;
poczatek:
  
    x = 0;
    z = 0;
    y = '1';
    obliczenia = 0;
    std::cin >> x >> y;
    dziel0:
    std::cin >> z;
    if (y =='1') { goto koniec; }
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
                std::cout << "niemozna dzielic przez 0,podaj ponownie druga liczbe:";
                goto dziel0;
            }
            break;     
        case'z':
            goto koniec;
    }if (z != 0) {
        std::cout << "wynik twojego działania to:" << obliczenia << std::endl;
        std::cout << "Jeżeli chcesz kontynuoowac podaj kolejne dwie liczby wraz ze znakiem dzialania w przeciwnym razie zamknij program" << std::endl;
        goto poczatek;
    }
    else {
        std::cout << "Podałes zły znak, sprobuj ponownie\n"<<"Podaj dwie liczby i symbol działania po spacji";
        goto poczatek;
    }
   
    koniec:

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