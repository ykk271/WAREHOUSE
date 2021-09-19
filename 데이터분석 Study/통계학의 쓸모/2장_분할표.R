df <- read.csv('2강_분할표.csv')
df

# label 달기
df$vitamin <- factor(df$vitamin, 1:2, labels=c("yes", "No"))

df$cold <- factor(df$cold, 1:0, labels=c("yes", "No"))

df

table(df$vitamin,df$cold)

