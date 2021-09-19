df <- read.csv("2장_분할표.csv")
df

df$vitamin <- factor(df$vitamin, 1:2, labels=c("yes", "No"))

df$cold <- factor(df$cold, 1:0, labels=c("yes", "No"))

a <- table(df$vitamin,df$cold)
a

chisq.test(a, correct=F)
