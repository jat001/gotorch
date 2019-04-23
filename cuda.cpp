#include "cuda.h"

size_t device_count() {
    return torch::cuda::device_count();
}

bool is_available() {
    return torch::cuda::is_available();
}

bool cudnn_is_available() {
    return torch::cuda::cudnn_is_available();
}
