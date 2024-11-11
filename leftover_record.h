#ifndef LEFTOVER_RECORD_H_
#define LEFTOVER_RECORD_H_

// Please fill in below.
// Kenny Garcia
// CPSC 121L-13
// 04/17/2024
// kennygarcia15@csu.fullerton.edu
// @bebopkenny
#include <string>

class LeftoverRecord {
  // ======================= YOUR CODE HERE =======================
  // Write the LeftoverRecord class here. Refer to your class design for the
  // member variables, constructors, and member functions needed.
  //
  // Note: mark functions that do not modify the member variables
  // as const, by writing `const` after the parameter list.
  // Pass objects by const reference when appropriate.
  // Remember that std::string is an object!
  // ===============================================================
 public:
  LeftoverRecord() {}
  LeftoverRecord(std::string date, std::string meal, std::string food_name,
                 double qty_in_oz, std::string leftover_reason,
                 std::string disposal_mechanism, double cost)
      : date_(date),
        meal_(meal),
        food_name_(food_name),
        qty_in_oz_(qty_in_oz),
        leftover_reason_(leftover_reason),
        disposal_mechanism_(disposal_mechanism),
        cost_(cost) {}
  void SetDate(const std::string &date) { date_ = date; }
  void SetMeal(const std::string &meal) { meal_ = meal; }
  void SetFoodName(const std::string &food_name) { food_name_ = food_name; }
  void SetQuantityInOz(double qty_in_oz) { qty_in_oz_ = qty_in_oz; }
  void SetLeftoverReason(const std::string &leftover_reason) {
    leftover_reason_ = leftover_reason;
  }
  void SetDisposalMechanism(const std::string &disposal_mechanism) {
    disposal_mechanism_ = disposal_mechanism;
  }
  void SetCost(double cost) { cost_ = cost; }

  std::string GetDate() const { return date_; }
  std::string GetMeal() const { return meal_; }
  std::string GetFoodName() const { return food_name_; }
  double GetQuantityInOz() const { return qty_in_oz_; }
  std::string GetLeftoverReason() const { return leftover_reason_; }
  std::string GetDisposalMechanism() const { return disposal_mechanism_; }
  double GetCost() const { return cost_; }

 private:
  std::string date_;
  std::string meal_;
  std::string food_name_;
  double qty_in_oz_;
  std::string leftover_reason_;
  std::string disposal_mechanism_;
  double cost_;
};

#endif
