#include "vehicle_dynamics.hh"
#include <gtest/gtest.h>

int main(int argc, char **argv)
{

  std::vector<struct vd::Pose> poseVector;

  double leftWheelSpeed_mps, rightWheelSpeed_mps = 0;

  leftWheelSpeed_mps = 3;
  rightWheelSpeed_mps = 4;

  double duration_seconds = 5;
  double trackWidth_meters = 1.0;
  vd::VehicleDynamics veh1(trackWidth_meters);

  double deltaT_seconds = 0.1;

  double elapsedTime_seconds = 0;

  while (elapsedTime_seconds < duration_seconds)
  {

    poseVector.push_back(veh1.CommandLeftRightVelocityForDuration(leftWheelSpeed_mps,
     rightWheelSpeed_mps,deltaT_seconds));

    elapsedTime_seconds += deltaT_seconds; 
  }




}