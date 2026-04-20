import java.util.Scanner;

class Member {
    private int memberID;
    private String name;
    private double currentWeight;
    private double previousWeight; 
    private int workoutHours;

    // Setters
    public void setMemberID(int id) { this.memberID = id; }
    public void setName(String name) { this.name = name; }
    
    // We set the initial weight first, then the updated weight
    public void setInitialWeight(double weight) { this.previousWeight = weight; }
    public void setWeight(double newWeight) { this.currentWeight = newWeight; }
    public void setWorkoutHours(int hours) { this.workoutHours = hours; }

    // Getters
    public int getMemberID() { return memberID; }
    public String getName() { return name; }
    public double getWeight() { return currentWeight; }
    public int getWorkoutHours() { return workoutHours; }

    public void assessProgress() {
        // Task Requirement: hours >= 10 AND weight decreased
        if (workoutHours >= 10 && currentWeight < previousWeight) {
            System.out.println("Result: Good Progress");
        } else {
            System.out.println("Result: Needs Improvement");
        }
    }

    public void displayDetails() {
        System.out.println("\n--- Member Details ---");
        System.out.println("ID: " + memberID + " | Name: " + name);
        System.out.println("Previous Weight: " + previousWeight + "kg");
        System.out.println("Current Weight: " + currentWeight + "kg");
        System.out.println("Workout Hours: " + workoutHours);
    }
}

public class task4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // Creating an array to hold 3 Member objects dynamically
        Member[] members = new Member[3];

        for (int i = 0; i < members.length; i++) {
            members[i] = new Member(); // Create the object in the array
            
            System.out.println("\nRegistering Member " + (i + 1) + ":");
            System.out.print("Enter ID: ");
            members[i].setMemberID(sc.nextInt());
            sc.nextLine(); // consume newline

            System.out.print("Enter Name: ");
            members[i].setName(sc.nextLine());

            System.out.print("Enter Initial Weight: ");
            members[i].setInitialWeight(sc.nextDouble());

            System.out.print("Enter Current Weight: ");
            members[i].setWeight(sc.nextDouble());

            System.out.print("Enter Workout Hours: ");
            members[i].setWorkoutHours(sc.nextInt());
        }

        // Displaying all details and assessments
        System.out.println("\n======= FINAL ASSESSMENT REPORT =======");
        for (Member m : members) {
            m.displayDetails();
            m.assessProgress();
        }
        
        sc.close();
    }
}
