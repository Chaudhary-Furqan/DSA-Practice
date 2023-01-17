def fun(s,t):
    if s > t:
        return
    if s % 5 == 0:
        print("is our")
    elif s % 3 == 0:
        print("Food")
    elif s % 4 == 0:
        print("common")
    elif s % 8 == 0:
        print("ground")
    else:
        print("Food is our common ground.")
    fun(s+1,t)
s=input()
t=input()
s=int(s)
t=int(t)
fun(s,t)