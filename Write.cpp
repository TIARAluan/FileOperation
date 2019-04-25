/*文件的写入*/
//C语言风格
#include <stdio.h>
#include <windows.h>
#include <string.h>
using namespace std;
int main(void)
{
    FILE *pFile = fopen("1.txt", "w");
    fwrite("Hello", 1, strlen("Hello"), pFile); //fwrite：写指定个数的字符
    fclose(pFile);
    system("pause");
}