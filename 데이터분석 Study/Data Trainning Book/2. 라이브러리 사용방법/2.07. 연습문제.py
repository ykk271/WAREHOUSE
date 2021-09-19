# 연습문제 2-10
def my_function(x):
    return 5 * x + 3

x = np.linspace(-10, 10)
plt.plot(x, my_function(x))
plt.show()

# 연습문제 2-11
x = np.linspace(-10, 10)
y1 = np.sin(x)
y2 = np.cos(x)
plt.plot(y1)
plt.plot(y2)
plt.show()

# 연습문제 2-12
x1 = np.random.uniform(0.0, 1.0, 10000)
x2 = np.random.uniform(0.0, 1.0, 10000)
plt.subplot(2,1,1)
plt.hist(x1)
plt.subplot(2,1,2)
plt.hist(x2)
plt.show()

