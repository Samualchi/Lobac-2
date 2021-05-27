#include <iostream>
#include <cmath>
#include <clocale>

using namespace std;


double x, res = 1;
int n;
int i = 1, j = 1, f = 0, fi = 1;

class Converter
{
public:

    void exp1()
    {
        double result=0;
        std::cout << "Correct funtion exp(x)\n";

        std::cout << "Enter correct range result:\n";
        std::cin >> n;
        
        std::cout << "\nEnter х:\n";
        std::cin >> x;

        std::cout << "Formula of this function:\n";
        while (i <= n)
        {
            res = res * i;
            std::cout << "x^" << i << " / " << res << "  +  ";
            result=result+(pow(x,i)/res);     
            i++;
        }
        std::cout << "  o(x)";

        std::cout << "\nRange result:";

        std::cout << result;

        std::cout << "\nEtalon result:\n" << exp(x);

        std::cout << "\ndifference between results:\n" << abs(exp(x) - result);

    }

    void sin1()
    {
        double result=0;
        
        std::cout << "Correct funtion sin(x)\n";

        std::cout << "Enter correct range result:\n";
        std::cin >> n;
        
        std::cout << "\nEnter х:\n";
        std::cin >> x;
        
        std::cout << "Formula of correct funtion:\n";
        while (i <= n)
        {
            std::cout << pow(-1, i + 1) << "*x^" << 2 * i - 1 << " / " << res << "  +  ";
            result=result+(pow(-1,i+1) * pow(x,2*i-1))/res;
            res = res * (j + 1) * (j + 2);
            j = j + 2;
            i++;
        }
        std::cout << "  o(x)";

        std::cout << "\nRange result:";
        std::cout << result;

        std::cout << "\nEtalon result:\n" << sin(x);

        std::cout << "\nDifference between results:\n" << abs(sin(x) - result);
    
    }

    void cos1()
    {
        double result=0;
        
        std::cout << "Correct cos(x)\n";

        std::cout << "Enter correct range result:\n";
        std::cin >> n;

        std::cout << "\nEnter х:\n";
        std::cin >> x;
        
        std::cout << "Formula of correct funtion:\n";

        while (fi <= n)
        {

            std::cout << pow(-1, fi + 1) << "*x^" << 2 * fi << " / " << res << "  +  ";
            result=result+pow(-1, fi + 1) * pow(x, 2 * n) / res;
            res = res * (2 * f + 1) * (2 * f + 2);
            
            f++;
            fi++;

        }
        std::cout << "  o(x)";

        std::cout << "\nRange result:\n";
        std::cout << result;

        std::cout << "\nEtalon result:\n" << cos(x);

        std::cout << "\nDifference between results:\n" << abs(cos(x) - result);
    
    }
};



int main()
{
    Converter objConverter;

    int input;

    std::cout << "Choose function:\n";
    std::cout << "1. Exponent\n";
    std::cout << "2. Sin\n";
    std::cout << "3. Cos\n";

    std::cin >> input;

    switch (input)
    {
    case 1:
    {
        objConverter.exp1();
        break;
    }
    case 2:
    {
        objConverter.sin1();
        break;
    }
    case 3:
    {
        objConverter.cos1();
        break;
    }

    default:
    {
        std::cout << "error/n";
        break;
    }
    }
}