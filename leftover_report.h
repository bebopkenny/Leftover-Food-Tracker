#ifndef LEFTOVER_REPORT_H_
#define LEFTOVER_REPORT_H_

// Please fill in below.
// Kenny Garcia
// CPSC 121L-13
// 04/17/2024
// kennygarcia15@csu.fullerton.edu
// @bebopkenny
#include <map>
#include <string>
#include <vector>

#include "leftover_record.h"

class LeftoverReport {
  // ======================= YOUR CODE HERE =======================
  // Write the LeftoverReport class here. Refer to your class design for the
  // member variables, constructors, and member functions needed.
  //
  // Note: mark functions that do not modify the member variables
  // as const, by writing `const` after the parameter list.
  // Pass objects by const reference when appropriate.
  // Remember that std::string is an object!
  // ===============================================================
 public:
  LeftoverReport() {}
  LeftoverReport(const std::vector<LeftoverRecord> &leftover_records)
      : leftover_records_(leftover_records) {}
  std::vector<std::string> MostCommonLeftover() const;
  std::vector<std::string> MostCostlyLeftoverProducingMeals() const;
  double TotalCostOfLeftover() const;
  std::vector<std::string> MostCommonLeftoverReasons() const;
  std::vector<std::string> MostCommonDisposalMechanisms() const;
  std::vector<std::string> SuggestLeftoverReductionStrategies() const;

 private:
  std::vector<LeftoverRecord> leftover_records_;
  // std::vector<std::string> most_common_leftover_;
  // std::vector<std::string> most_costly_leftover_producing_meals_;
  // double total_cost_of_leftovers_;
  // std::vector<std::string> most_common_leftover_reasons_;
  // std::vector<std::string> most_common_leftover_disposal_mechanisms_;
  // std::vector<std::string> suggested_strategies_to_reduce_leftovers_;
};

#endif
