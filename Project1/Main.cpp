#include <iostream>
#include<cmath>
//zrob to na funkcje i od poczatku zobacz na pulla requesta 
// zrob menu do wyboru funkcji 
// nieskonczona pentla chyba ze z 
float dodawanie(float x,float z,float y)
{
    y = z + x;
    return (y);
}
float odejmowanie(float x, float z, float y)
{
    y = x - z;
    return (y);
}
float dzielenie(float x, float z, float y)
{
    if (z == 0)
    {
        std::cout << "nie mozna dzielic przez zero";
        return(0);
    }
    else {
        y = x / z;
        return (y);
    }
}
float mnozenie(float x, float z, float y)
{
    y = x * z;
    return(y);
}
float potegowanie(float x, float z, float y)
{
    y = pow(x, z);
    return y;
 }


int main()
{
    float x = 0;
    float z = 0;
    float y = 0;
    char rodzaj = 0;
    std::cout << "wybierz rodzaj dzialania z listy ponizej wpisujac odpowiedni numer" << std::endl << "1.dodawanie" << std::endl << "2.odejmowanie" << std::endl;
    std::cout << "3.mnozenie" << std::endl << "4.dzielenie" << std::endl << "5.potegowanie" << std::endl << "6.zakoncz" << std::endl;
    std::cin >> rodzaj;
    while (rodzaj != '6') 
    {
               
        std::cout << "Teraz podaj swoja pierwsza liczbe";
        std::cin >> x;
        std::cout << "teraz podaj swoja druga liczbe";
        std::cin >> z;
        switch (rodzaj) {
        case'1':
            y = dodawanie(x,z,y);
            break;
        case'2':
            y = odejmowanie(x,z,y);
            break;
        case'3':
            y = mnozenie(x,z,y);
            break;
        case'4':
            y = dzielenie(x,z,y);
            break;
        case'5':
            y = potegowanie(x,z,y);
            break;
        }
        std::cout << "wynik twojego działania to :" << y<< std::endl;
        std::cout << "W celu dalszego korzystania z kalkulatora badz zakonczenia wybierz jedna z opcji " << std::endl << "1.dodawanie" << std::endl << "2.odejmowanie" << std::endl;
        std::cout << "3.mnozenie" << std::endl << "4.dzielenie" << std::endl << "5.potegowanie" << std::endl << "6.zakoncz" << std::endl;
        std::cin >> rodzaj;
        
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
/* std::cin >> x >> y;
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

    koniec: */