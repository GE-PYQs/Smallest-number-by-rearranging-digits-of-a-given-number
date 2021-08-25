/*
Approach : As number is long, store the number as string, sort the string, if there is no leading zero, 
return this string, if there is any leading zero, 
swap first element of string with first non-zero element of string, and return the string.
*/

/*
other solution

#include<iostream>
using namespace std;
 
// function to find the smallest number
int smallest(int num)
{
    // initialize frequency of each digit to Zero
    int freq[10] = {0};
 
    // count frequency of each digit in the number
    while (num)
    {
        int d = num % 10; // extract last digit
        freq[d]++; // increment counting
        num = num / 10; //remove last digit
    }
 
    // Set the LEFTMOST digit to minimum expect 0
    int result = 0;
    for (int i = 1 ; i <= 9 ; i++)
    {
        if (freq[i])
        {
            result = i;
            freq[i]--;
            break;
        }
    }
 
    // arrange all remaining digits
    // in ascending order
    for (int i = 0 ; i <= 9 ; i++)
        while (freq[i]--)
            result = result * 10 + i;
 
    return result;
}
 
// Driver Program
int main()
{
    int num = 570107;
    cout << smallest(num);
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;
 
// return the smallest number permutation
string findSmallestPermutation(string s)
{
    int len = s.length();
    
    //ek corner case jab saare 0 ho
    int count0=0;
   	    for(int i=0;i<len;i++)
   	    {
   	        if(s[i]=='0')
   	        {
   	            count0++;
   	        }
   	    }
   	    
   	    if(count0==len)
   	    {
   	        return
 
    // sort the string
    sort(s.begin(), s.end());
 
    // check for leading zero in string
    // if there are any leading zeroes,
    // swap the first zero with first non-zero number
    int i = 0;
    while (s[i] == '0')
        i++;
     
    swap(s[0], s[i]);
    return s;
}
 
// driver program
int main()
{
    // take number input in string
    string s = "5468001";
    string res = findSmallestPermutation(s);
    cout << res << endl;
    return 0;
}
