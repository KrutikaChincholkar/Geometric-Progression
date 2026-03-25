import java.util.Scanner;

public class GPNthTerm {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter first term (a): ");
        int a = sc.nextInt();

        System.out.print("Enter common ratio (r): ");
        int r = sc.nextInt();

        System.out.print("Enter term number (n): ");
        int n = sc.nextInt();

        double term = a * Math.pow(r, n - 1);

        System.out.println("The " + n + "th term of the GP is: " + term);

        sc.close();
    }
}
