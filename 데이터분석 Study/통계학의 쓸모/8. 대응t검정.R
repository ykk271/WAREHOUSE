data <- read.csv("8. 대응t검정.csv")
data

# 변화량
data$delta <- data$post-data$pre
data

t.test(data$post, data$pre, paired=T)

t.test(data$delta, mu=0)



