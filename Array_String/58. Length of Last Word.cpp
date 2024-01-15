// 1
class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int lastlength = 0;
        int length = 0;
        for (char i : s)
        {
            if (i != ' ')
                length++;
            else
            {
                if (length != 0)
                    lastlength = length;
                length = 0;
            }
        }
        if (length != 0)
            lastlength = length;
        return lastlength;
    }
};

// 2
class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int len = 0, tail = s.length() - 1;
        while (tail >= 0 && s[tail] == ' ')
            tail--;
        while (tail >= 0 && s[tail] != ' ')
        {
            len++;
            tail--;
        }
        return len;
    }
};
