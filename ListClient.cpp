#include <iostream>
#include "List.h"

using namespace std;

int main()
{

 List L1, L2;

 //Do some stuff with L1, L2
 
 //Test Insert Function
 L1.insert(12,1);
 L1.insert(75,2);
 L1.insert(2738163,3);
 L1.insert(6324,4);
 L1.insert(234726348,5);
 cout << "Size of first list is:" << L1.size() << endl;
 
 L1.insert(21,1);
 L2.insert(123,2);
 L2.insert(525,3);
 cout << "Size of second list is:" << L2.size() << endl;
 
 //Test Get Function
 L1.get(2);
 L2.get(1);

}
