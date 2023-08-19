import cv2
import mediapipe as mp
import pyautogui as pg



mp_hands = mp.solutions.hands 
mp_drawing = mp.solutions.drawing_utils

hands = mp_hands.Hands()

cam = cv2.VideoCapture(0)
cam.set(cv2.CAP_PROP_FRAME_WIDTH, 1080)
width = cam.get(cv2.CAP_PROP_FRAME_WIDTH)
height = cam.get(cv2.CAP_PROP_FRAME_HEIGHT)

com_width, com_height = pg.size()

compare = [(17,4,2), (0,8,5), (0,12,9), (0,16,13), (0,20,17)]

while True:
    ret, frame = cam.read()
    frame = cv2.flip(frame,1)#좌우반전 (1대신 0을 넣으면 상하반전)
    if not ret:
        continue
    image = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)#색 설정
    result = hands.process(image)
    if result.multi_handedness:
        
        for hand_landmarks, handedness in zip(result.multi_hand_landmarks, result.multi_handedness):
            
            a = hand_landmarks.landmark
            
            fp = (int(a[8].x*com_width),int(a[8].y*com_height))
            pg.moveTo(fp[0],fp[1])
            
            label = handedness.classification[0].label
            coord = (int(a[0].x * width), int(a[0].y * height))
            cv2.putText(frame, label, coord, 
                    cv2.FONT_HERSHEY_COMPLEX, 2, (255, 255, 255), 1)
            
            mp_drawing.draw_landmarks(frame, hand_landmarks, mp_hands.HAND_CONNECTIONS)
            
            folding = ""
            for base, tip, mcp in compare:
                base_tip = (a[base].x-a[tip].x)**2 + (a[base].y-a[tip].y)**2
                base_mcp = (a[base].x-a[mcp].x)**2 + (a[base].y-a[mcp].y)**2
                folding += "01"[base_tip < base_mcp]#거리에 따라 접힌거면 0, 펴진거면 1
                eerd = (int(a[0].x * width), int((a[0].y * height)+40))
            cv2.putText(frame, folding, eerd, cv2.FONT_HERSHEY_DUPLEX, 2, (255,36,125), 1)
    cv2.imshow("cv2test", frame) #화면 띄우기
    
    if cv2.waitKey(50) == 27:
        break

cam.release()#반환
cv2.destroyAllWindows()#반환

