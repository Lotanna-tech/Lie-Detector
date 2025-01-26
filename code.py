import serial
import time
import numpy as np
from sklearn.linear_model import LogisticRegression
import pandas as pd
from sklearn.model_selection import train_test_split

arduino=serial.Serial("/dev/ttyACM0",9600,timeout=1)
time.sleep(2)

print("Reading Bpm data from Arduino")

try:
    bpm=arduino.readline().decode('utf-8').strip()
    print("BPM:",bpm)
except KeyboardInterrupt:
    arduino.close()
bpm=int(bpm)    
df=pd.read_csv("bpm_data.csv")
#print(df)
x_train,x_test,y_train,y_test=train_test_split(df[['BPM']],df[['Label']],test_size=0.1)

model=LogisticRegression()
model.fit(x_train,y_train)
predict=model.predict([[bpm]])
print(predict)