// Enum ACLPlugin.ACLCompressionLevel
enum class ACLCompressionLevel : uint8_t {
	ACLCL_Lowest,
	ACLCL_Low,
	ACLCL_Medium,
	ACLCL_High,
	ACLCL_Highest,
	ACLCL_MAX,
};

// Enum ACLPlugin.ACLVectorFormat
enum class ACLVectorFormat : uint8_t {
	ACLVF_Vector3_97,
	ACLVF_Vector3_Variable,
	ACLVF_Vector3_MAX,
};

// Enum ACLPlugin.ACLRotationFormat
enum class ACLRotationFormat : uint8_t {
	ACLRF_Quat_129,
	ACLRF_QuatDropW_97,
	ACLRF_QuatDropW_Variable,
	ACLRF_MAX,
};

