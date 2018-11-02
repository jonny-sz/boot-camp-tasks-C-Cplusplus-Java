public class UnitMain {
    public static void main(String[] args) throws UnitIsDeadException {
        Unit troll = new Unit("Troll", 200, 50);
        Unit witcher = new Unit("Witcher", 150, 100);
        
        System.out.println(troll);
        System.out.println(witcher);
        
        troll.attack(witcher);
        
        System.out.println(troll);
        System.out.println(witcher);
        
        witcher.attack(troll);
        
        System.out.println(troll);
        System.out.println(witcher);
        
        troll.attack(witcher);
        
        System.out.println(troll);
        System.out.println(witcher);
        
        witcher.addHitPoints(30);
        
        System.out.println(troll);
        System.out.println(witcher);
        
        witcher.attack(troll);
    }
}
