import java.util.Scanner;

public class task5 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.println("Enter radius of circle: ");
        float r = input.nextFloat();

        final float pi = 3.14159f;
        //Diameter
        float d = r * 2;
        //Circumference
        double c = 2 * pi * r;
        //Area
        double A = pi * r * r;

        System.out.printf("Diameter: %f%n", d);
        System.out.printf("Circumference: %f%n", c);
        System.out.printf("Area of Circle: %f%n", A);
        input.close();
    }
}
