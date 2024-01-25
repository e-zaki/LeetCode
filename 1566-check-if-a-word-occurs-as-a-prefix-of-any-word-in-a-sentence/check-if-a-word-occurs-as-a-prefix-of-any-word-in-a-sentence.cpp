class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        size_t found = sentence.find(searchWord);
        while (found != std::string::npos) {
            if (!found || sentence[found - 1] == ' ')
                break;
            found = sentence.find(searchWord, found + 1);
        }
        if (found == string::npos)
            return -1;
        int counter = 1;
        for (int i = 0; i < found; i++)
        {
            if (sentence[i] == ' ')
                counter++;
        }
        return counter;
    }
};