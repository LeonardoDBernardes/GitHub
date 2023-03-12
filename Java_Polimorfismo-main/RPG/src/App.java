public class App {
    public static void main(String[] args) throws Exception {
        System.out.println("RPG Start");

        Mage luiz = new Mage("Luiz", 3, 8, 8, 100);
        System.out.println(luiz.getName());
        System.out.println("Vida: " + luiz.getHealth());


        Warrior giovanna = new Warrior("Giovanna ", 8, 5, 6);
        System.out.println(giovanna.getName());
        System.out.println("Vida: " + giovanna.getHealth());

        giovanna.attack(luiz);
        System.out.println("Vida restante: " + luiz.actualHealth);
        giovanna.attack(luiz);
        luiz.Hello(giovanna);


        System.out.println("RPG End");
    }
}

abstract class Character{
    protected String name;
    protected int strength;
    protected int intelligence;
    protected int constitution;

    private int health;
    public int actualHealth;

    public Character(String name, int strength, int intelligence, int constitution, int health){
        this.name = name;
        this.strength = strength;
        this.intelligence = intelligence;
        this.constitution = constitution;
        this.health = health;
        this.actualHealth = health;
    }

    public void Hello(Character target){
        System.out.println(
            this.getName() +
            " diz oi para " +
            target.getName()
        );
    }

    public int getHealth(){
        return health;
    }

    public final String getName(){
        return this.name;
    }

    public abstract void attack(Character target);

    public abstract void job();
}

class Mage extends Character{
    protected int mana;

    public Mage(String name, int strength, int intelligence, int constitution, int mana){
        super(name, strength, intelligence, constitution, constitution * 4);
        this.mana = mana;
    }

    public int getMana(){
        return this.mana;
    }

    @Override
    public void attack(Character target){
        int dano = this.intelligence * 2;
        System.out.println("Total de dano mágico: " + dano);
        target.actualHealth -= dano;

        if(target.actualHealth > 0){
            System.out.println(target.getName() + " Sobreviveu");
        }else{
            System.out.println(target.getName() + " Morreu");
        }    
    }

    @Override
    public void job(){
        System.out.println("MAGE");
    }

}

class Warrior extends Character{

    public Warrior(String name, int strength, int intelligence, int constitution){
        super(name, strength, intelligence, constitution, constitution * 5);
    }

    @Override
    public void attack(Character target){
        int dano = this.strength * 3;
        System.out.println("Total de dano físico: " + dano);
        target.actualHealth -= dano;

        if(target.actualHealth > 0){
            System.out.println(target.getName() + " Sobreviveu");
        }else{
            System.out.println(target.getName() + " Morreu");
        } 
    }

    @Override
    public void job(){
        System.out.println("WARRIOR");
    }

}