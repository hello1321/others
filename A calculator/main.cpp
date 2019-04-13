#include <iostream>

using namespace std;

int main()
{
    int a,b;
    char op;
    cout <<"Enter first number: "  << endl;
    cin>>a;
    cout<< "Enter second number: "<<endl;
    cin>>b;
    cout << "Enter operator: "<<endl;
    cin>>op;
    if (op=='+'){
        cout<<a+b<<endl;
    }else if (op=='-'){
    cout<<a-b<<endl;
    }else if(op=='*'){
    cout<<a*b<<endl;
    }else if(op=='/'){
    cout<< a/b<<endl;
    }else {
cout<<"Operator does not exist"<<endl;
    }

    return 0;
}
