class Solution
{
public:
    string reverseWords(string s)
    {
        string output, temp;
        int fg = 0;
        for (char i : s)
        {
            if (i == ' ' && fg == 0)
            {
                temp += ' ';
                output = output.insert(0, temp);
                fg = 1;
                temp = "";
            }
            else if (i != ' ')
            {
                fg = 0;
                temp += i;
            }
        }
        temp += ' ';
        output = output.insert(0, temp);
        int cnt = 0;
        for (char i : output)
        {
            if (i == ' ')
            {
                cnt++;
            }
            else
            {
                output.erase(0, cnt);
                break;
            }
        }
        cnt = 0;
        for (int i = output.size() - 1; i >= 0; i--)
        {
            if (output[i] == ' ')
            {
                cnt++;
            }
            else
            {
                output.erase(output.size() - cnt, cnt);
                break;
            }
        }
        return output;
    }
};