### Import library
import numpy as np 
import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns

### Data import
dataPath = 'D:/GIT/kaggle data/santander-product-recommendation/'

train = pd.read_csv(dataPath+'train_ver2.csv')
test = pd.read_csv(dataPath+'test_ver2.csv')

train.shape
test.shape
train.head()

# 변수 5개씩 미리보기
i = 1
for col in train.columns:
    print('[{}]\n{}\n'.format(str(i),train[col].head()))
    i += 1

train.info()

# col# 1~24: 고객관련 변수
# col# 25~48: 금융 제품 변수
# object: string값이 포함된 변수

'''
# 설명
1:  날짜
2:  고객 고유식별번호
3:  고용지표 (A: active, B: ex employed, F:final, N:not employee, P: passive)
4:  고객 거주 국가
5:  성멸
6:  나이
7:  고객이 은행과 첫 계약을 체결한 날짜
8:  신규 고객 지표
9:  은행 거래 누적 기간
10: 고객 등급(1: 1등급, 99: 해당 달에 1등급이 해제되는 고객)
11: 1등급 고객으로써 마지막 날짜
12: 월초 기준 고객 등급(1: 1등급 고객, 2:co-owner, P: potential, 3: formal primary, 4: formal co-owner)
13: 월초 기준 고객(A: active, I: inactive, P: formal customer, R: potential)
14: 거주 지표(고객의 거주 국가와 은행이 위치한 국가 동일 여부: S(yes), N(no))
15: 외국인 지표
16: 배우자 지표(1: 은행 직원을 배우자로 둔 고객)
17: 고객 유입 채널
18: 고객 사망 여부
19: 주소 유형 (1: primary address)
20: 지방 코드(주소 기반)
21: 지방이름
22: 활성화 지표(1: active, 2: inactive)
23: 가구 총 수입
24: 분류(01: VIP, 02: 개인, 03: 대졸)
25: 예금
26: 보증
27: 당좌 예금
28: 파생 상품 계좌
29: 급여 계정
30: 청소년 계정
31: 마스 특별 계정
32: 특정 계정
33: 특정 플러스 계정
34: 단기 예끔
35: 중기 예금
36: 장기 예금
37: e-계정
38: 펀드
39: 부동산 대출
40: 연금
41: 대출
42: 세금
43: 신용카드
44: 증권
45: 홈 계정
46: 급여
47: 연금
48: 직불카드
'''

# 변수 이름 출력
i = 1
for col in train.columns:
    print('#{}: {}'.format(i, col))
    i += 1 

# 고객 변수 중 수치 / 범주형 변수
num_cols = [col for col in train.columns[:24] if train[col].dtype in ['int64', 'float64']]

for i in num_cols:
    print('{}\n'.format(train[i].describe()))
# cod_prove: 1~52 값을 가지며 범주형 변수로 성격을 갖는 지방 코드 변수

cat_cols = [col for col in train.columns[:24] if train[col].dtype in ['object']]

for i in cat_cols:
    print('{}\n'.format(train[i].describe()))

# count: 데이터 개수
# unique: 고유값 개수
# top: 최빈 값
# freq: 최빈 값의 빈도 수

# 고유값 출력해보기
for col in cat_cols:
    uniq = np.unique(train[col].astype(str))
    print('-'*50)
    print('# col {}, n_uniq {}, uniq {}'.format(col, len(uniq), uniq))


### Data visualization 

# 막대그리기
skip_cols = ['ncoderps', 'renta']

fig = plt.figure()
i = 1
for col in train.columns:
    if col in skip_cols:
        continue

    sns.countplot(x=col,data=train,alpha=0.5)
    ax = plt.gca()
    ax.axes.xaxis.set_visible(False)
    ax.axes.yaxis.set_visible(False)
    ax = fig.add_subplot(6, 8, i)

    i += 1


plt.show()