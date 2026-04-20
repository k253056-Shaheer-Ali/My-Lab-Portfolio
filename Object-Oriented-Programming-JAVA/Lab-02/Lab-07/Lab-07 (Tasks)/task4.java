class Book {
    protected int bookID;
    protected String bookName;
    protected String bookAuthor;
    protected String ISBN;
    protected double price;

    public Book(int bookID, String bookName, String bookAuthor, String ISBN, double price) {
        this.bookID = bookID;
        this.bookName = bookName;
        this.bookAuthor = bookAuthor;
        this.ISBN = ISBN;
        this.price = price;
    }

    public void displayDetails(){
        System.out.println("==== Book Details ====");
        System.out.println("Id: " + bookID);
        System.out.println("Name: " + bookName);
        System.out.println("Author: " + bookAuthor);
        System.out.println("ISBN: " + ISBN);
        System.out.println("Price: " + price);
    }
}

class Category1 extends Book {
    protected String category;

    public Category1(int bookID, String bookName, String bookAuthor, String ISBN, double price, String category){
        super(bookID, bookName, bookAuthor, ISBN, price);
        this.category = category;
    }

    public void displayDetails() {
        super.displayDetails();
        System.out.println("Category: " + category);
        System.out.println("======================");
    }
}

class task4 {
    public static void main(String[] args) {
        // Upcasting: child object stored in parent reference
        Book b1 = new Category1(101, "Let Us C", "idk", "978-8183331630", 1200.99, "C");
        Book b2 = new Category1(102, "Head First Java", "idk", "978-0596009205", 1500.00, "Java");
        Book b3 = new Category1(103, "C++ Primer", "idk", "978-0321714114", 1800.50, "C++");
        
        b1.displayDetails();
        b2.displayDetails();
        b3.displayDetails();
    }
}
