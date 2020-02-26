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
            for(int j = 0; j < battleBoard[i].length; j++ )
            {
                System.out.print("|" + battleBoard[i][j] + "|");
            }
        }
        System.out.println();

        int a = 1;
        while (k<=30)
        {
            System.out.print('-');
            a++;
        }
        System.out.println();
        
    }

    public final String TOMBSTONE = "Here Lies a Dead monster";
    
    private int Health = 500;
    private int attack = 20;
    private int movement = 2;
    private boolean alive = true;
    
    public String name = "Big Monster";
    public char nameChar1 = 'B';
    public int xPosition = 0;
    public int Position = 0;
    public static int numMonsters = 0;
    
        
    public int getAttack(){
        return attack;
    }
    public int getMovement(){
        return movement;
    }
    public int getHealth(){
        return Health;
    }
    public int getAlive(){
        return alive;
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
    
    public MonsterTwo(int Health, int attack, int movement, String name)
    {
        this.Health = Health;
        this.attack = attack;
        this.movement = movement;
        this.name = name;

        int maxXBoardSpace = battleBoard.length -1;
        int maxYBoardSpace = battleBoard[0].length-1;

        int randNumX, randNumY;

        do
        {
            randNumX = (int) (Math.random()*maxXBoardSpace);
            randNumY = (int) (Math.random()*maxYBoardSpace);

        }while(battleBoard[randNumX][randNumY] != '*');

        this.xPosition = randNumX;
        this.yPosition = randNumY;

        this.nameChar1 = this.name.charAt(0);

        battleBoard[this.xPosition][this.yPosition] = this.nameChar1;

        numMonsters++;




    }
    // Default constructor
    public MonsterTwo()
    {
    numMonsters++;
    }
    
    
    }