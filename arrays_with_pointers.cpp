#include <iostream>
using namespace std;

int main()
{
  int a,i,k=0,*p,*l;
  a = 10;
  p = &a;

  for(l = p ;l <= p+6 ; l++){
    *l = k;
    k++;
  }
  for(l = p;l <= p+6 ; l++){
    printf("%d\n",*l);
  }
}