//Task
//Read 3 numbers from stdin and print their sum to stdout.

//Input Format
//A single line containing 3 space-separated integers: a, b, and c.
//Constraints: 1 <= a,b,c <= 100

//Output Format
//Print the sum of the three numbers on a single line.

/*
Sample Input:
1 2 7

Sample Output:
10
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
 {
int a,b,c = 0;
int sumOfabc =0;
bool checkAwnser = false;
char yesOrNo = 'n';
    /* Enter your code here. Read input from CIN. Print output to COUT */

do
{
  cout <<"Please enter 3 space-separated intergers: "<<  std::endl;
    cin >> a >> b >> c ;
      cout <<"\n Are you sure you want too use "<< a <<", "<< b << " and "<< c <<" ?(y/n)";
        cin >> yesOrNo;


if (yesOrNo == 'y' || yesOrNo == 'Y')
{
  checkAwnser = false;
    sumOfabc = a + b + c;
      cout <<" \n The sum of those numbers is: "<< sumOfabc <<"\n\n";
}


else
{
  cout <<"\n   you said that the numbers where incorect or something went wrong, please start over.";
    checkAwnser = true;
      cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";// so getho lol.
}

}while (checkAwnser);

  return 0;
}
