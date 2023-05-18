import time
start_time = time.time()
for i in range(0,100000):
    print(i)
end_time = time.time()
total_time = end_time - start_time
print("Time taken by program in Python is : ", total_time,' seconds')
print("Total time taken by program is ")