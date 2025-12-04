import math

def f(x):
    numerator   = -8.0 + x
    denominator = 20.0 + 1.0 / (8.0 + x)
    term1 = numerator / denominator
    term2 = math.tanh(x) ** 9.0
    return term1 + term2

def g(x):
    a = -0.5
    b =  0.5
    if x < a:
        return 0.0
    elif x <= b:
        return f(x)
    else:
        return x

x = -1.0
while x <= 1.0001:
    print(f"x = {x:5.2f}   g(x) = {g(x)}")
    x += 0.1
