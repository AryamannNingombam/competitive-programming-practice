

	void maxSum(int arr[], int n, int k)
	{

		if (n < k) {
			cout<<"Invalid"
			exit();
		}

		int max_sum = 0;

		for (int i = 0; i < k; i++)
			max_sum += arr[i];

		int window_sum = max_sum;
		for (int i = k; i < n; i++) {
			window_sum += arr[i] - arr[i - k];
			max_sum = max(max_sum, window_sum);
		}

        cout<<max_sum;

	}
