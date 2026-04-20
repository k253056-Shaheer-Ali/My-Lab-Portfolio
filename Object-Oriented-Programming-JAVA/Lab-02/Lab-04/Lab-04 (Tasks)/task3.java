class Programming {
    public String language;

    //Default Constructor:
    public Programming(){
        language = "JAVA";
    }

    //Parameterized Constructor:
    public Programming(String x){
        language = x;
    }

    //Method:
    void print(){
        System.out.println("Language: " + language);
    }
}

class task3 {
    public static void main(String[] args){
        Programming p1 = new Programming();
        p1.print();

        Programming p2 = new Programming("C");
        p2.print();
    }
}