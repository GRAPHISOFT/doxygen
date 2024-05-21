// objective: Test the WARN_IF_UNDOCUMENTED feature when set to YES
// check: 103__undocumented__member_8cpp.xml
// config: WARN_IF_UNDOCUMENTED=YES
// expected_warning_patterns: "warning: Member undocumentedFunction() in class TestClass is undocumented."

/*   * @brief Test class for undocumented methods */
class TestClass {
    void undocumentedFunction(); // This function is undocumented and should trigger a warning.
};
