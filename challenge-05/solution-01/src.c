/*
* Search for the longest 
* Palindrome 
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

 /*
* Assist function 
* To find the palindrome
*/
char* palindrome(char* s, int l, int r ){
	int length = strlen(s);    // Length of the input string
	while( (l >= 0) && (r < length)&&(s[l] == s[r])){
		l--;
		r++;
	}

	s[r] = '\0';    // Modified in place to return
    return s +l;

}
/*
* The solution 
* Input : a string
* Output: the longest sub-palindrome-string
*/
char * longestPalindrome(char * s){
	int l,r;
	char* res1;
	char* res2;
	int length = strlen(s);    // Length of the input string

	for (int i = 0; i < length; ++i){
		res1 = palindrome(s,i,i);    // For the even 
		res2 = palindrome(s,i,i+1);  // For the odd 
	}

	char* res = (strlen(res1) > strlen(res2)) ? res1:res2;
	return res;
	}



    // Test code
    char string1[] = "babad";
    printf("%s\n",longestPalindrome(string1) );

	return 0;
}








/*Reference Solution1*/

/*
char * longestPalindrome(char * s){
    int left, right, index;//定义三个变量left向左遍历，right向右遍历，index指向当前值，是为了计算连续中间相同值时使用。
    int length;//字符串的长度
    int max = 1;//最大长度
    int start = 0;//数组的起始位置
    length = strlen(s);//计算数组的长度
    char *ans = NULL;
    int i = 0;

    while (i < length) { //从数组0位置开始遍历

        left = right = index = i;//所有变量都指向当前值
        while (s[index++] == s[right + 1]) { //为了计算lsaaaast指向a的最右下标。
            right++;
            if (right == length - 1) {
                break;
            }
        }

        while (left > 0 && right < length - 1 && s[left - 1] == s[right + 1]) {//先判断左右边界是否越界，没有越界，就开始左右对比判断。
            left--;
            right++;
        }
        if (right - left + 1 > max) {// 计算左右下标中间的长度。如果比max大，就更新。
            start = left;//更新回文子串的其实位置。
            max = right - left + 1;//更新子串的最长长度
        }
        i++;
    }

    ans = (char *)malloc(sizeof(char) * (max + 1));//申请空间
    strncpy(ans, s + start, max);//拷贝从start位置开始max长度的子串到ans中。
    ans[max] = '\0';//字符串最后补0.
    return ans;
}


作者：brand-5
链接：https://leetcode-cn.com/problems/longest-palindromic-substring/solution/c-shuang-zhi-zhen-by-brand-5-nasp/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/



/*Reference Solution 2*/

/*
char * longestPalindrome(char * s){
    int right = 0, left = 0, count = 0;
    int startidx = 0;
    int max_len = 0;
    for (int i = 0; s[i] != '\0'; i += count) {
        count = 1;
        left = i - 1;
        right = i + 1;

        while ((s[right]!='\0') && (s[i] == s[right])) { // 选出重复字符
            right++;
            count++;
        }
        
        while ((left >= 0) && (s[right]!='\0') && (s[left] == s[right])) { // 由中心字符向左右扩展
            left--;
            right++;
        }
        
        if (max_len < (right - left - 1)) {
            max_len = right - left - 1;  // 左右标记不在回文子串范围内，在外面两侧，需要减1
            startidx = left + 1;
        }
    }
    s[startidx + max_len] = '\0';
    return s + startidx;
}

作者：jin-zi-leo
链接：https://leetcode-cn.com/problems/longest-palindromic-substring/solution/chun-cshuang-100si-lu-jiao-qing-xi-by-jin-zi-leo/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/
