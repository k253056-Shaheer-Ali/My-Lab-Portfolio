abstract class Character {
    protected int health;
    protected int attackPower;
    protected String name;

    public Character(int health, int attackPower, String name) {
        this.health = health;
        this.attackPower = attackPower;
        this.name = name;
    }

    abstract public void specialAbility();

    public void attack(Character obj) {
        obj.health = obj.health - this.attackPower; 
    }
}

class Warrior extends Character {

    public Warrior(int health, int attackPower, String name) {
        super(health, attackPower, name);
    }

    public void specialAbility() {
        attackPower = attackPower * 2;  
    }
}

class Mage extends Character {

    public Mage(int health, int attackPower, String name) {
        super(health, attackPower, name);
    }

    public void specialAbility() {
        attackPower = attackPower + 20; 
    }
}

class Archer extends Character {

    public Archer(int health, int attackPower, String name) {
        super(health, attackPower, name);
    }

    public void specialAbility() {
        attackPower = attackPower + 15; 
    }
}

class task2 {
    public static void main(String[] args) {
        Warrior warrior = new Warrior(100, 30, "Thor");
        Mage    mage    = new Mage   (80,  20, "Merlin");
        Archer  archer  = new Archer (90,  25, "Legolas");

        System.out.println("=== Before special abilities ===");
        System.out.println(warrior.name + " attack power: " + warrior.attackPower);
        System.out.println(mage.name    + " attack power: " + mage.attackPower);
        System.out.println(archer.name  + " attack power: " + archer.attackPower);

        warrior.specialAbility(); // doubles attackPower
        mage.specialAbility();    // +20
        archer.specialAbility();  // +15

        System.out.println("\n=== After special abilities ===");
        System.out.println(warrior.name + " attack power: " + warrior.attackPower);
        System.out.println(mage.name    + " attack power: " + mage.attackPower);
        System.out.println(archer.name  + " attack power: " + archer.attackPower);

        System.out.println("\n=== Battle ===");
        warrior.attack(mage);
        System.out.println(mage.name + " health after warrior attack: " + mage.health);

        mage.attack(archer);
        System.out.println(archer.name + " health after mage attack: " + archer.health);
    }
}