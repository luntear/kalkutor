#include <iostream>
//zmiana typu wyjsciowego na float - dzielenie wiaze sie czesto z liczbami po przecinku.
float dzielenie(int x, int y);
int mnozenie (int x, int y);
int dodawanie(int x, int y);
int odejmowanie(int x, int y); 
int main()
{
    
    int x = 6;
    int y = 2;
    int c=0;
    std::cin >> x; "\n";
    std::cout << "asdasd" << std::endl;
    
    std::cin >> y;
    c=dzielenie(x,y,c);

    std::cout << "to x " << x << "to y" << y;

    std::cout << "Hello World!"<< c<<std::endl;
    std::cout << "test" << std::endl;

    return 0;

}
int dzielenie(int x, int y, int c)
{

    c = x / y;
    return c;

}
