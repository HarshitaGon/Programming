import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        double p, c, m, e, cs;
        System.out.print("Enter marks in 5 subjects: ");
        p = sc.nextDouble();
        c = sc.nextDouble();
        m = sc.nextDouble();
        e = sc.nextDouble();
        cs = sc.nextDouble();

        double avg = (p + c + m + e + cs) / 5.0;

        if (avg < 50)
            System.out.println("The grade is F");
        else if (avg < 60)
            System.out.println("The grade is E");
        else if (avg < 70)
            System.out.println("The grade is D");
        else if (avg < 80)
            System.out.println("The grade is c");
        else if (avg < 90)
            System.out.println("The grade is B");
        else
            System.out.println("The grade is A");
    }
}