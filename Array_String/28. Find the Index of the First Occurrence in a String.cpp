/*
Example 1:

Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.
Example 2:

Input: haystack = "leetcode", needle = "leeto"
Output: -1
Explanation: "leeto" did not occur in "leetcode", so we return -1.
*/
class Solution {
public:
    int strStr(string haystack, string needle) {
        int lenh = haystack.size();
        int lenn = needle.size();
        if(lenn > lenh)
            return -1;
        else if(needle == haystack)
            return 0;
        int point = 0;
        //從給的字串第一個字元開始找到最後一個
        while(point < lenh){
            //找要比對的字串有無出現，從第一個字元開始比對，不同則跳出迴圈，相同則繼續
            for(int i=0;i < lenn; i++){
                if(needle[i] == haystack[point+i]){
                }
                else{
                    break;
                }         
                if(i == lenn-1)
                    return point;  //成功找到
            }
            point++;    //換下一個
        }      
        return -1;   //沒找到
        
    }
};
