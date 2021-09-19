# 대수의 법칙
calc_times = 1000
sample_array = np.array([1,2,3,4,5,6])
number_cnt = np.arange(1, calc_times + 1)

for i in range(4):
    p = np.random.choice(sample_array, calc_times).cumsum()
    plt.plot(p / number_cnt)
    plt.grid(True)

plt.show()

# 중심극한정리
def function_central_theory(N):
    
    sample_array = np.array([1,2,3,4,5,6])
    number_cnt = np.arange(1, N + 1) * 1.0

    mean_array = np.array([])

    for i in range(1000):
        cum_variables = np.random.choice(sample_array, N).cumsum()*1.0
        mean_array = np.append(mean_array, cum_variables[N-1] / N)
        
    plt.hist(mean_array)
    plt.grid(True)
    plt.show()

function_central_theory(30)


# 표본분포

# 카이제곱 분포
for df, c in zip([2, 10, 60], 'bar'):
    x = np.random.chisquare(df, 1000)
    plt.hist(x, 20, color=c)
    plt.grid(True)   
plt.show()

# t 분포
x = np.random.standard_t(5, 10000)
plt.hist(x)
plt.grid(True)
plt.show()

# F 분포
for df, c in zip([(6,7), (10, 10), (20, 25)], 'bar'):
    x = np.random.f(df[0], df[1], 1000)
    plt.hist(x, 100, color=c)
    plt.grid(True)   
plt.show()

