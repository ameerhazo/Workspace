public class Monster{

public final String TOMBSTONE = "Here Lies a Dead monster";

private int Health = 500;
private int attack = 20;
private int movement = 2;
private int xPosition = 0;
private int yPosition = 0;
private boolean alive = true;

public String name = "Big Monster";

    
public int getAttack(){
    return attack;
}
public int getMovement(){
    return movement;
}
public int getHealth(){
    return Health;
}
public void setHealth(int decreaseHealth){
    Health = Health - decreaseHealth;
    if(Health < 0)
    {
        alive = false;
    }
}

public void setHealth(double decreaseHealth)
{
    int intDecreaseHealth = (int) decreaseHealth;
    Health = Health - intDecreaseHealth;
    if(Health < 0)
    {
        alive = false;
    }
}

public Monster(int Health, int attack, int movement)
{
    this.Health = Health;
    this.attack = attack;
    this.movement = movement;
}
// Default constructor
public Monster()
{

}


}