// https://leetcode.com/problems/dungeon-game/


class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        int m=dungeon.size();
        int n=dungeon[0].size();
        
        int dp[m+1][n+1];
        dp[m][n]=((dungeon[m-1][n-1]>=0)?1:(1-dungeon[m-1][n-1]));
                  for(int i=m-1;i>0;i--)
                  {
                      dp[i][n]=max(1,dp[i+1][n]-dungeon[i-1][n-1]);
                  }
                  for(int i=n-1;i>0;i--)
                  {
                      dp[m][i]=max(1,dp[m][i+1]-dungeon[m-1][i-1]);
                  }
                  for(int i=m-1;i>0;i--)
                  {
                      for(int j=n-1;j>0;j--)
                      {
                          int need=min(dp[i+1][j],dp[i][j+1]);
                          dp[i][j]=max(1,need-dungeon[i-1][j-1]);
                      }
                  }
                 return dp[1][1];
                  
    }
};
