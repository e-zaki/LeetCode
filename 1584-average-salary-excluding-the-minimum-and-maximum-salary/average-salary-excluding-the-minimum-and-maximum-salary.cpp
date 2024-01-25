class Solution {
public:
    double average(vector<int>& salary) {
        int max = salary[0], min = max, sum = min;
        int len = salary.size();
        for (int i = 1; i < len; i++) {
            sum += salary[i];
            if (salary[i] > max)
                max = salary[i];
            if (salary[i] < min)
                min = salary[i];
        }
        sum -= (max + min);
        return (double)sum / (len - 2);
    }
};