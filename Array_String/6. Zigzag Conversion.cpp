//按順序放入不同array,用go和back判斷邊界
class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= s.length()) {
            return s;
        }
      
        string alpha[numRows];
        int count = 0, row,go=1,back=0;
        for(char i : s){
            row = count % numRows; 
            alpha[row] += i;
            if(go){
                if(count==numRows-1) {
                    go=0;
                    back=1;
                    count--;
                }
                else count++;
            }
            else if(back){
                if(count==0) {
                    go=1;
                    back=0;
                    count++;
                }
                else count--;
            }
        }
        string result;
        for(int i=0 ;i < numRows; i++){
            std::cout << alpha[i] << std::endl;
            result = result + alpha[i];
        }
        return result;
    }
};


//最佳解
//循環長度cycleLen 為2 * numRows - 2
//對角線處需要特別處理，當row不是第一行或最後一行時，將j + cycleLen - i放入
/*
class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= s.length()) {
            return s;
        }
        string result;
        int n = s.length();
        int cycleLen = 2 * numRows - 2;
        for(int i=0; i<numRows; i++){
            for(int j=0; j + i < n; j+=cycleLen){
                    result.push_back(s[j + i]);
                    if (i != 0 && i != numRows - 1 && j + cycleLen - i < n) {
                        result.push_back(s[j + cycleLen - i]);
                    }
            }
        }
        

        return result;
    }
};
*/
