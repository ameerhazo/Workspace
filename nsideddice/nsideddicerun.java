


public class nsideddicerun
{
    public static void main(String[] args) 
    {
        
            Dice Normal = new Dice(6);
            
            System.out.printf("The dice has %d sides. The initial value is %d and after rolling, the value is %d.", Normal.getSides(),Normal.getValue(),Normal.Roll());
        
        
        
    }
}