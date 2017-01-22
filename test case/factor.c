int factor(int n){
	if (n == 0) return 1;
	if (n < 0) return -1;
	return n * factor(n - 1);
}

int main(){
	int n;
	read(n);
	write(factor(n));
	return 0;
}
