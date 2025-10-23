//upper_bound() is a function in the <algorithm> header that performs a binary search to find the first element greater than a given value in a sorted range
//Counting Occurrences

// You can count how many times a number appears:

// int count = upper_bound(v.begin(), v.end(), 4) - lower_bound(v.begin(), v.end(), 4);
// cout << "4 appears " << count << " times";


// Output:

// 4 appears 3 times
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        int m = grid.size() , n = grid[0].size();
        for(int i = 0 ; i < grid.size();i++){
            int pos = upper_bound(grid[i].rbegin(),grid[i].rend(),-1) - grid[i].rbegin();
            count+=pos;
        }
        return count;
    }
};
