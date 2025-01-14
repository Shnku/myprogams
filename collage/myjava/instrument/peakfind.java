
// A Java program to find a peak element using divide and
// conquer
import java.util.*;

class PeakElement {

	static int findPeak(int arr[], int n) {
		// Arrays.sort(arr);
		int l = 0;
		int r = n - 1;
		int mid = 0;

		while (l <= r) {
			mid = (l + r) / 2;

			if ((mid == 0 || arr[mid - 1] <= arr[mid])
					&& (mid == n - 1 || arr[mid + 1] <= arr[mid]))
				return mid;

			else if (arr[mid - 1] > arr[mid])
				r = mid - 1;

			else
				l = mid + 1;
		}

		return mid;
	}

	static ArrayList peaks(int arr[]) {
		ArrayList<Integer> peak = new ArrayList<>();
		for (int i = 1; i < arr.length - 1; i++) {
			if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
				peak.add(arr[i]);
			}
		}
		return peak;
	}

	// Driver Code
	public static void main(String args[]) {
		int arr[] = { 1, 5, 4, 20, 89, 54 };
		ArrayList peak = peaks(arr);
		System.out.println("peak elements are.....");
		System.out.println(peak);
	}
}
