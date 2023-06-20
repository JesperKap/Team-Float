from djitellopy import Tello

tello = Tello()
tello.connect()
tello.takeoff()

tello.move_up(30)

tello.rotate_counter_clockwise(90)
tello.move_left(200)
tello.rotate_clockwise(90)
tello.move_left(200)
tello.move_forward(200)
tello.move_right(200)

tello.move_back(200)
tello.move_left(80)

tello.land()

