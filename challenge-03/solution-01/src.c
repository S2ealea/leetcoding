/*
* Challenge 03 
* Get the max length of the definited 
* string's sub-string which without 
* repeated character
*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
	/*
	* Solution: Sliding window
	*解题思路
i为左窗口， j为右窗口；
因为每次我要让右窗口移动， 所以用for循环， 当右窗口移动到len时停止；

再用一个S【】数组去标记每个字符在 窗口 出现的次数，当S[a] == 2;
代表a字符出现了2次， 这时候我们就移动左窗口， 并将出窗口的每个字符次数减1，即S[s[i]]--;

然后每次更新窗口的最大长度， j - i + 1 为当前窗口的长度；
如果比更新前大， 则更新窗口的最大长度为j - i + 1;
否则不更新

作者：huo-shan-v
链接：https://leetcode-cn.com/problems/longest-substring-without-repeating-characters/solution/cyu-yan-ban-ben-da-bai-liao-bai-fen-zhi-ffzqh/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
	*/
	int lengthOfLongestSubstring(char * s){
    int len = strlen(s);
    if(len == 0)
        return 0;
    int S[256] = {0};
    int i, j, m = 0;
    for(i = 0, j = 0; j < len; j++){
        S[s[j]]++;
        while(S[s[j]] > 1){
            S[s[i]]--;
            i++;
        }
        m = fmax(m, j - i + 1);
    }
    return m;
}



    // Test code

	return 0;
}