#include <bits/stdc++.h>
using namespace std;

/*

Problem-3: With a single integer as the input, generate the following until a = x [series of numbers as shown in below examples]
 
  Output: (examples)
    1) input a = 1, then output : 1
    2) input a = 2, then output : 1
    3) input a = 3, then output : 1, 3, 5
    4) input a = 4, then output : 1, 3, 5
    5) input a = 5, then output : 1, 3, 5, 7, 9
    6) input a = 6, then output : 1, 3, 5, 7, 9
    .
    .
    7) input a = x, then output : 1, 3, 5, 7, .......
*/
void generateSeries(int num)
{
    //here we have to print the series that is arithmetic series 
    int ans = -1;
    if(num % 2 == 0)num -= 1;
    for(int i = 0; i<num; i++)
    {
        ans += 2;
        if(i != num-1)
        {
            cout<<ans<<", ";
        }else{
            cout<<ans<<endl;
        }
    }

}
int main() {
    cout<<"Enter a number"<<endl;
    int a;
    cin>>a;
    generateSeries(a);
    return 0;
}
