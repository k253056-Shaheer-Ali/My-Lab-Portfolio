class Car {
    private String carName;
    private String carType;

    public Car(String carName, String carType) {
        this.carName = carName;
        this.carType = carType;
    }

    private String getCarName() {
        return carName;
    }

    //Inner Class
    class Engine {
        private String engineType;

        //public Engine(String engineType) {this.engineType = engineType;}
        // no constructor needed — setEngine() sets it

        public void setEngine() {
            if(carType.equalsIgnoreCase("4T")) {
                if(carName.equalsIgnoreCase("Mehran")) {
                    engineType = "small";
                }
                else {
                    engineType = "large";
                }
            }
            else {
                engineType = "Bigger";
            }
        }

        public String getEngineType() {
            return engineType;
        }
    }
}

class task3 {
    public static void main(String[] args) {
        Car car = new Car("Mehran", "4T");

        Car.Engine engine = car.new Engine();

        engine.setEngine();
        System.out.println(engine.getEngineType());
    }
}