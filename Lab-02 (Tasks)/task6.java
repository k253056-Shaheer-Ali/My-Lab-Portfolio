import java.util.Scanner;

public class task6 {
    public static void main(String[] args){
        System.out.println("==== Student Information System ====");
        Scanner input = new Scanner(System.in);
        //name, student ID, and current course registrations
        System.out.println("Enter your name: ");
        String name = input.nextLine();
        System.out.println("Enter your student ID: ");
        String id = input.nextLine();
        System.out.println("How many courses have you registered?: ");
        int count = input.nextInt();

        // IMPORTANT: Clear the buffer after nextInt()
        input.nextLine();
        // Size the array exactly to what is needed
        String[] courses = new String[count];

        for(int i=0; i<count; i++){
            System.out.println("Enter course " + (i+1) + " name: ");
            courses[i] = input.nextLine();
        }

        //Display information
        System.out.println("===== Student Information =====");
        System.out.println("Name: " + name);
        System.out.println("ID: " + id);
        System.out.println("Registered Courses: " + count);
        for(int i=0; i<count; i++) {
            System.out.printf((i+1) + ". " + courses[i] + "%n");
        }
        input.close();
    }
}
