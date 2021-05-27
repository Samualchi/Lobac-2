#include <iostream>
#include <cmath>
#include <clocale>

using namespace std;

class Converter
{
public:

    void koef(int n)
    {
        int k[n];
        std::cout<<"Enter monoms's ratio\n";
        for (int i=0;i<=n;i++)
           std::cin>>k[i];    
        
        polin(n,k); 
    }
    
      

    void polin(int n, int *k)
    {
        int m=n;
        for (int i=0;i<n;i++)
            {std::cout<<k[i]<<"*x^("<<m<<") + ";
            m--;}
        std::cout<<k[n]<<"\n";
        
        std::cout<<"Search ratio by his number, enter number\n";
        int h;
        std::cin>>h;
        if (h>n+1||h<0) 
        {
        std::cout<<"Not in correct radius";
        exit(true);
        }
        std::cout<<"Ratio "<<k[h-1]<<"\n"; 
        int hlobal=n;     
        
        pcount(n, k, hlobal);
    }   
    
    void pcount(int n, int *k, int hlobal)
    {
        
        std::cout<<"Enter х:\n";
        int x;
        
        std::cin>>x;
        int res=0;
        for (int i=0;i<n;i++)
            {
                res=res+k[i]*pow(x,hlobal);
                hlobal--;
            }
        res=res+k[n];       
        std::cout<<res; 
        
        pproizv(n, k);      
    }
    
    void pproizv(int n, int *k)    
    {
        std::cout<<"\nderivative ";
        int m=n;
        for (int i=0;i<n;i++)
            {std::cout<<k[i]*m<<"*x^("<<m-1<<") + ";
            m--;}
        std::cout<<"0\n";
    }
};
    

int main()
{
    Converter objConverter;

    int n,hlobal;
    int k[n];
    std::cout << "Enter degree:\n";
    std::cin>>n;
     
    objConverter.koef(n);
     
    
    
    
}