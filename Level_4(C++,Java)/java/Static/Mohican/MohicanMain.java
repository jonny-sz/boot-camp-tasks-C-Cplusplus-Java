public class MohicanMain {
    public static void main(String[] args) throws NoOneMahicanException {
        Mohican david = new Mohican("David");
        Mohican bruce = new Mohican("Bruce");
        Mohican katty = new Mohican("Katty");
        Mohican katty2 = new Mohican(katty);
        Mohican den = new Mohican("Den");
        
        System.out.println("Last: " + Mohican.getLastMohican());
        System.out.println(david);
        System.out.println(bruce);
        System.out.println(katty);
        System.out.println(katty2);
        System.out.println(den);
        
        Mohican.kill(den);
        Mohican.kill(katty2);
        Mohican.kill(david);
        Mohican.kill(bruce);
        
        System.out.println("Last: " + Mohican.getLastMohican());
        System.out.println(david);
        System.out.println(bruce);
        System.out.println(katty);
        System.out.println(katty2);
        System.out.println(den);
        
        Mohican.kill(katty);
        
        System.out.println("Last: " + Mohican.getLastMohican());
    }
}
