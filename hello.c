#include <iostream>
using namespace std;

const int maxn = 1e6 + 10;
int q[maxn];
int n;

void quick_sort(int q[], int l, int r)
{
	if(l >= r) return;
	int x = q[l + r >> 1], i = l - 1, j = r + 1;
	while(i < j)
	{
		while(q[++ i] < x);
		while(q[-- j] > x);
		if(i < j) swap(q[i], q[j]);		
	}
	quick_sort(q, l, j);
	quick_sort(q, j + 1, r);
}

int main()
{
	scanf("%d",&n);
	for(int i = 0; i < n; i ++) scanf("%d",&q[i]);
	
	quick_sort(q, 0, n - 1);
	//loving xiongfang.
	return 0;
}
