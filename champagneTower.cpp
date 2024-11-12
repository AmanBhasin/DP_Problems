class Solution {
public:
    double champagneTower(int p, int qr, int qg) {
        vector<vector<double>>dp(101, vector<double>(101,0));
        dp[0][0] = p;
        for(int i=0; i<100; i++){
            for(int j=0; j<i+1; j++){
                if(dp[i][j] > 1){
                dp[i+1][j] += (dp[i][j]-1)/2;
                dp[i+1][j+1] += (dp[i][j]-1)/2;
                }
            }
        }
        return  min(1.0, dp[qr][qg]);

        return 0;
    }
};