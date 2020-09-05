
public class Animals
{
 
    private String name = "Animal";
    
    public String favFood = "Food";

    protected final void changeName(String newName) //protected = can be used only by subclass, final = cannot be changed by subclass 
    {
        this.name = newName;
    }

    protected final String getName()
    {
        return this.name;
    }

    public void walkAround()
    {
        System.out.println(this.name+"walks around");

    }

public Animals()
{

}

public Animals(String name, String favFood)
{
    this.changeName(name);
    this.favFood = favFood;

}




}