import java.util.Scanner;

public class task1 {
    public static void main(String args[]) {
        Scanner myObj = new Scanner(System.in);
        System.out.println("Enter marks of 5 subjects: ");
        int[] marks = new int[5];

        for (int i = 0; i < 5; i++) {
            System.out.println("Subject " + (i + 1) + ":");
            marks[i] = myObj.nextInt();
        }

        int total = 0;
        for (int i = 0; i < 5; i++) {
            System.out.println("Subject " + (i + 1) + ": " + marks[i]);
            total = total + marks[i];
        }
        myObj.close();

        float percentage = total/5;
        System.out.println("Percentage: " + percentage);
    }
}