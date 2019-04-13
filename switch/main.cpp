#include <iostream>

using namespace std;
string weekday(int a){
string dayname;
switch (a){
case 0: dayname="Sunday";
break;

case 1: dayname="Monday";
break;
case 2: dayname="Tuesday";
break;
case 3: dayname="Thursday";
break;
case 4: dayname="Wednesday";
break;
case 5: dayname="Friday";
break;
case 6: dayname="Saturday";
break;
default: dayname="Fatal Error";


return dayname;
}





}



int main()
{

    cout<<weekday(10);
    return 0;
}
