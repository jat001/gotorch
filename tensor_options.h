#ifdef __cplusplus
#include <torch/extension.h>
extern "C" {
#endif

#ifdef __cplusplus
// dtype
constexpr auto _kUInt8   = torch::kUInt8;
constexpr auto _kInt8    = torch::kInt8;
constexpr auto _kInt16   = torch::kInt16;
constexpr auto _kInt32   = torch::kInt32;
constexpr auto _kInt64   = torch::kInt64;
constexpr auto _kFloat32 = torch::kFloat32;
constexpr auto _kFloat64 = torch::kFloat64;

// layout
constexpr auto _kStrided = torch::kStrided;
constexpr auto _kSparse  = torch::kSparse;

// device
constexpr auto _kCPU  = torch::kCPU;
constexpr auto _kCUDA = torch::kCUDA;
#else
// dtype
typedef void* _kUInt8;
typedef void* _kInt8;
typedef void* _kInt16;
typedef void* _kInt32;
typedef void* _kInt64;
typedef void* _kFloat32;
typedef void* _kFloat64;

// layout
typedef void* _kStrided;
typedef void* _kSparse;

// device
typedef void* _kCPU;
typedef void* _kCUDA;
#endif

#ifdef __cplusplus
}
#endif
