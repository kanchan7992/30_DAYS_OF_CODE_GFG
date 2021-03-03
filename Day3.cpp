/*Given an array of size N, find the smallest positive integer value that cannot be
  represented as sum of some elements from the array.

Example 1:

Input:
N = 6
array[] = {1, 10, 3, 11, 6, 15}
Output:
2
Explanation:
2 is the smallest integer value that cannot
be represented as sum of elements from the array
*/

class Solution
{
public:
    long long smallestpositive(vector<long long> array, int n)
    {
      sort(array.begin(),array.end());
      long long int res=1;
      for(int i=0;i<n && array[i]<=res;i++)
      {
          res =res +array[i];
      }

      return res;
    }
};
