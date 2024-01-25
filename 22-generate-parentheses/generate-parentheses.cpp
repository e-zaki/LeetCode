class Solution {
private:
    vector<string> ans;
    
    void    fill_ans(string s,short int open_count, short int close_count)
    {
        if (!close_count)
        {
            ans.push_back(s);
            return;
        }
        if (open_count)
            fill_ans(s + "(", open_count-1, close_count);
        if (close_count > open_count)
            fill_ans(s + ")", open_count, close_count-1);
    }

public:
    vector<string> generateParenthesis(int n) {
        string s = "";
        if (n >= 0)
            fill_ans(s, n, n);
        return ans;
    }
};