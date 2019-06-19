import java.util.Arrays;
public class MonsterTwo{

    static char [] [] battleBoard = new char [10] [10];

    public static void buildBattleBoard()
    {
        for(char [] row : battleBoard)
        {
            Arrays.fill(row, '*');
        }
    }
    public static void redrawBoard()
    {
        int k = 1;
        while (k<=30)
        {
            System.out.print('-');
            k++;
        }
        System.out.println();

        for (int i = 0; i < battleBoard.length; i++)
        {
            for(int i = 0; i < battleBoard )
            {}
        }
    }

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
    
    public MonsterTwo(int Health, int attack, int movement)
    {
        this.Health = Health;
        this.attack = attack;
        this.movement = movement;
    }
    // Default constructor
    public MonsterTwo()
    {
    
    }
    
    
    }