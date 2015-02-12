#include <iostream>
#include <algorithm>

using namespace std;

int cmp (const void *a, const void *b)
{
    //return (*(int*)a - *(int*)b );//从小到大
    return (*(int*)b - *(int*)a );//从大道小;
}

bool com (int a, int b)
{
    //return a > b;//从大到小
    return a < b;//从小到大(或者调用去掉com参数也可以)
}

int main ()
{
    int a[10] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};

    //qsort(a, 10, sizeof(int), cmp);
    sort(a, a+10,com);
    for(int i=0; i<10; i++)
        cout << a[i] << " ";
    cout << endl;
}
