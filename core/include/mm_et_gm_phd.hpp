#ifndef CORE_INCLUDE_MM_ET_GM_PHD_HPP_
#define CORE_INCLUDE_MM_ET_GM_PHD_HPP_

#include <vector>

#include "calibrations.hpp"
#include "object.hpp"

namespace mot {
  class MmEtGmPhd {
    public:
      MmEtGmPhd() {}

      ~MmEtGmPhd(void) = default;

      void Run(const double timestamp) {
        SetTimestamp(timestamp);
        MakePrediction();
        MakeCorrection();
      }

      const std::vector<Object> & GetObjects(void) const {
        static std::vector<Object> output_objects;

        // TODO: Conversion

        return output_objects;
      }

    private:
      void SetTimestamp(const double timestamp) {
        time_delta_ = timestamp - timestamp_;
        timestamp_ = timestamp;
      }

      void MakePrediction() {
        //
      }

      void MakeCorrection() {
        //
      }

      double timestamp_ = 0.0;
      double time_delta_ = 0.0;
  };
} //  namespace mot

#endif  //  CORE_INCLUDE_MM_ET_GM_PHD_HPP_
