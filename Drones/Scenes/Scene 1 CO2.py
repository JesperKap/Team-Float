from djitellopy import Tello

tello = Tello()
tello.connect()
tello.takeoff()
tello.move_up(20)
tello.go_xyz_speed(0,50,0,10)

tello.move_up(30)
tello.move_down(30)
tello.move_up(20)
tello.move_down(20)

tello.move_up(30)
tello.move_down(30)
tello.move_up(20)
tello.move_down(20)

tello.go_xyz_speed(0,20,0,10)

tello.move_up(30)
tello.move_down(30)
tello.move_up(20)
tello.move_down(20)

tello.move_up(30)
tello.move_down(30)
tello.move_up(20)
tello.move_down(20)

tello.go_xyz_speed(0,-20,0,10)

tello.move_up(30)
tello.move_down(30)
tello.move_up(20)
tello.move_down(20)

tello.move_up(30)
tello.move_down(30)
tello.move_up(20)
tello.move_down(20)

tello.go_xyz_speed(0,20,0,10)

tello.move_up(30)
tello.move_down(30)
tello.move_up(20)
tello.move_down(20)

tello.move_up(30)
tello.move_down(30)
tello.move_up(20)
tello.move_down(20)

tello.go_xyz_speed(0,-20,0,10)

tello.move_up(30)
tello.move_down(30)
tello.move_up(20)
tello.move_down(20)

tello.land()

