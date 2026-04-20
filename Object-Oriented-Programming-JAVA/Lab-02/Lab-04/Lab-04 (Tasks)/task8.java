class GarbageCollection {
    //Constructor:
    public GarbageCollection(){
        System.out.println("Object created");
    }

    //Finalize:
    protected void finalize(){
        System.out.println("Object deleted");
    }
}

class task8 {
    public static void main(String[] args){
        System.out.println("=== Garbage Collection Demo ===\n");

        //1. Null a reference:
        GarbageCollection gc1 = new GarbageCollection();
        gc1 = null;
        System.gc();

        //2. By assigning a reference to another object:
        GarbageCollection gc2 = new GarbageCollection();
        GarbageCollection gc3 = new GarbageCollection();
        gc2 = gc3;
        System.gc();

        //3. By creating an anonymous object.
        new GarbageCollection();
        System.gc();
    }
}