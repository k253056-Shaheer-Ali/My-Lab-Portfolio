import java.util.Scanner;

public class task9 {
    public static void main(String[] args){
        System.out.println("==== ProcessGrades ====");
        Scanner input = new Scanner(System.in);

        System.out.println("Number of students for grade processing");
        int x = input.nextInt();

        int[] marks = new int[x];

        int passCount=0, failCount=0;
        int sum=0;
        float avg;

        System.out.println("Enter obtained marks of the students: ");
        for(int i=0; i<x; i++){
            System.out.println("Student " + (i+1) + ": ");
            marks[i] = input.nextInt();

            sum += marks[i];

            if(marks[i] >= 60){
                passCount++;
            }
            else if(marks[i] >= 0){
                failCount++;
            }
            else{
                System.out.println("Enter valid marks!");
                i--;  // Optional: retry invalid input
            }
        }

        avg = (float)sum/x;
        System.out.printf("%nTotal average marks: %.2f", avg);
        System.out.println("\nPassed students: " + passCount);
        System.out.println("Failed students: " + failCount);
        input.close();
    }
}
