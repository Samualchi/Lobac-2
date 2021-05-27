#include <iostream>
#include <stdio.h>
using namespace std;
void Variants()
{
    double Ceilus;
    double Farengheit;
    double Kelvin;
    char Choose;
    char chooseb;
    cout << "What will you choose: 1.Convert in other temperatures\n 2.Finish the command";
    cin >> chooseb;
    while (chooseb != '2')
    {
        cout << "Write the temperature of ceilus again \n";
        cin >> Ceilus;
        cout << "Choose the variant of convertion : 1. Farengheit\n 2.Kelvin\n 3.Ceilus\n 4.Exit\n";
        cin >> Choose;
        if (Choose == '1')
        {
            Farengheit = (Ceilus * 1.8) + 32;
            cout << "Ceilus temp in farengh is" << Farengheit;
        }
        if (Choose == '2')
        {
            Kelvin = Ceilus + 273, 15;
            cout << "Ceilus temp in Kelvin is" << Kelvin;
        }
        if (Choose == '3')
        {
            cout << "this is Ceilus without changes" << Ceilus;
        }
        if (Choose == '4')
        {
            cout << "Are you sure?\n 1.Yes \n 2.No \n";
            cin >> Choose;
            if (Choose == '1')
                return ;
                if (Choose == '2')
                    Variants();
        }
        if (chooseb != '2')
            return;
    }
}
int main()
{
    double Ceilus;
    double Farengheit;
    double Kelvin;
    char Choose;
    cout << "Write the temperature of ceilus";
    cin >> Ceilus;
    cout << "Choose the variant of convertion : 1. Farengheit\n 2.Kelvin\n";
    cin >> Choose;
    if (Choose == '1')
    {
        Farengheit = (Ceilus * 1.8) + 32;
        cout << "Ceilus temp in farengh is" << Farengheit;
    }
    if (Choose == '2')
    {
        Kelvin = Ceilus + 273, 15;
        cout << "Ceilus temp in Kelvin is" << Kelvin;
    }
    Variants();
    return 0;
}
