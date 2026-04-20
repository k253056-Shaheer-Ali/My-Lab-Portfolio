class Holiday {
    public String name;
    public int day;
    public String month;

    //Regular Constructor:
    public Holiday(String name, int day, String month){
        this.name = name;
        this.day = day;
        this.month = month;
    }

    //Copy Constructor (4(b)):
    public Holiday(Holiday other){
        this.name = other.name;
        this.day = other.day;
        this.month = other.month;
    }

    //Method:
    public boolean inSameMonth(Holiday other){
        return this.month.equalsIgnoreCase(other.month);
    }
}

class task4 {
    public static void main(String[] args){
        Holiday h1 = new Holiday("Independence Day", 14, "August");

        //Creating other holiday to check if month are equal using method
        Holiday h2 = new Holiday("Defense Day", 6, "September");

        if(h1.inSameMonth(h2)){
            System.out.println("Both holidays occur in the same month!");
        }
        else{
            System.out.println("Both holidays does not occur in the same month!");
        }

        // 4(b) Demonstrating the copy constructor
        Holiday h3 = new Holiday(h1);
        //Printing both original and copy to verify:
        System.out.println("Object 1 using regular constructor: ");
        System.out.println("Name: " + h1.name);
        System.out.println("Day: " + h1.day);
        System.out.println("Month: " + h1.month);

        System.out.println("Object 3 using copy constructor: ");
        System.out.println("Name: " + h3.name);
        System.out.println("Day: " + h3.day);
        System.out.println("Month: " + h3.month);

    }
}