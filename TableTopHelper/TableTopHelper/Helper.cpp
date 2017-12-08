#include "Helper.h"
#include <random>
#include <time.h>
#include <thread>
#include <chrono>

namespace Helper {

	static void randomIntArray(int* arr, int capacity, int min, int max) {


		//std::this_thread::sleep_for(std::chrono::seconds(5));
		srand(time(0));
		

		for (int i = 0; i < capacity; i++) {
			arr[i] = min + (rand() % (max-min));
		}


		

	}

	static int[] randomIntArray(int capacity, int min, int max) {


		int *r = int[capacity];

		randomIntArray(r,capacity,min,max);

		return r;
	}
}