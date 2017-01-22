int a[10] = {9,7,2,3,1,5,0,8,6,4};

int qsort(int l,int r){
	int j = l + 1,i;
	for (i = l + 1; i <= r; ++i){
		if (a[l] > a[i]){
			int tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
			++j;
		}
	}
	--j;
	{
		int tmp = a[l];
		a[l] = a[j];
		a[j] = tmp;
	}
	if (l < j - 1) qsort(l,j - 1);
	if (r > j + 1) qsort(j + 1,r);
	return 0;
}

int main(){
	qsort(0,9);
	int i;	
	for (i = 0; i < 10; ++i){
		write(a[i]);
	}
	return 0;
}
