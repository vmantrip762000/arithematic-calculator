#include <iostream>
using namespace std;

class temp{

    public:
    float a, b, c;
    char op;

    void add();
    void sub();
    void mul();
    void divide();

    void getvalue1();
    void getvalue2();
    void getOp();

}obj;

/*
Funtions:
getvalue1() - floating value 1
getvalue2() - floating value 2
getOp - decides the operation to be performed +, -, *, / and also terminates the program

4 floating variables and 1 character

Built a simple calculator to perform addition, subtraction, multiplication and division with operators

*/


int main(){

    
    while(1){

        obj.getvalue1();

        obj.getOp();

        if(obj.op == '='){

            cout << "\nYour final answer is :: " << obj.a << "\n";
            cout << "Thank you for using calculator!" << "\n";
            break;
            

        }


        obj.getvalue2();

        if(obj.op == '+'){

            obj.add();

        }
    

        if(obj.op == '-'){

            obj.sub();

        }

        if(obj.op == '*'){

            obj.mul();

        }

        if(obj.op == '/'){

            obj.divide();

        }

    }

    return 0;

} 


void temp :: getvalue1(){

    cout << "Enter the value of a :: ";
    cin >> a;

}

void temp :: getvalue2(){

    cout << "Enter the value of b :: ";
    cin >> b;

}

void temp :: getOp(){

    cout << "Enter the operator :: ";
    cin >> op;

}

void temp :: add(){

    c = a + b;
    cout << a <<" + " << b << " :: " << c << "\n";
    cout << "\n";
    a = c;
    b = 0;

}

void temp :: sub(){

    c = a - b;
    cout << a <<" - " << b << " :: " << c << "\n";
    cout << "\n";
    a = c;
    b = 0;

}

void temp :: mul(){

    c = a * b;
    cout << a <<" * " << b << " :: " << c;
    cout << "\n";
    a = c;
    b = 0;

}

void temp :: divide(){

    c = a / b;
    cout << a <<" / " << b << " :: " << c;
    cout << "\n";
    a = c;
    b = 0;

}