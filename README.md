# ROS2 Migration – Bachelor Thesis Project

This repository contains the development workspace and source code for a bachelor thesis project focused on migrating a ROS1-based robotic system to ROS2. The system is designed for the **Transformation Hub Leitungssatz Challenge**, which involves automating the handling and insertion of flexible wiring harnesses using a **UR5e cobot**.

---

## 🧠 Project Goal

The primary goal is to reimplement the existing ROS1 system in ROS2 (**Humble Hawksbill**), ensuring functional equivalence and improved maintainability. This includes:

- Analyzing the legacy ROS1 codebase
- Porting key system components (messages, services, and nodes)
- Replacing deprecated drivers and dependencies with ROS2-compatible alternatives
- Modeling and simulating the robot workspace with **Gazebo**, **MoveIt2**, and **RViz2**
- Validating the system both in simulation and on real hardware

---

## 🛠️ Workspace Structure

This is a ROS2 workspace structured as follows:

```
ls_ros2_ws/
├── src/           # ROS2 packages
├── install/       # (auto-generated) install files
├── build/         # (auto-generated) build files
├── log/           # (auto-generated) logs
```

> `install/`, `build/`, and `log/` are excluded via `.gitignore`.

---

## 🤖 Simulation Environment

A preliminary **Gazebo simulation** setup has been created, which includes:

- **UR5e robot** mounted on a hovering plate (mock table/workbench)
- **Robotiq 2F-85 gripper** attached to the robot’s end-effector
- A basic **camera model** placed in the scene (to be adjusted to match the real setup)
- Integrated with **MoveIt2** and **RViz2** for motion planning and visualization

🛠️ **Controllers Available** (via ros2_control):
- `joint_state_broadcaster`
- `gripper_position_controller`
- `joint_trajectory_controller`

⚠️ The simulation does not yet fully reflect the real hardware system. Camera and table placement require adjustment, and integration of the **official ROS2 UR driver** is in progress.

---

## 🧩 Migration Progress

- ✅ ROS2 workspace initialized and linked to GitHub
- ✅ Custom ROS messages and services migrated to ROS2
- ✅ `package.xml` and `CMakeLists.txt` fully updated to ROS2 format
- ✅ Some nodes and logic successfully migrated from ROS1 to ROS2
- [ ] Legacy `ur_ros_driver` deprecated; replacement with official [Universal_Robots_ROS2_Driver](https://github.com/UniversalRobots/Universal_Robots_ROS2_Driver) underway
- ✅ Initial Gazebo simulation with UR5e, gripper, and MoveIt2 established

---

## 🚀 Next Steps

- [ ] Finalize integration with UR ROS2 driver
- [ ] Refine Gazebo simulation to reflect real hardware layout
- [ ] Configure and test hardware controllers via `ros2_control`
- [ ] Continue migrating the remaining C++ and Python nodes
- [ ] Full end-to-end integration and testing
- [ ] Real hardware deployment

---

## 📚 License

This project is licensed under the **MIT License**. See the [LICENSE](./LICENSE) file for details.
