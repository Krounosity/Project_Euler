#include <iostream>
using namespace std;

class CalcSum{
    
    public:
    
    // Using empirical observations, we conclude 2 things:
    /* 
        1) The even numbers occur at indices at intervals of 3 (0, 3, 6, 9 ...), and we assume this set of numbers as a recurrence series of its own.

        2) Equation for nth number in series: 4*(n-1)st number + (n-2)nd number.

        We will add each nth number by iterating through them, reducing the calculation time significantly.
    */
   
        long iterativeSum(int lim){
            long sum = 0;

            int a0 = 0;
            int a1 = 2;
            int prevA1;

            while(a1 < lim){

                sum += a1;
                
                prevA1 = a1;
                a1 = 4*(a1) + a0;
                a0 = prevA1;
            
            }

            return sum;
        }
        
        // For when you complete creating the sum formulae

        /* long mathSum(int lim){

        } */   
};

int main(){

    CalcSum calc;

    cout << "Using Iterative sum: " << calc.iterativeSum(4000000) << endl;

    return 0;
}