def countdown(n):
    print(n)           # Do something
    if n == 0:         # STOP condition
        print("Done!")
        return
    countdown(n - 1)   # Make it smaller (n becomes n-1)

countdown(3)