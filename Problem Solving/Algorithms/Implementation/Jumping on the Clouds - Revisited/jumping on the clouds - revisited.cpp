// Complete the jumpingOnClouds function below.
int jumpingOnClouds(vector<int> c, int k) {
    int energy = 100, i = 0, n = c.size();
    while (i == 0 || i % n != 0) {
        if (c[i % n] == 1) energy -= 2;
        energy--;
        i += k;
    }
    return energy;
}
