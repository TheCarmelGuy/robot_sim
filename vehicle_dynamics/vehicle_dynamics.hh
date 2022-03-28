#ifndef VEH_DYN_HH
#define VEH_DYN_HH

namespace vd
{

  struct Pose
  {
    double x;
    double y;
    double theta;
    double gmt;
  };

  struct VehicleDimensions
  {
    double trackWidth_;
  };

  class VehicleDynamics
  {

  private:
    struct VehicleDimensions vehicleDimensions_;
    struct Pose curentPose_;

  public:
    VehicleDynamics(double _trackWidth);

    struct Pose CommandLeftRightVelocityForDuration(double _leftWheelSpeed, double _rightWheelSpeed,
                                                    double _deltaTime);
  };

} // namespace vd
#endif