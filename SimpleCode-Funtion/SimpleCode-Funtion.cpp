#include <iostream>

void printText()
{
    std::cout << "Я функция" << '\n';
}

int sum (int a, int b)
{
    return a + b;
}

int post_fix_increment(int a)
{
   return a++;
}


int prefix_increment(int a)
{
    return ++a;
}

int main()
{
    printText();
    printText();

    std::cout << '\n';

    std::cout << "Вызываем функцию с помощью цикла for" << '\n';
    for (int i = 0; i < 5; i++)
    {
        printText();
    }
    std::cout << '\n';
    
    int a = 5;
    int b = 7;
    sum(a, b);
    std::cout << '\n';

    int q = 9;
    int w = 1223;
    int c = sum(q, w);
    std::cout << sum(2, 5) << " " << c;
    
    std::cout << '\n';
    int value = 1;
    value = post_fix_increment(value);
    std::cout << value << " " << '\n';


    int value2 = 1;
    value2 = prefix_increment(value2);
    std::cout << value2 << " ";

}
