#include <iostream>
using namespace std;

int main()
{
int age ;
int points;
float rate;
cout<<" please Enter your aga\n";
cin >> age;
cout<<"please Enter your points\n";
cin >> points;
cout<<"please Enter your rate\n";
cin>> rate;
 if ( age>18 && points > 500 && rate > 5 )
 {
    cout << "Yes Age > 18 & Points > 500 & Rate > 5";
 }
 else
 {
    cout << "Sorry, the conditions ara not satisfied. ";
 }

return 0;
}