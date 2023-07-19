/*
 * 1. Take a array size and array as input and find the sum of all the members and display it .
 * 2. Take a array size and array as input and find the max and min and display it .
 * 3. Take a array size and array as input and find the repeated number and display them
 * 4. Take a array size and array as input and perform –
 * a) Bubble sort in descending order
 * b) After sorting , perform binary search with a number taken as input .
 */

import java.util.Scanner;

/**
 * Arrayprograms
 */
public class Arrayprograms {

    // final int size=10;
    int size;
    int[] array;

    void getInput() {
        Scanner sc = new Scanner(System.in);
        // try (Scanner sc = new Scanner(System.in);) {
        System.out.println("enter the array size: ");
        size = sc.nextInt();
        array = new int[size];
        System.out.println("enter array elements:");
        for (int i = 0; i < size; i++) {
            if (!sc.hasNextInt())
                array[i] = 0;
            else
                array[i] = sc.nextInt();
        }
        // sc.close();
    }

    int sumOfElements() {
        int sum = 0;
        for (int i : array)
            sum += i;
        return sum;
    }

    int findMax() {
        int max = array[0];
        for (int i : array)
            if (max < i)
                max = i;
        return max;
    }

    int[][] whichRepeated_how_menyTimes() {
        int a[][] = new int[size][2];
        int id1 = 0;
        for (int i : array) {
            a[id1][1] = 0;
            for (int j = 0; j < array.length; j++) {
                if (i == array[j]) {
                    if (a[j][1] >= 1) {
                        a[id1][1]++;
                        break;
                    }
                    a[id1][0] = i;
                    a[id1][1]++;
                    // id1++ //!wrong...
                }
            }
            id1++;
        }
        return a;
    }

    // ?we can do it with binary search...
    //!this is not working...
    /* 
    int[][] whichRepeated_how_menyTimes() {
        int a[][] = new int[size][2];
        int indx = 0;
        for (int is : array) {
            a[indx][1] = 0;
            if (binarySearch(is)) {
                a[indx][0] = is;
                a[indx++][1]++;
            }
        }
        // return a = null;
        return a;
    }
    */

    void bubbleSort() {
        for (int i = 0; i < array.length - 1; i++) {
            for (int j = 0; j < array.length - i - 1; j++) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    boolean binarySearch(int element) {
        int mid;
        for (int i = 0, j = array.length - 1; i <= j;) {
            mid = (i + j) / 2;
            if (element == array[mid])
                return true;
            else if (element < array[mid])
                j = mid - 1;
            else
                i = mid + 1;
        }
        return false;
    }

    void display() {
        for (int i : array) {
            System.out.print(i + " ");
        }
    }

    /******************************** */
    /* the main function.. */
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        Arrayprograms foo = new Arrayprograms();

        System.out.println("array input: ");
        foo.getInput();
        System.out.println("****Displaying the array******");
        foo.display();
        System.out.println("\n*******************************");
        System.out.println("1:sum\n2:max\n3:howmenytimes\n4:bubble sort\n5:binary search\nenter a choice: ");
        short k = input.nextShort();
        switch (k) {
            case 1:
                System.out.println("sum is: " + foo.sumOfElements());
                // break;
            case 2:
                System.out.println("max is: " + foo.findMax());
                // break;
            case 3:
                System.out.println("which element how meny times..");
                int a[][] = foo.whichRepeated_how_menyTimes();
                for (int[] is : a) {
                    for (int is2 : is) {
                        System.out.print(is2 + " ");
                    }
                    System.out.println("times");
                }
                // break;
            case 4:
                System.out.println("\nafter shorting:");
                foo.bubbleSort();
                foo.display();
                // break;
            case 5:
                System.out.println("\nen the element to search:");
                int search = input.nextInt();
                if (foo.binarySearch(search))
                    System.out.println("found");
                else
                    System.out.println("not found");
                break;
            default:
                break;
        }
        input.close();
    }
}
