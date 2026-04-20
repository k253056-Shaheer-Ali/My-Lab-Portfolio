import java.util.Scanner;

public class task2 {
    public static void main(String[] args){
        double x, y;

        Scanner myObj = new Scanner(System.in);
        System.out.println("Enter two numbers: ");
        x = myObj.nextDouble();
        y = myObj.nextDouble();

        double result = x * y;
        System.out.println("Resultant Product: " + result);

        myObj.close();
    }

}
