import os
import graspit_commander
import rospy
import time
import moveit_commander
import pr2_controllers_msgs.msg
import copy

def spawn_mug():
	#-Y 1 For Yaw, rotation about z axis
 	os.system("rosrun gazebo_ros spawn_model -file /home/pardon/graspit_ws/src/system_launch/models/cup.urdf -urdf -model 7 -x .6 -y -.1 -z 0.55 -Y -1.57")
    #os.system("rosrun gazebo_ros spawn_model -database beer -sdf -model 7 -x .6 -y -.1 -z 0.55 -Y -1.57")

def plan_grasps(gc):
	#import IPython
	#IPython.embed()
	gc.clearWorld()
	gc.loadWorld("pr2_mug")
	response = gc.planGrasps()
	grasps = response.grasps
	return grasps


def raise_torso(robot):
	#TODO: look in source code for moveit commander to raise the effort, or raise the time
	tor = robot.get_group("torso")
	#tor.set_pose_target([0,0,0.2,0,0,0])
	#tor.set_start_state_to_current_state()
	#p = tor.go()
	#tor.move(0.2)



def open_right_grip(pub):
	msg = pr2_controllers_msgs.msg.Pr2GripperCommand()
	msg.max_effort = -1
	msg.position = .09
	pub.publish(msg)
	time.sleep(4)


def home_left_arm(robot):
	# mgc = moveit_commander.MoveGroupCommander("left_arm")
	# import IPython
	# IPython.embed()
	# group = robot.get_group('left_arm')
	# poseStamped = group.get_current_pose()
	# pose = poseStamped.pose
	# pose.position.x = 0.300734131684
	# pose.position.y = 0.826478051378
	# pose.position.z = 1.01718423826
	# pose.orientation.x = 0.963512110769
	# pose.orientation.y = 0.154272118514
	# pose.orientation.z = -0.042218700165
	# pose.orientation.w = 0.214620845231
	# traj = group.plan(pose)
	# group.execute(traj)


    mgc = moveit_commander.MoveGroupCommander("left_arm")
    mgc.get_current_joint_values()
    jv = mgc.get_current_joint_values()
    jv[0]=1.0

    mgc.set_joint_value_target(jv)
    mgc.plan()
    p = mgc.plan()
    mgc.execute(p)
    # import IPython
    # IPython.embed()

def home_right_arm(robot):
	# group = robot.get_group('left_arm')
	# poseStamped = group.get_current_pose()
	# pose = poseStamped.pose
	# pose.position.x = 0.300734131684
	# pose.position.y = -0.826478051378
	# pose.position.z = 1.01718423826
	# pose.orientation.x = 0.963512110769
	# pose.orientation.y = 0.154272118514
	# pose.orientation.z = -0.042218700165
	# pose.orientation.w = 0.214620845231
	# traj = group.plan(pose)
	# group.execute(traj)


    mgc = moveit_commander.MoveGroupCommander("right_arm")
    jv = mgc.get_current_joint_values()
    jv[0] = -1

    mgc.set_joint_value_target(jv)
    p = mgc.plan()
    mgc.execute(p)

def home_head():
    mgc = moveit_commander.MoveGroupCommander("head")
    jv = mgc.get_current_joint_values()
    jv[1] = 0.5
    mgc.set_joint_value_target(jv)
    p = mgc.plan()
    mgc.execute(p)

def show_grasp(grasps,gc,id=0):
	gc.setRobotPose(grasps[id].pose) #see the grasp



def is_reachable(grasps,id,robot):
	g = grasps[id]
	group = robot.get_group('right_arm')
	poseStamped = group.get_current_pose()
	pose = poseStamped.pose
	# pose.orientation = g.pose.orientation
	# traj = group.plan(pose)
	# group.execute(traj)

	pre_grasp_to_final_offset = 0.05

	pre_grasp_pose = copy.deepcopy(g.pose)
	pre_grasp_pose.position.z += pre_grasp_to_final_offset

	#offsets
	pre_grasp_pose.position.x += .6
	pre_grasp_pose.position.y += -.1
	pre_grasp_pose.position.z += .55
	traj = group.plan(pre_grasp_pose)
	#import IPython
	#IPython.embed()
	print traj

	return traj.joint_trajectory.points != []

def execute_traj(grasps,id,robot):
	g = grasps[id]
	group = robot.get_group('right_arm')
	poseStamped = group.get_current_pose()
	pose = poseStamped.pose
	# pose.orientation = g.pose.orientation
	# traj = group.plan(pose)
	# group.execute(traj)

	pre_grasp_to_final_offset = 0.05

	pre_grasp_pose = copy.deepcopy(g.pose)
	pre_grasp_pose.position.z += pre_grasp_to_final_offset

	#offsets
	pre_grasp_pose.position.x += .6
	pre_grasp_pose.position.y += -.1
	pre_grasp_pose.position.z += .55
	print "g.pose: "
	print g.pose



	traj = group.plan(pre_grasp_pose)
	group.execute(traj)

	final_grasp_pose = copy.deepcopy(pre_grasp_pose)
	final_grasp_pose.position.z -= pre_grasp_to_final_offset
	traj = group.plan(final_grasp_pose)
	group.execute(traj)

	# pose.position.z = .65 + g.pose.position.z
	# traj = group.plan(pose)
	# group.execute(traj)

	# pose.position.x = .6 + g.pose.position.x
	# traj = group.plan(pose)
	# group.execute(traj)
	# pose.position.y = -.1 + g.pose.position.y
	# traj = group.plan(pose)
	# group.execute(traj)
	# poseStamped = group.get_current_pose()
	# pose = poseStamped.pose

	# pose.position.z = .55 + g.pose.position.z
	# traj = group.plan(pose)
	# group.execute(traj)

def grab(pub):
	msg = pr2_controllers_msgs.msg.Pr2GripperCommand()
	msg.max_effort = -1
	msg.position = .00
	pub.publish(msg)
	time.sleep(4)

def up(robot):
	group = robot.get_group('right_arm')
	poseStamped = group.get_current_pose()
	pose = poseStamped.pose
	target = pose
	target.position.z += .1
	traj = group.plan(target)
	group.execute(traj)


def down(robot):
	group = robot.get_group('right_arm')
	poseStamped = group.get_current_pose()
	pose = poseStamped.pose
	target = pose
	target.position.z -= .1
	print target
	traj = group.plan(target)
	group.execute(traj)
