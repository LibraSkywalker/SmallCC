struct {
	int key;
	int value;
} a;

int answer(int n){
	if (n != a.key) return -1; 
	return a.value;
}

int main(){
	a.key = 308;	
	a.value = 215;
	int n;
	read(n);
	write(answer(n));
	return 0;
}
