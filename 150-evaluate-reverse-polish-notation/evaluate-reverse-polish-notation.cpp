class Solution {
private:
    stack<int> st;

    bool isOperator(string c)
    {
        string operators = "+-*/";
        return (c.size() == 1 && operators.find(c[0]) != string::npos);
    }

public:
    int evalRPN(vector<string>& tokens) {
        int a, b;
        for (int i = 0; i < tokens.size(); i++)
        {
            if (isOperator(tokens[i]))
            {
                b = st.top();
                st.pop();
                a = st.top();
                st.pop();
                if (tokens[i] == "+")
                    st.push(a + b);
                else if (tokens[i] == "-")
                    st.push(a - b);
                else if (tokens[i] == "*")
                    st.push(a * b);
                else if (tokens[i] == "/")
                    st.push(a / b);

            }
            else
                st.push(stoi(tokens[i]));
        }
        return st.top();
    }
};