class Rectangle {
    private double length;
    private double breadth;

    public Rectangle(double length, double breadth){
        this.length = length;
        this.breadth = breadth;
    }

    public void printArea(){
        System.out.println("Area of Rectangle: " + (length * breadth));
    }

    public void printPerimeter(){
        System.out.println("Perimeter of Rectangle: " + ((2*length)+(2*breadth)));
    }
}

class Square extends Rectangle{
    private double side;

    public Square(double side){
        super(side, side);
        this.side = side;
    }

    public void printArea(){
        System.out.println("Area of Square: " + (side*side));
    }

    public void printPerimeter(){
        System.out.println("Perimeter of Square: " + (4*side));
    }
}
class task3 {
    public static void main(String[] args) {
        Rectangle r = new Rectangle(10, 20);
        r.printArea();
        r.printPerimeter();

        Square s = new Square(10);
        s.printArea();
        s.printPerimeter();
    }
}