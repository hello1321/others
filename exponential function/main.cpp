#include <iostream>

using namespace std;
int power(int a,int b){
int result=1;
for(int first=1;first <=b;first++){
    result=result*a;
}


    return result;
}
int main()
{
    cout << power(5,1) << endl;
    return 0;
}
