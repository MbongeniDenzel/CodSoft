#include <iostream>
using namespace std;

int calculator(float num1, float num2 , int operation){
    if(operation  == 1){
        cout<< num1 + num2;
    }else if(operation == 2){
        cout<< num1 - num2;
    }else if(operation == 3){
        cout<< num1*num2;
    }else if(operation == 4){
        cout<< num1 / num2;
    }else if(operation <1 or operation > 4 ){ 
        cout<< " Invalid Operation";
    }
    return 0; 
    
}

int main() {
    // Write C++ code here
    int operation;
    float num1, num2;
    cout<< "Please enter 2 numbers separated by space\n";
    cin>> num1>> num2;
    cout<< "Choose an operation\n1) Addition \n2) Subtraction\n3) Multiplication\n4) Division\n";
    cin>> operation;
    calculator(num1,num2,operation);
    return 0;
}
