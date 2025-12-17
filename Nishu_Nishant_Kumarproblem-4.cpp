#include <bits/stdc++.h>
using namespace std;

/*
Problem-4: Get the total count of number listed in the dictionary which is multiple of [1,2,3,4,5,6,7,8,9]
  (examples)
  input: [1,2,8,9,12,46,76,82,15,20,30]
  Output: 
    {1: 11, 2: 8, 3: 4, 4: 4, 5: 3, 6: 2, 7: 0, 8: 1, 9: 1}
*/
void totalCount(vector<int>v)
{
    //here we have to print the series that is arithmetic series 
    int ansArray[10]; //in this array i will store the answer for 1 to 9 , in the index 1 , count of multiple of 1 will be stored and so on...
    int n = v.size();
    
    //initialize the array 
    for(int i = 0; i<=9; i++)ansArray[i] = 0;
    ansArray[1] = n; //all the value will be multiple of 1
    for(int i = 0; i<n; i++)
    {
        for(int j = 2; j<10; j++)
        {
            if(v[i] % j == 0)ansArray[j]++; //increment the count of the answer array
        }
    }

    //print the final answer 
    for(int i=1; i<10; i++)
    {
        if(i == 1)cout<<"{";
        if(i == 9)
        {
            cout<<i<<": "<<ansArray[i]<<"}";
        }else{
            cout<<i<<": "<<ansArray[i]<<", ";
        } 
    }
}
int main() {
    vector<int>v = {1,2,8,9,12,46,76,82,15,20,30};
    // int a;
    // cin>>a;
    totalCount(v);
    return 0;
}
