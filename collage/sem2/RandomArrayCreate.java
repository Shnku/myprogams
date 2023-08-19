//this is a container to create 
public class RandomArrayCreate {
    final int size = 10;
    java.util.Random rand = new java.util.Random();

    public RandomArrayCreate(int arr[], int s) {
        arr = new int[s];
        // if (s != null) { //!error...
        //     array = new int[s];
        // } else
        //     array = new int[size];
    }

    public RandomArrayCreate(int a[]) {
        a = new int[size];
    }

    public RandomArrayCreate() {
    }

    public void fillArrayRandomly(int[] arr) {
        rand.setSeed(10);
        for (int i = 0; i < arr.length; i++) {
            arr[i] = rand.nextInt(10 + i + (5 * i));
        }
    }
}
