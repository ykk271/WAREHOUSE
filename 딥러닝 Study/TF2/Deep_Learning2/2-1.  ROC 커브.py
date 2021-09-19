y_true = [0, 1, 1, 1, 1, 0, 1, 1, 0, 0]

A_proba = [0.6, 0.7, 0.7, 0.8, 0.9, 0.7, 0.85, 0.7, 0.65, 0.75]
B_proba = [0.05, 0.95, 0.99, 0.65, 0.78, 0.04, 0.01, 0.89, 0.11, 0.2]
C_proba = [0, 1, 1, 1, 1, 0, 1, 1, 0, 0]

from sklearn.metrics import roc_curve, auc

fpr_A, tpr_A, thr_A = roc_curve(y_true, A_proba)
fpr_B, tpr_B, thr_B = roc_curve(y_true, B_proba)
fpr_C, tpr_C, thr_C = roc_curve(y_true, C_proba)

auc_A = auc(fpr_A, tpr_A)
auc_B = auc(fpr_B, tpr_B)
auc_C = auc(fpr_C, tpr_C)

import matplotlib.pyplot as plt

plt.xlabel('False Positive Rate')
plt.ylabel('True Positive Rate')
plt.title('ROC Curve')
plt.plot(fpr_A, tpr_A, color = 'darkorange',
         lw = 2, label = 'ROC curve (arear = %0.2f)' % auc_A)
plt.plot(fpr_B, tpr_B, color = 'blue',
         lw = 2, label = 'ROC curve (arear = %0.2f)' % auc_B)
plt.plot(fpr_C, tpr_C, color = 'green',
         lw = 2, label = 'ROC curve (arear = %0.2f)' % auc_C)
plt.plot([0, 1], [0, 1], color = 'red', lw = 2, linestyle= '--')
plt.legend(loc = "lower right")
plt.show()


