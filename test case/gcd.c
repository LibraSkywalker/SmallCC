int a = 1920, b = 1080;

int gcd(int a,int b){
	if (a % b) {
		return gcd(b, a % b);
	} else {
		return b;
	}
}

int main(){
	write(gcd(a,b));
	return 0;
}
