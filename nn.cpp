#include "nn.h"

Linear new_linear(int64_t in_features, int64_t out_features) {
    torch_Linear torch_linear = torch_Linear(in_features, out_features);
    Linear linear = {torch_linear, torch_linear->weight, torch_linear->bias};
    return linear;
}
