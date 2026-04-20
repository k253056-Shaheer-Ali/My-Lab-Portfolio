interface Teaching {
    public void conductLecture();
}   

interface Research {
    public void publishPaper();
}

class Staff {
    private String name;
    private int id;
    private String department;

    public Staff(String name, int id, String department){
        this.name = name;
        this.id = id;
        this.department = department;
    }

    public void displayInfo(){
        System.out.println("==== Staff Information ====");
        System.out.println("Name: " + name);
        System.out.println("ID: " + id);
        System.out.println("Department: " + department);
    }
}

class Professor extends Staff implements Teaching, Research {

    public Professor(String name, int id, String department){
        super(name, id, department);
    }

    public void conductLecture(){
        System.out.println("Conducting lecture.");
    }

    public void publishPaper(){
        System.out.println("Publishing research paper.");
    }
}

class LabInstructor extends Staff implements Teaching {

    public LabInstructor(String name, int id, String department){
        super(name, id, department);
    }

    public void conductLecture(){
        System.out.println("Conducting lecture.");
    }

    // public void publishPaper(){ System.out.println("Not allowed!"); }
}

class ResearchAssistant extends Staff implements Research{

    public ResearchAssistant(String name, int id, String department){
        super(name, id, department);
    }
    
    // public void conductLecture(){ System.out.println("Not allowed!");}

    public void publishPaper(){
        System.out.println("Publishing research paper.");
    }

    // If someone tries to call lecture on ResearchAssistant:
    public void conductLecture() {
        System.out.println("Not allowed! Research Assistants cannot conduct lectures.");
    }
}

public class task3 {
    public static void main(String[] args) {
        Professor professor = new Professor("Shayan", 123, "Black-ops");
        LabInstructor labInstructor = new LabInstructor("Musa", 321, "Virtual Reality");
        ResearchAssistant researchAssistant = new ResearchAssistant("Sherry", 456, "Programming");

        professor.conductLecture();
        professor.publishPaper();
        professor.displayInfo();
        System.out.println("");

        labInstructor.conductLecture();
        labInstructor.displayInfo();
        System.out.println("");
        
        researchAssistant.publishPaper();
        researchAssistant.displayInfo();
    }
}
