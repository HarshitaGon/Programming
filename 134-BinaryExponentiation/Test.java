import java.util.Scanner;

class Test {
    static final long MOD = 1000000007L;

    public static long binExpItr(long base, long exp) {
        long ans = 1;
        base %= MOD;

        while (exp > 0) {
            if ((exp & 1) == 1) {   // if exp is odd
                ans = (ans * base) % MOD;
            }

            base = (base * base) % MOD;     // square the base
            exp >>= 1;    //right shift of the exponent : 13(1101) -> 1101 -> 110 -> 11 -> 1
        }

        return ans;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        long base = sc.nextLong();
        long exp = sc.nextLong();

        long result = binExpItr(base, exp);

        System.out.println(result);
    }
}