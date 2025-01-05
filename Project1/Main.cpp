#include <iostream>
int dzielenie(int x, int y, int c);

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
