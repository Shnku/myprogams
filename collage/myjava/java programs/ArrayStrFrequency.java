public class ArrayStrFrequency {
    static int[][] getFrequency(int[] array) {
        int[][] count = new int[array.length][2];
        int indx = 0;
        for (int i = 0; i < array.length; i++) {
            count[indx][0] = array[i];
            count[indx++][1] = 0;
            for (int j = 0; j < indx; j++) {
                if (array[i] == count[j][0]) {
                    count[j][1]++;
                }
            }
        }
        return count;
    }

    // main metrhgod.............................
    public static void main(String[] args) {
        int[] arr = { 1, 3, 4, 2, 3, 1, 2, 3 };
        int[][] freq = getFrequency(arr);
        for (int[] is : freq) {
            for (int is2 : is) {
                System.out.print(is2 + " ");
            }
            System.out.println();
        }

    }

    static int[][] getFrequency(String s) {
        int[][] count = new int[s.length()][2];
        return count;

    }

    static void display() {
    }
}
