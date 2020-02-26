public class Monsterini {
     public static void main(String[] args) {
    
        Monster Frank = new Monster();
        
        Frank.name = "Frank";

        System.out.println(Frank.name +"attack is" + Frank.getAttack());
        
        // System.out.printf("%s has an attack of %d",Frank.name,Frank.getAttack());

}
}