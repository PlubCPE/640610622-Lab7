#include<iostream>


using namespace std;

 int adiff(int A, int B)
 {
   int C;
  
   if(A > B)
   {
     C = A - B;
   }
   else
   {
     C = B - A;
   }
   while (C > 180)
   {
     C = C - 360;
   }
   if(C < 0)
   {
     C = -C;
   }
   



   return C;
 }

int main(){
  cout << adiff(180,270);
  cout << adiff(210,45);
  cout << adiff(0,360);
  cout << adiff(10,350);
  cout << adiff(95,260);
  cout << adiff(90,-90);
  cout << adiff(1000,280);
  cout << adiff(60,244);
}
