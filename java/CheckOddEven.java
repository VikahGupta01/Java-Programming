import java.util.Scanner;

public class CheckOddEven {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("enter your number :");
        int number = sc.nextInt();

        if (number % 2 == 0) {
            System.out.println("even number");
        } else {
            System.out.println("odd number");
        }
        sc.close();

    }

}
