#include <iostream>
int dzielenie(int x, int y, int c);

int main()
{
    
    int x = 6;
    int y = 2;
    int c=0;

    c=dzielenie(x,y,c);



    std::cout << "Hello World!\n"<< c;
    return 0;

}
int dzielenie(int x, int y, int c)
{

    c = x / y;
    return c;

}
