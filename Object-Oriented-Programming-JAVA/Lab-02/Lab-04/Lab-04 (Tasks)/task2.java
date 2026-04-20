class Book {
    private String title;
    private String author;
    private double price;

    //Constructor
    public Book(String title, String author, double price){
        this.title = title;
        this.author = author;
        this.price = price;
    }

    //Setter (to update)
    public void setTitle(String title){
        if(title != null && !title.trim().isEmpty()){
            this.title = title;
        }
        else{
            System.out.println("Title cannot be empty!");
        }
    }

    public void setAuthor(String author){
        if(author != null && !author.trim().isEmpty()){
            this.author = author;
        }
        else{
            System.out.println("Author cannot be empty!");
        }
    }

    public void setPrice(double price){
        if(price > 0){
            this.price = price;
        }
        else{
            this.price = 0.0;
            System.out.println("Price cannot be negative. Set to 0.0");
        }
    }

    //Getter (to retrieve)
    public String getTitle(){ return title; }
    public String getAuthor(){ return author; }
    public double getPrice(){ return price; }
}

class task2 {
    public static void main(String[] args){
        Book b1 = new Book("The Art of War", "Sun Tzu", 1200);

        //for example:
        b1.setPrice(600);
        System.out.println("Current price: " + b1.getPrice());
    }
}