/*
题目描述
读入一串字符，判断是否是回文串。“回文串”是一个正读和反读都一样的字符串，比如“level”或者“noon”等等就是回文串。

输入
一行字符串，长度不超过255。

输出
如果是回文串，输出“YES”，否则输出“NO”。

样例输入
12321
样例输出
YES
来源
*/
#include <cstdio>
#include <cstring>

int judge(char word[])
{
    int len = strlen(word);
    for (int i = 0; i < len / 2; i++)
    {
        if (word[i] != word[len - i - 1])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char word[256];
    while (gets(word))
    {
        if (judge(word) == 1)
        {
            printf("%s\n", "YES");
        }
        else
        {
            printf("%s\n", "NO");
        }
    }
}