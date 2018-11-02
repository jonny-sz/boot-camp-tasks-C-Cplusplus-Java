public class GunMain {
    public static void main(String[] args) throws OutOfRoundsException, NotReadyException {
        Gun colt = new Gun("Colt", 7);
        
        System.out.println(colt);
        
        for ( int i = 0; i < 20; i++ ) {
            if ( colt.getAmount() == 0 ) {
                colt.reload();
                System.out.println(colt);
                colt.prepare();
                System.out.println(colt);
            }
            colt.shoot(); 
            System.out.println(colt);
        }
    }
}
