import java.util.Scanner;

public class GPSum {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter first term (a): ");
        double a = sc.nextDouble();

        System.out.print("Enter common ratio (r): ");
        double r = sc.nextDouble();

        System.out.print("Enter number of terms (n): ");
        double n = sc.nextDouble();

        double sum;

        if(r == 1)
            sum = a * n;
        else
            sum = a * (1 - Math.pow(r, n)) / (1 - r);

        System.out.println("Sum of GP = " + sum);

        sc.close();
    }
}
