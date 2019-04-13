#include <iostream>

using namespace std;

int main()
{
int secretNum=20;
int guess;
int guessCount=0;
int guessLimit=3;
bool outOfGuesses=false;


while(secretNum!=guess && !outOfGuesses){
        if(guessCount<guessLimit){
        cout<<"Enter guess:"<<endl;
        cin>>guess;
        guessCount++;
}else {outOfGuesses=true;}
}

if(outOfGuesses)
{
    cout<<"You lost"<<endl;
}else{
cout<<"You won"<<endl;
}












    return 0;
}
