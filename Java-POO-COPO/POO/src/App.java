public class App {
    public static void main(String[] args) throws Exception {
        Glass copo = new Glass(300f);
        copo.setLiquidVolume(200f);
        System.out.println("Volume do copo:" + copo.getVolume());
        System.out.println("Volume de liquido:"+ copo.getLiquidVolume());
        System.out.println(copo.description());
    }
}

class Cachorro {
    
    String race;
    Float size;
    private String color;
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

class Glass{
    private float volume;
    private float liquidVolume;

    public Glass(float volume){
        this.volume = volume;
        this.liquidVolume = 0f;
    }

    public float getLiquidVolume(){
        return liquidVolume;
    }

    public void setLiquidVolume(float liquidVolume){
        if(liquidVolume < 0){
            return;
        }
        if(liquidVolume > this.volume){
            this.liquidVolume = this.volume;
            return;
        }
        this.liquidVolume = liquidVolume;
    }

    public float getVolume(){
        return volume;
    }

    public String description(){
        return ("Volume do copo: " + this.volume + " Volume do liquido: " + this.liquidVolume);
    }
}