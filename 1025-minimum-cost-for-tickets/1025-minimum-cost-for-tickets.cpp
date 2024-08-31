class Solution {
public:
int solveMem(int n, vector<int> &days, int index, vector<int> &costs, vector<int> &dp) {
    if (index >= n)
        return 0;

    if (dp[index] != -1)
        return dp[index];

    // Option 1: Buy a 1-day pass and move to the next day
    int one_day = costs[0] + solveMem(n, days, index + 1, costs, dp);

    // Option 2: Buy a 7-day pass, and skip all days covered by this pass
    int i;
    for (i = index; i < n && days[i] < days[index] + 7; i++);
    int seven_day = costs[1] + solveMem(n, days, i, costs, dp);

    // Option 3: Buy a 30-day pass, and skip all days covered by this pass
    for (i = index; i < n && days[i] < days[index] + 30; i++);
    int thirty_day = costs[2] + solveMem(n, days, i, costs, dp);

    // Return the minimum cost among all three options
    dp[index] = min(one_day, min(seven_day, thirty_day));

    return dp[index];
}
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n= days.size();
         vector<int> dp(n, -1);
         return solveMem(n, days, 0, costs, dp);
        
    }
};