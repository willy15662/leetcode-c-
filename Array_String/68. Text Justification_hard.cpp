class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> result;
        string word;
        int width=0, cnt=0, num=0;
        //如果只有一個字串時
        if(words.size() == 1){
            //放進去
            word = words[0];
            //後面塞空格
            for(int k=0;k<(maxWidth - words[0].size());k++){
                        word = word + " ";
                }
            result.push_back(word);
            return result;
        }
        for (int i = 0; i < words.size(); i++) {
            //初始化
            cnt=0;
            width=0;
            num=0;
            //放第一個字進去
            word = words[i];
            width += words[i].size();  //含一隔空格後的大小
            num += words[i].size();    //不含空格的大小

            width += words[i+1].size()+1;    //放下一個字進去
            //放得下，後面還有字，繼續找還能不能放
            if(width <= maxWidth && i+1 < words.size()){
                num += words[i+1].size();  
                cnt=1;  //放入一個
                //繼續放入直到放不下
                while(width <= maxWidth){
                    if(i+1+cnt >= words.size())break;    //後面沒了
                    width += words[i+1+cnt].size()+1;    //檢查下個字能不能放
                    if(width <= maxWidth) {
                        cnt++;
                        num += words[i+cnt].size();      //可以放，計算目前大小
                    }
                }
            }
            //如果是最後一串字串，靠左對齊後面補空格
            if(i + cnt == words.size()-1){
                //靠左對齊
                for(int j=1;j<=cnt; j++){
                    word = word + " " + words[j+i];
                }
                //補空格
                num = word.size();
                for(int k=0;k<(maxWidth - num);k++){
                        word = word + " ";
                }
            }
            //字串有好幾個字
            else if(cnt>0){
                int space = (maxWidth - num) / cnt;   //算有幾個空格要補
                int s = (maxWidth - num) % cnt;       //算有差幾格空格要補
                int sp=0;
                for(int j=1;j<=cnt; j++){
                    for(int k=0;k<space;k++){         //平均補空格
                        word = word + " ";
                    }
                    if(sp < s) {                     //少的空格從左邊先補
                        word = word + " ";
                        sp++;
                    }
                    word = word + words[j+i]; 
                }
            }
            //字串中只有一個字，後面填滿空格
            else{
                for(int k=0;k<(maxWidth - num);k++){
                        word = word + " ";
                }
            }
            //放到答案中，並指到下一個字
            result.push_back(word);
            i += cnt;

        }
        return result;
    }
};


/*Given an array of strings words and a width maxWidth, format the text such that each line has exactly maxWidth characters and is fully (left and right) justified.

You should pack your words in a greedy approach; that is, pack as many words as you can in each line. Pad extra spaces ' ' when necessary so that each line has exactly maxWidth characters.

Extra spaces between words should be distributed as evenly as possible. If the number of spaces on a line does not divide evenly between words, the empty slots on the left will be assigned more spaces than the slots on the right.

For the last line of text, it should be left-justified, and no extra space is inserted between words.

Note:

A word is defined as a character sequence consisting of non-space characters only.
Each word's length is guaranteed to be greater than 0 and not exceed maxWidth.
The input array words contains at least one word.
 

Example 1:

Input: words = ["This", "is", "an", "example", "of", "text", "justification."], maxWidth = 16
Output:
[
   "This    is    an",
   "example  of text",
   "justification.  "
]
Example 2:

Input: words = ["What","must","be","acknowledgment","shall","be"], maxWidth = 16
Output:
[
  "What   must   be",
  "acknowledgment  ",
  "shall be        "
]
Explanation: Note that the last line is "shall be    " instead of "shall     be", because the last line must be left-justified instead of fully-justified.
Note that the second line is also left-justified because it contains only one word.
Example 3:

Input: words = ["Science","is","what","we","understand","well","enough","to","explain","to","a","computer.","Art","is","everything","else","we","do"], maxWidth = 20
Output:
[
  "Science  is  what we",
  "understand      well",
  "enough to explain to",
  "a  computer.  Art is",
  "everything  else  we",
  "do                  "
]
  */
