import cv2 as cv

#img = cv.imread('C:\\Users\\Saurav\\projects\\helloworld\\Binary_Tree\\Files\\dog.mp4')

capture = cv.VideoCapture('C:\\Users\\Saurav\\projects\\helloworld\\Binary_Tree\\Files\\dog.mp4')

while True:
    isTrue, frame = capture.read()
    cv.imshow('Dog',frame)
    if cv.waitKey(12) & 0xFF==ord('d'):
        break

capture.release()
cv.destroyAllWindows()


