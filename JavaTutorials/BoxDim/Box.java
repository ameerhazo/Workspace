
public class Box
{

    

        private int base, width ,height;

       

        public Box (int base, int width, int height)
        {
            this.base = base;
            this.width = width;
            this.height = height;

        }

        public int BoxArea()
        {
            return this.base * this.width;
        }

        public int BoxVolume()
        {
            return this.base * this.width * this.height;
        }

    }
