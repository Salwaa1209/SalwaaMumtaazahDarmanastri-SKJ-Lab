#include <iostream>
using namespace std;

int addNumbers(int a, int b){
    int result;
    result = a + b;
    return result;
}

int main(){
    int num1, num2, sum;
    cout << "Enter two numbers";
    cin >> num1 >> num2;
    sum = addNumbers(num1, num2);
    cout << "the sum of " << num1 << " and " << num2 << " is " << sum << std::endl;

    return 0;
    }