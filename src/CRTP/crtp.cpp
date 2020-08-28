#include "crtp.hpp"
#include <iostream>

namespace crtp
{
    void Derived::implementation() 
    {
               
    }


}

namespace crtp
{
    namespace excercise
    {
        void run() 
        {
            Data d;
            d.input = 11.1;
            d.output = 122.2;
            d.getProfit();
        }
    }
}