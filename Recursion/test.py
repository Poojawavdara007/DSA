void fun(int n) {
    if (n == 0) return;
    printf("%d ", n);   
    fun(n-1);           
    printf("%d ", n);   