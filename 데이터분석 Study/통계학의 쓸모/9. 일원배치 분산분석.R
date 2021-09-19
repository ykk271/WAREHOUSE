data1 <- read.csv("9. 일원배치 분산분석.csv")
data1

data1$delta <- data1$pre - data1$post
data1

analysis <- aov(data1$delta~data1$drug, data=data1)
summary(analysis)

# 평균값 계산
aggregate(data1$delta~data1$drug, data=data1, mean)
boxplot(data1$delta ~ data1$drug,
        main = "상자그림",
        xlab = "약제의 종류",
        ylab = "통증개선정도")

library("agricolae")

scheffe.test(analysis,
             "data1$drug", # 군(범주형 자료)
             alpha = 0.05, # 유의수준
             group = TRUE, 
             console = TRUE,) # 프린트 아웃

