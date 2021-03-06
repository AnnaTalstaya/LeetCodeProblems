/*
Difficulty: easy

Write an algorithm to determine if a number is "happy".
A happy number is a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of its digits, 
and repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. 
Those numbers for which this process ends in 1 are happy numbers.

Example: 

Input: 19
Output: true
Explanation: 
12 + 92 = 82
82 + 22 = 68
62 + 82 = 100
12 + 02 + 02 = 1

*/

#include <cmath>
#include <set>

using namespace std;
class Solution {
public:
    bool isHappy(int n) {
		if (n <= 0)
			return false;
        set<int> my_set;

		int number = n;
        my_set.insert(n);
		while (n != 1) {
			int x = 0;
			while (n) {
				x += pow(n % 10, 2);
				n /= 10;
			}
			n = x;
			
		    if(my_set.find(n) == my_set.end())
                my_set.insert(n);
            else return false;
		}
		return true;
	}
};
