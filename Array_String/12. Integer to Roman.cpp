class Solution
{
public:
    string intToRoman(int num)
    {
        int j;
        int i = num / 1000;
        string v;
        if (i > 0)
        {
            for (j = 0; j < i; j++)
                v.append("M");
        }
        num = num % 1000;
        i = num / 100;
        if (i == 9)
            v += "CM";
        else if (i == 4)
            v += "CD";
        else if (i >= 5)
        {
            i = i - 5;
            v += "D";
            for (j = 0; j < i; j++)
                v += "C";
        }
        else if (i < 4)
        {
            for (j = 0; j < i; j++)
                v += "C";
        }

        num = num % 100;
        i = num / 10;
        if (i == 9)
            v += "XC";
        else if (i == 4)
            v += "XL";
        else if (i >= 5)
        {
            i = i - 5;
            v += "L";
            for (j = 0; j < i; j++)
                v += "X";
        }
        else if (i < 4)
        {
            for (j = 0; j < i; j++)
                v += "X";
        }

        num = num % 10;
        i = num;
        if (i == 9)
            v += "IX";
        else if (i == 4)
            v += "IV";
        else if (i >= 5)
        {
            i = i - 5;
            v += "V";
            for (j = 0; j < i; j++)
                v += "I";
        }
        else if (i < 4)
        {
            for (j = 0; j < i; j++)
                v.append("I");
        }
        cout << v[0];

        return v;
    }
};
