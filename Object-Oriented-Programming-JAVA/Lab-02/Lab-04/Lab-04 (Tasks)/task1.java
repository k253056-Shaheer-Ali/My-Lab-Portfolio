import java.util.Scanner;

class Box {
    public int width;
    public int height;

    void print(){
        System.out.println("Width: " + width);
        System.out.println("Height: " + height);
    }

    //Constructors:
    public Box(int width, int height){
       if(width > 0 && height > 0){
           this.width = width;
           this.height = height;
       }
    }

    public Box(int height){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter width: ");
        this.width = sc.nextInt();
        this.height = height;
        sc.close();
    }

    public Box(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter width: ");
        this.width = sc.nextInt();
        System.out.println("Enter height: ");
        this.height = sc.nextInt();
        sc.close();
    }
}

class task1 {
    public static void main(String[] args){
        Box b1 = new Box(10, 15);
        b1.print();

        Box b2 = new Box(15);
        b2.print();

        Box b3 = new Box();
        b3.print();
    }
}