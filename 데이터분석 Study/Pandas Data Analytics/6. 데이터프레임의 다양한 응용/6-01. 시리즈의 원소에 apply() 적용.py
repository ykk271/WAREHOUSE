import seaborn as sns

titanic = sns.load_dataset('titanic')

df = titanic.loc[:, ['age','fare']]
print(df)

df['ten'] = 10
print(df.head())

def add_10(n):
    return n + 10

def add_two_obj(a, b):
    return a+b

print(add_10(10))
print(add_two_obj(10, 10))

sr1 = df['age'].apply(add_10)
print(sr1)

sr2 = df['age'].apply(add_two_obj, b=10)
print(sr2.head())

sr3 = df['age'].apply(lambda x: add_10(x))
print(sr3.head())

