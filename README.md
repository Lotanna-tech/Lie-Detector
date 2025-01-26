Lie Detector using Pulse Sensor with Arduino Uno and Python (Scikit-learn for Logistic Regression)
This project involves creating a basic lie detection system using a pulse sensor connected to an Arduino Uno. The collected data is sent to a Python script via serial communication, where it is analyzed using the scikit-learn library for logistic regression-based predictions.

Key Components:
Pulse Sensor and Arduino Uno:

The pulse sensor measures heart rate data, which serves as the primary input for the system.
The Arduino processes the raw pulse data and transmits it via serial communication to the Python script.
Data Processing in Python:

Data received from the Arduino is pre-processed in Python.
Features like heart rate variability or average pulse rate are extracted for analysis.
Machine Learning with Scikit-learn:

Logistic regression is implemented using scikit-learn to classify the user’s emotional state (e.g., truthful or deceptive).
A dataset with labeled samples is used for training and testing the model.
Project Limitations:
Single Sensor Dependency:

The system relies exclusively on the pulse sensor, which provides limited physiological data. This makes it unsuitable for accurate lie detection, as heart rate alone is insufficient to account for the complexities of human emotional and physiological responses.
Lack of Additional Biometrics:

The absence of other relevant inputs such as galvanic skin response (GSR), respiration rate, and facial expressions reduces the system's reliability. Incorporating these sensors could significantly enhance prediction accuracy.
Simplistic Machine Learning Model:

Logistic regression, while effective for linear problems, may struggle with the non-linear patterns present in physiological responses during deception.
Future Improvements:
Integration of Additional Sensors:

Including GSR sensors to measure skin conductance and respiration sensors for breathing patterns can provide more comprehensive data for lie detection.
Advanced Machine Learning Models:

Using more sophisticated models like Random Forests, SVM, or Neural Networks could improve the system’s ability to recognize complex patterns.
Improved Dataset:

Collecting a larger and more diverse dataset with labeled instances of truth and deception would enhance the model’s training and testing, leading to better predictions.
User-specific Calibration:

Incorporating a calibration phase to adapt the system to the baseline physiology of individual users could improve accuracy.
This project demonstrates the foundational principles of physiological-based lie detection and highlights how expanding sensor inputs and refining machine learning models can significantly improve the system’s effectiveness.
