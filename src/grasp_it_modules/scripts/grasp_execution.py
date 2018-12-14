import utils_grasp as gu
import rospy
import graspit_commander
import moveit_commander
import pr2_controllers_msgs.msg



if __name__ == "__main__":
	rospy.init_node("moveit_demo")
	robot = moveit_commander.RobotCommander()
	gc = graspit_commander.GraspitCommander()
	pub = rospy.Publisher("/r_gripper_controller/command",pr2_controllers_msgs.msg.Pr2GripperCommand,queue_size=10)

	gu.spawn_mug()
	gu.open_right_grip(pub)
	#gu.raise_torso(robot)
	try:
		gu.home_right_arm(robot)
		gu.home_left_arm(robot)
	except:
		pass
	gu.home_head()
	grasps = gu.plan_grasps(gc)


	for idx,grasp in enumerate(grasps):
		gu.show_grasp(grasps,gc,idx)
		x = raw_input("1 for proceed, 0 for skip\n")
		#Check for reachability
		#if not gu.is_reachable(grasps,idx,robot):
		if x != '1':
			continue
		gu.execute_traj(grasps,idx,robot)
		gu.grab(pub)
		gu.up(robot)
		gu.down(robot)
		gu.open_right_grip(pub)
		gu.up(robot)


	import IPython
	IPython.embed()
