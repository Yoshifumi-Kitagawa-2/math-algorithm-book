// 正の整数 A と B の最大公約数を返す関数
// GCD は Greatest Common Divisor（最大公約数）の略
long long GCD(long long A, long long B) {
	long long Answer = 0;
	for (long long i = 1; i <= min(A, B); i++) {
		if (A % i == 0 && B % i == 0) Answer = i;
	}
	return Answer;
}