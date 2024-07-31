
#include <iostream>
#include <algorithm>
#include <string>

int main()
{
    std::string str;

    std::cin >> str;
    int i = 0;
    while (str[i])
    {
        if (str[i] == 'W' && str[i+1] == 'U' && str[i+2] == 'B')
        {
            std::cout << " ";
            i = i + 2;
        }
        else
        {
            std::cout << str[i];
        }
        i++;
    }
}