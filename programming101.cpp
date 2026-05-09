  // if you are not familiar with programming you can continue but because i am so i am not continuing only this much for now 
#include <iostream>
using namespace std;
bool eligibile_to_vote(int age)

{
    if (age >= 18)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool even_or_odd(int num)
{
    if (num % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    // Create a function which accepts the age and tells whether a person is eligible to vote or not
    int age,num;
    cout << "Tell me Your age:";
    cin >> age;

    if (eligibile_to_vote(age))
    {
        cout << "Can vote" << endl;
    }
    else
    {
        cout << "Can't Vote" << endl;
    }
    cout << "Tell me the number:";
    cin >> num;
    if (even_or_odd(num))
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "Odd" << endl;
    }
  
    return 0;
}