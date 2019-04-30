#include "nn.h"

Linear new_linear(int64_t in_features, int64_t out_features) {
    _Linear linear = _Linear(in_features, out_features);
    return {
        linear,
        linear->weight,
        linear->bias,
    };
}
