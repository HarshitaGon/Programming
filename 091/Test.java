import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        Integer ref = func();
        System.out.println(ref);
    }

    static Integer func() {
        Integer ref1 = Integer.valueOf(10);

        return ref1;
    }
}