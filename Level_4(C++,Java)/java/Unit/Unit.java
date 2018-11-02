public class Unit {
    private int damage;
    private int hitPoints;
    private int hitPointsLimit;
    private String name;
    
    private void ensureIsAlive() throws UnitIsDeadException {
        if ( this.hitPoints == 0 ) {
            throw new UnitIsDeadException();
        }
    }
    
    public Unit(String name, int hp, int dmg) {
        this.name = name;
        this.hitPoints = hp;
        this.hitPointsLimit = hp;
        this.damage = dmg;
    }
    
    public int getDamage() {
        return this.damage;
    }
    
    public int getHitPoints() {
        return this.hitPoints;
    }
    
    public int getHitPointsLimit() {
        return this.hitPointsLimit;
    }
    
    public String getName() {
        return this.name;
    }
    
    public void addHitPoints(int hp) throws UnitIsDeadException {
        this.ensureIsAlive();
    
        if ( hp < 0 ) {
            hp = 0;
        }
        
        System.out.println("------" + this.name + " drank an elixir of health" + "------");
        
        this.hitPoints += hp;
        
        if ( this.hitPoints > this.hitPointsLimit ) {
            this.hitPoints = this.hitPointsLimit;
        }
    }
    
    public void takeDamage(int dmg) throws UnitIsDeadException {
        this.ensureIsAlive();
    
        if ( dmg < 0 ) {
            dmg = 0;
        }
        
        this.damage = dmg;
    }
    
    public void attack(Unit enemy) throws UnitIsDeadException {
        this.ensureIsAlive();
        enemy.ensureIsAlive();
        
        System.out.println("------" + this.name + " Attack " + enemy.name + "------");
        
        enemy.hitPoints -= this.damage;
        
        if ( enemy.hitPoints < 0 ) {
            enemy.hitPoints = 0;
        }
        if ( enemy.hitPoints > 0 ) {
            System.out.println("------" + enemy.name + " Counterattack " + this.name + "------");
            enemy.counterAttack(this);
        }
    }
    
    public void counterAttack(Unit enemy) {
        enemy.hitPoints -= this.damage/2;
    
        if ( enemy.hitPoints < 0 ) {
            enemy.hitPoints = 0;
        }
    }
    
    public String toString() {
        StringBuffer out = new StringBuffer();
        
        out.append(this.name);
        out.append("[");
        out.append(this.hitPoints);
        out.append("/");
        out.append(this.hitPointsLimit);
        out.append("]");
        out.append(" damage: ");
        out.append(this.damage);
        
        return out.toString();
    }
}
