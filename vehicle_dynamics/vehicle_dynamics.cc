#include "vehicle_dynamics.hh"
#include <Eigen/Dense>

namespace vd
{

  class VehicleDynamics
  {

    VehicleDynamics(double _trackWidth)
    {
      vehicleDimensions_.trackWidth_ = _trackWidth;
    }

    struct Pose CommandLeftRightVelocityForDuration(double _leftWheelSpeed, double _rightWheelSpeed,
                                                    double _deltaTime)
    {

      double angularVelocity = (_rightWheelSpeed - _leftWheelSpeed) / vehicleDimensions.trackWidth_;

      double radiusOfCurvature = vehicleDimensions_.trackWidth_ / 2.0 * ((_leftWheelSpeed + _rightWheelSpeed) / (-_leftWheelSpeed + _rightWheelSpeed));
    }
  };
} // namespace vd
