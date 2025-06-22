#include <iostream>
using namespace std;

class SumCalculator{
    public:

        int multSum(int a, int lim){
            lim -= 1;
            int n = (lim - (lim%a))/a;
            return a*(n+(n*(n-1))/2);
        }
};

int main(){
    SumCalculator calc;

    int sum3 = calc.multSum(3,1000);
    int sum5 = calc.multSum(5,1000);

    int total= sum3 + sum5;

    cout << "Total Sum: " << total << endl;

    return 0;
}