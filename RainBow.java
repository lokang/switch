public class RainBow {

    public void colours(){
        String colors = "red";
        switch (colors){
            case "red":
                System.out.println("red colour");
                break;
            case "orange":
                System.out.println("Orange colour");
                break;
            case "yellow":
                System.out.println("Yellow Colour");
                break;
            case "green":
                System.out.println("Green colour");
                break;
            case "blue":
                System.out.println("Blue colour");
                break;
            case "indigo":
                System.out.println("Indigo color");
                break;
            case "violet":
                System.out.println("Violet colour");
                break;
                default:
                    System.out.println(colors + "is not Rainbow colour");
                    break;
        }
    }

    public static void main(String[] args){
        RainBow rainBow = new RainBow();
        rainBow.colours();
    }
}
