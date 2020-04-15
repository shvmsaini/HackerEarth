#include<stdio.h>
int main()
{
	long long int n, i, s1, j, p, max, k, w,l=0;
	scanf("%lli", &n); 
	long long a[100000];
	long long s[100000];
	for (i = 0; i < n; ++i)
	{
		scanf("%lli", (a + i)); 
 
		if (i == 0)
			s[i] = a[i];
		else
			s[i] = s[i - 1] + a[i];
	}
	max = -10000000;
	for (i = 0; i < n; ++i)
	{
		k = 2;
		p = 0; 
		l = 3;
 
		for (j = 1;; ++j)
		{
			
			if ((i + k) > (n - 1))
				break;
			p = i + k; 
			k = k + l;
			l = l + 1;
			
		}
		if (p == 0)
			w = a[i]; 
		else if (i == 0)
			w = s[p];  
		else
			w = s[p] - s[i - 1];
		if (w > max)
			max = w;
		
	}
	printf("%lli\n", max);
	return 0;
}
