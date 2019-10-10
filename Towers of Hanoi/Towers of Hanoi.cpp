/******************************
** John Velazquez
*******************************
** C++ recursive function to  
** solve tower of hanoi puzzle  
*******************************/
#include <iostream>
using namespace std; 
  
void towerOfHanoi(int n, char peg1, char peg2, char peg3)  
{  
    if (n == 1)  
    {  
        cout << "Move disk 1 from peg " << peg1 << " to peg " << peg2 << endl;  
        return;  
    }  
	
    towerOfHanoi(n - 1, peg1, peg3, peg2);  
    cout << "Move disk " << n << " from peg " << peg1 << " to peg " << peg2 << endl;  
    towerOfHanoi(n - 1, peg2, peg1, peg3);  
}  
  
//Driver code 
int main()  
{  
    int n = 4; //Number of disks  
    towerOfHanoi(n, '1', '2', '3'); //1, 2 and 3 are the peg numbers
    return 0;  
}