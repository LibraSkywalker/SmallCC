int a[10] = {9,7,2,3,1,5,0,8,6,4};
int b[10];
int csort(int l,int r){
	if (l == r) return;	
	int mid = (l + r) >> 1;
	csort (l , mid);
	csort (mid + 1,r);
	int i = l;
	int j = mid + 1;
	int k = l;
	for (;(i <= mid) && (j <= r);){
		if (a[i] < a[j]){
			b[k] = a[i];
			++k;
			++i;
		} else {
			b[k] = a[j];
			++k;
			++j;
		}
	}
	for (;i <= mid;){
		b[k] = a[i];
		++k;
		++i;
	}
	for (;j <= r;){
		b[k] = a[j];
		++k;
		++j;
	}
	for (i = l; i <= r; i++){
		a[i] = b[i];
	}
}

int main(){
	csort(0,9);
}
