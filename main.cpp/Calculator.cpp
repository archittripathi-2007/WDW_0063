#include <bits/stdc++.h>

using namespace std;
int main() {
      int a;
      cout<<"Enter the first number :";
      cin>>a;
      char o;
      cout<<"Enter (+) if you want to add or (-) if you want to subtract or (*) if you want to multiply or (/) if you want to divide."<<endl;
      cout<<"Enter your choice :";
      cin>>o;
      int b;
      cout<<"Enter the second number :";
      cin>>b;
      switch(o){
        case '+':
            cout<<"The sum of the two numbers is :"<<a+b;
            break;
        case '-':
            cout<<"The difference of the two numbers is :"<<a-b;
            break;
        case '*':
            cout<<"The product of the two numbers is :"<<a*b;
            break;
        case '/':
            cout<<"The quotient of the two numbers is :"<<a/b;
            break;
        default:
            cout<<"Invalid choice";
      }      
    return 0;
}