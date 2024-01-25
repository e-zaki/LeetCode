#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;
	int L[n1], R[n2];
	for (i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];
	i = 0;
	j = 0;
	k = l;
	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			arr[k] = L[i];
			i++;
		}
		else {
			arr[k] = R[j];
			j++;
		}
		k++;
	}
	while (i < n1) {
		arr[k] = L[i];
		i++;
		k++;
	}
	while (j < n2) {
		arr[k] = R[j];
		j++;
		k++;
	}
}

void mergeSort(int arr[], int l, int r)
{
	if (l < r) {
		int m = l + (r - l) / 2;
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);

		merge(arr, l, m, r);
	}
}

long int ft_max(int a, int b)
{
    if (a > b)
        return (a);
    return (b);
}

int maxArea(int h, int w, int* horizontalCuts, int horizontalCutsSize, int* verticalCuts, int verticalCutsSize){
    long int n = horizontalCutsSize, m = verticalCutsSize;
    mergeSort(horizontalCuts, 0, n - 1);
    mergeSort(verticalCuts, 0, m - 1);
    long int min, d_h = horizontalCuts[0], d_w = verticalCuts[0];
    for (int i = 0; i < n - 1; i++)
    {
        long int d = horizontalCuts[i + 1] - horizontalCuts[i];
        if (d_h < d)
            d_h = d;
    }
    d_h = ft_max(d_h, h - horizontalCuts[n - 1]);
    for (int i = 0; i < m - 1; i++)
    {
        long int d1 = verticalCuts[i + 1] - verticalCuts[i];
        if (d_w < d1)
            d_w = d1;
    }
    d_w = ft_max(d_w, w - verticalCuts[m - 1]);
    return ((d_w * d_h)%1000000007);
}