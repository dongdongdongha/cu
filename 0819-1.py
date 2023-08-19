import cv2
import mediapipe as mp
import pyautogui as pg



mp_face = mp.solutions.face_mesh
mp_drawing = mp.solutions.drawing_utils

faces = mp_face.FaceMesh(refine_landmarks=True)

cam = cv2.VideoCapture(0)
cam.set(cv2.CAP_PROP_FRAME_WIDTH, 1080)
width = cam.get(cv2.CAP_PROP_FRAME_WIDTH)
height = cam.get(cv2.CAP_PROP_FRAME_HEIGHT)

com_width, com_height = pg.size()


while True:
    ret, frame = cam.read()
    frame = cv2.flip(frame,1)#좌우반전 (1대신 0을 넣으면 상하반전)
    if not ret:
        continue
    image = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)#색 설정
    result = faces.process(image)
    if result.multi_face_landmarks:
        mp_drawing.draw_landmarks(frame, result.multi_face_landmarks[0], mp_face.FACEMESH_TESSELATION)
    cv2.imshow("cv2test", frame) #화면 띄우기
    
    if cv2.waitKey(50) == 27:
        break

cam.release()#반환
cv2.destroyAllWindows()#반환

