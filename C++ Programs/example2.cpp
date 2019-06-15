#include<iostream>
using namespace std;
class two;
#include<conio.h>
class one{
private: int a=90;
public: int z=10;
friend int add(one q,two w);   };

class two{
private: int b;
public:  int z1=10;
friend int add(one r,two s);  };

int add(one o, two o1){   
return o.a+o1.z1;  }

int main(){
one aa;
two bb;
cout<<add(aa,bb);
return 0;}
