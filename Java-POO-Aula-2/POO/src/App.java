public class App {
    public static void main(String[] args) throws Exception {
        Cachorro clifford = new Cachorro("Clifford", 2016);
        Cachorro tifa = new Cachorro("Tifa", 2011);
        
        tifa.color = "Dourado";

        clifford.description();
        tifa.description();
    }
}

class Cachorro {
    
    String race;
    Float size;
    String color;
    int age;
    String name;

    public Cachorro(String name,  int birth){
        this.name = name;
        this.size = 40f;
        this.race = "Viralata";
        this.color = "Caramelo";
        this.age = 2023 - birth;
    }

    public void description(){
        System.out.println("Esse é " + this.name + ", ele é um cachorro da raça " + this.race + " da cor " + this.color);
    }

}