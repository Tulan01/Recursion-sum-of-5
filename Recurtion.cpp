#include<iostream>
using namespace std;

int add(int n);

int main()
{
    int n=5; //initiate the variable for keep the operational data ex. 5

    int sum=add(n); //passing the n variable value to add function for adding and keep the result on sum variable

    cout << "The Sum value is  =  "<< sum; //print out the result

    return 0;
}

int add(int n)  //initiate the add function and by n fetch the arguments
{
    if(n != 0)  // this condition is used to end the recursion means stop calling the this function again and again
        return n + add(n - 1);  //return the add value and all this function recursively to add again the next value
    return 0;
}
