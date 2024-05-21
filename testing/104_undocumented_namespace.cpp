// objective: Test the WARN_IF_UNDOCUMENTED feature when set to YES
// check: 104__undocumented__namespace_8cpp.xml
// config: WARN_IF_UNDOCUMENTED_NAMESPACE=YES
// expected_warning_patterns: "warning: Namespace undocumentedNamespace is undocumented."

// This namespace is undocumented and should trigger a warning.
namespace UndocumentedNamespace {
    void undocumentedFunction();
}
