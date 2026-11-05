class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int total_pts = 0;
        int maxSum = 0;
        for(int i=0; i<n; i++){
            total_pts += cardPoints[i];
        }
        if(k == n) return total_pts;

        int current_sum = 0;
        for(int i=0; i<n-k; i++){
            current_sum += cardPoints[i];
        }

        int minSum = current_sum;
        int window_size = n-k;
        for(int i=window_size; i<n; i++){
            current_sum = current_sum + cardPoints[i] - cardPoints[i-window_size];
            minSum = min(minSum, current_sum);
        }
    return total_pts - minSum;
    }
};