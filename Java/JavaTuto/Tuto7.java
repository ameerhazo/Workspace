public class Monster

{
     public final String TOMBSTONE = "Here lies a dead monster";

     private int health = 500;
     private int attack = 20;
     private int movement = 2;
     private int xPosition = 0;
     private int yPosition = 0;
     private boolean alive = true;

     public String name = "Big Monster";

     public int getAttack()
     {
         return attack; 
     }

     public int getMovement()
     {
         return movement;
     }

     public int getHelath()
     {
         return health;
     }

     public void setHealth(int decreaseHealth)
     {
         health = health - decreaseHealth;
         if(health < 0)
         {
             alive = false;
         }

     }

     public void setHealth(double decreaseHealth)
     {
         int intdecreaseHealth = (int) decreaseHealth;
         health = health - intdecreaseHealth;
         if (intdecreaseHealth < 0)
         {
             alive = false;
         }
     }

     public Monster(int newHealth, int newAttack, int newMovement)
     {
        health = newHealth;
        attack = newAttack;
        movement = newMovement;
     }

     public Monster()

}