#include <iostream>

void hexDigits(int *numbers,int length) {
    for (int i = 0; i < length; i++)
    {
        int decimal = numbers[i];
        switch (decimal)
        {
        case 10:
            char x = 'A';
            std::cout << i << " " << *(numbers + i) << " " << x << std::endl;
            break;
        case 11:
            char b = 'B';
            std::cout << i << " " << *(numbers + i) << " " << b << std::endl;
            break;
         case 12:
            char c = 'C';
            std::cout << i << " " << *(numbers + i) << " " << c << std::endl;
            break;
         case 13:
            char d = 'D';
            std::cout << i << " " << *(numbers + i) << " " << d << std::endl;
            break;
         case 14:
            char e = 'E';
            std::cout << i << " " << *(numbers + i) << " " << e << std::endl;
            break;
         case 15:
            char f = 'F';
            std::cout << i << " " << *(numbers + i) << " " << f << std::endl;
            break;
        default :
        while (decimal > 0)
    {
        (decimal % 16);
        decimal /= 16;
    }
        int y = decimal;
        std::cout << i << " " << *(numbers + i) << " " << y << std::endl;
    }
            break;
        }
    
}