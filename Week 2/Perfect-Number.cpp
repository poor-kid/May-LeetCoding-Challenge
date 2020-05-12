
/*Given a positive integer num, write a function which returns True if num is a perfect square else False.

Note: Do not use any built-in library function such as sqrt.

Example 1:

Input: 16
Output: true
Example 2:

Input: 14
Output: false
*/

/* Approach :





class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 0)
            return false;
        for(int i=1;num>0;i+=2)
        {
            num = num-i;
        }
        if(num == 0)
            return true;
        return false;
        
    }
};