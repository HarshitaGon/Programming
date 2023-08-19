class Test {
    public static void main(String[] args) {
        // int i = 1;

        // while (i <= 26) {
        //     System.out.printf("| %2d | %c |\n", i, i + 'a' - 1);
        //     ++i;
        // }

        int i = 1;

        while (i <= 9) {
            System.out.println("|  " + i + " | " + (char) (i + 'a' - 1) + " | ");
            ++i;
        }

        while (i <= 26) {
            System.out.println("| " + i + " | " + (char) (i + 'a' - 1) + " | ");
            ++i;
        }
    }
}

/*

 * Java also has a printf() function, which works just like C's printf().

 */