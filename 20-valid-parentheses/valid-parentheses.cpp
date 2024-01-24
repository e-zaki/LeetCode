class Solution {
public:
    bool isValid(string s) {
        stack<char> myStack;
        for (char e : s)
        {
            if (e == '[' || e == '(' || e == '{')
                myStack.push(e);
            else if (myStack.empty() || (e == ')' && myStack.top() != '(') || (e == ']' && myStack.top() != '[') || (e == '}' && myStack.top() != '{'))
                return false;
            else
                myStack.pop();
        }
        return myStack.empty();
    }
};