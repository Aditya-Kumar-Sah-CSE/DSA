/*
 * @lc app=leetcode id=1700 lang=cpp
 *
 * [1700] Number of Students Unable to Eat Lunch
 */

// @lc code=start
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
queue<int> s;
queue<int> q;
        //! Approach1 
        for(int &st:students){
q.push(st);
        }
        for(int &sw:sandwiches){
            s.push(sw);
        }
int notServed=0;
while (!q.empty() && notServed < q.size()){
if(q.front()==s.front()){
    s.pop();
    q.pop();
    notServed = 0;
}
else{
    int a = q.front();
    q.pop();
    q.push(a);
    notServed++;
}
}


return q.size();
    }
};
// @lc code=end

