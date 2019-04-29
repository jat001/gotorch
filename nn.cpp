#include "nn.h"

Linear new_linear(int64_t in_features, int64_t out_features) {
    _Linear _linear = _Linear(in_features, out_features);
    Linear linear = {_linear, _linear->weight, _linear->bias};
    return linear;
}
