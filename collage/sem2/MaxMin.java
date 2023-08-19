// import RandomArrayCreate;

public class MaxMin {
    static int[] maxmin(int[] a) {
        int min, max;
        int mm[] = new int[2];
        min = max = a[0];
        for (int i = 1; i < a.length; i++) {
            if (a[i] > max) {
                max = a[i];
            } else if (a[i] < min) {
                min = a[i];
            }
        }
        mm[0] = min;
        mm[1] = max;
        return mm;
    }

    public static void main(String[] args) {

        int arr[] = new int[10];
        RandomArrayCreate random = new RandomArrayCreate();
        Arrayprograms disp = new Arrayprograms();
        random.fillArrayRandomly(arr);
        disp.display(arr);

        int mxmn[] = maxmin(arr);
        disp.display(mxmn);

    }

}

//output..
/*
Displaying array:
3 7 21 26 32 16 39 12 57 22 
Displaying array:
3 57 
 */
