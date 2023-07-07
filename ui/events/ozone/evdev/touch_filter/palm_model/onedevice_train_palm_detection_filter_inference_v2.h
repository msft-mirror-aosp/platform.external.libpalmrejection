// Copyright 2021 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
// Code generated by tf.native.
#ifndef UI_EVENTS_OZONE_EVDEV_TOUCH_FILTER_PALM_MODEL_ONEDEVICE_TRAIN_PALM_DETECTION_FILTER_INFERENCE_V2_H_
#define UI_EVENTS_OZONE_EVDEV_TOUCH_FILTER_PALM_MODEL_ONEDEVICE_TRAIN_PALM_DETECTION_FILTER_INFERENCE_V2_H_
#include <cstdint>

namespace ui::internal_onedevice::alpha_model_v2 {
struct alignas(16) FixedAllocations {
  float alloc0[117];
  float alloc1[115];
  int32_t shape0[2];
};

extern int32_t input_from_feature_columns_input_layer_concat_concat0Shape[2];
extern int32_t logits_MatMul_merged_with_dnn_logits_BiasAdd0Shape[2];

#define CHROME_KNOWLEDGE_INPUT_FROM_FEATURE_COLUMNS_INPUT_LAYER_CONCAT_CONCAT0_RANK_V2 \
  2
#define CHROME_KNOWLEDGE_INPUT_FROM_FEATURE_COLUMNS_INPUT_LAYER_CONCAT_CONCAT0_DIM0_SIZE_V2 \
  1
#define CHROME_KNOWLEDGE_INPUT_FROM_FEATURE_COLUMNS_INPUT_LAYER_CONCAT_CONCAT0_DIM1_SIZE_V2 \
  173
#define CHROME_KNOWLEDGE_LOGITS_MATMUL_MERGED_WITH_DNN_LOGITS_BIASADD0_RANK_V2 2
#define CHROME_KNOWLEDGE_LOGITS_MATMUL_MERGED_WITH_DNN_LOGITS_BIASADD0_DIM0_SIZE_V2 \
  1
#define CHROME_KNOWLEDGE_LOGITS_MATMUL_MERGED_WITH_DNN_LOGITS_BIASADD0_DIM1_SIZE_V2 \
  1

void Inference(
    const float* __restrict input_from_feature_columns_input_layer_concat_concat0 /* shape: 1,173 */
    ,
    float* __restrict logits_MatMul_merged_with_dnn_logits_BiasAdd0 /* shape:
                                                                       1,1 */
    ,
    FixedAllocations* __restrict fixed);

}  // namespace ui::internal_onedevice::alpha_model_v2
#endif  // UI_EVENTS_OZONE_EVDEV_TOUCH_FILTER_PALM_MODEL_ONEDEVICE_TRAIN_PALM_DETECTION_FILTER_INFERENCE_V2_H_
