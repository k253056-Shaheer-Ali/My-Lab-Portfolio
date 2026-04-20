import java.util.Scanner;

public class task3 {
    public static void main(String[] args){
        System.out.println("==== Fundamental Arithmetic Operations ====");
        Scanner input = new Scanner(System.in);

        System.out.println("Enter two integer numbers: ");
        int x = input.nextInt();
        int y = input.nextInt();

        System.out.println("Addition: " + (x+y));
        System.out.println("Subtraction: " + (x-y));
        System.out.println("Multiplication: " + (x*y));
        System.out.println("Division: " + ((float)x/y));
        System.out.println("Remainder: " + (x%y));
        input.close();
    }
}
