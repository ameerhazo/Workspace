

import java.util.Random;

public class Dice 
{


    private int value;
    private int sides;
    private Random generator;

    public Dice (int sides)
    {
        this.sides = sides;
        generator = new Random();
        this.value = this.Roll();
    }

    
    public int Roll()
    {
        this.value = this.generator.nextInt(this.sides) + 1;
        return this.value;
    }

    public int getValue()
    {
        return this.value;
    }

    public int getSides()
    {
        return this.sides;
    }

    public void setSides (int sides)
    {
        this.sides = sides;
    }
}