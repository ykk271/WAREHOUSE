import pandas as pd
import numpy as np

student1 = pd.Series({'국어':np.nan, '영어':80, '수학':90})
student2 = pd.Series({'수학':80, '국어': 90})

print(student1)
print(student2)

sr_add = student1.add(student2, fill_value = 0)
sr_sub = student1.sub(student2, fill_value = 0)
sr_mul = student1.mul(student2, fill_value = 0)
sr_div = student1.div(student2, fill_value = 0)

result = pd.DataFrame([sr_add, sr_sub, sr_mul, sr_div],
                      index = ['+', '-', '*', '/'])

print(result)


