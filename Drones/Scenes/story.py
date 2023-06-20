import time
from djitellopy import Tello

tello1 = Tello()
# tello1.connect()

# tello1.takeoff()
# # tello1.rotate_clockwise(200)
# # tello1.rotate_counter_clockwise(100)
# # tello1.flip('f')
# # tello1.flip_left()
# # tello1.flip_back()
# tello1.go_xyz_speed(0,250,10,100)
# tello1.flip_left()
# tello1.flip_back()
# tello1.go_xyz_speed(0,250,10,100)
# # tello1.curve_xyz_speed(0,10,20,0,10,20,10)
# tello1.land()

#
#
# # create instances of Tello objects
# tello1 = Tello()
# # tello2 = Tello()
#
# # connect to Tello drones
# tello1.connect()
# # tello2.connect()
#
# # wait for connection
# # time.sleep(5)
#
# # take off both drones
# tello1.takeoff()
# # tello2.takeoff()
#
# # wait for drones to stabilize
# # time.sleep(5)
# # tello1.curve_xyz_speed(500,600,700,800,900,1000,10)
#
# # make both drones move in a circle around each other
# tello1.rotate_clockwise(100)
# # # tello2.counter_clockwise(50)
# # time.sleep(10)
#
# # make 1st drone go behind a certain object and then perform a flip
# tello1.move_right(100)
# # time.sleep(2)
# tello1.flip('f')
# # tello1.flip('f')
# # tello1.flip('f')
# # tello1.flip('f')
#
#
# time.sleep(2)
#
# # make 2nd drone land on a person's hand
# # tello1.down(50)
# # time.sleep(2)
# # tello1.land()
#
# # make 2nd drone land on a person's hand
# # tello2.down(50)
# # time.sleep(2)
# # tello2.land()
#
# # make both drones move in a circle again
# tello1.rotate_counter_clockwise(100)
# # tello2.clockwise(50)
# time.sleep(10)
#
# # land both drones
# tello1.land()
# # tello2.land()
#
#
# # disconnect from Tello drones
tello1.disconnect()
# # tello2.disconnect()