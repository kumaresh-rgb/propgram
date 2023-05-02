

# t = [1, 8, 7]
# for i in range(len(t)+1):
#      if i not in t:
#         a = []
#         a.append(i,)
#         for j in range(len(a)):
#             print(a[j])



def missingNumbert(nums):
     n = len(nums)
     m = sum(nums)
     return ((n * (n + 1))// 2 ) - m