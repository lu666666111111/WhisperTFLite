/* Copyright 2020 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_SERIALIZATION_TFLITE_GPU_CL_DATA_H_
#define FLATBUFFERS_GENERATED_SERIALIZATION_TFLITE_GPU_CL_DATA_H_

#include "flatbuffers/flatbuffers.h"

#include "serialization_base_generated.h"
#include "gpu_model_generated.h"

namespace tflite {
namespace gpu {
namespace cl {
namespace data {

struct BinaryProgram;
struct BinaryProgramBuilder;

struct InferenceContext;
struct InferenceContextBuilder;

struct BinaryProgram FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef BinaryProgramBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_FINGERPRINT = 4,
    VT_BINARY = 6
  };
  uint64_t fingerprint() const {
    return GetField<uint64_t>(VT_FINGERPRINT, 0);
  }
  const flatbuffers::Vector<uint8_t> *binary() const {
    return GetPointer<const flatbuffers::Vector<uint8_t> *>(VT_BINARY);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint64_t>(verifier, VT_FINGERPRINT, 8) &&
           VerifyOffset(verifier, VT_BINARY) &&
           verifier.VerifyVector(binary()) &&
           verifier.EndTable();
  }
};

struct BinaryProgramBuilder {
  typedef BinaryProgram Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_fingerprint(uint64_t fingerprint) {
    fbb_.AddElement<uint64_t>(BinaryProgram::VT_FINGERPRINT, fingerprint, 0);
  }
  void add_binary(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> binary) {
    fbb_.AddOffset(BinaryProgram::VT_BINARY, binary);
  }
  explicit BinaryProgramBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<BinaryProgram> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<BinaryProgram>(end);
    return o;
  }
};

inline flatbuffers::Offset<BinaryProgram> CreateBinaryProgram(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t fingerprint = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> binary = 0) {
  BinaryProgramBuilder builder_(_fbb);
  builder_.add_fingerprint(fingerprint);
  builder_.add_binary(binary);
  return builder_.Finish();
}

inline flatbuffers::Offset<BinaryProgram> CreateBinaryProgramDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t fingerprint = 0,
    const std::vector<uint8_t> *binary = nullptr) {
  auto binary__ = binary ? _fbb.CreateVector<uint8_t>(*binary) : 0;
  return tflite::gpu::cl::data::CreateBinaryProgram(
      _fbb,
      fingerprint,
      binary__);
}

struct InferenceContext FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef InferenceContextBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_GPU_MODEL = 4,
    VT_DRIVER_VERSION = 6,
    VT_BINARY_PROGRAMS = 8,
    VT_TUNED_WORK_GROUP_SIZES_PER_NODE = 10,
    VT_FINGERPRINTS_PER_NODE = 12
  };
  const tflite::gpu::data::GpuModel *gpu_model() const {
    return GetPointer<const tflite::gpu::data::GpuModel *>(VT_GPU_MODEL);
  }
  const flatbuffers::String *driver_version() const {
    return GetPointer<const flatbuffers::String *>(VT_DRIVER_VERSION);
  }
  const flatbuffers::Vector<flatbuffers::Offset<tflite::gpu::cl::data::BinaryProgram>> *binary_programs() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<tflite::gpu::cl::data::BinaryProgram>> *>(VT_BINARY_PROGRAMS);
  }
  const flatbuffers::Vector<flatbuffers::Offset<tflite::gpu::data::Int3>> *tuned_work_group_sizes_per_node() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<tflite::gpu::data::Int3>> *>(VT_TUNED_WORK_GROUP_SIZES_PER_NODE);
  }
  const flatbuffers::Vector<uint64_t> *fingerprints_per_node() const {
    return GetPointer<const flatbuffers::Vector<uint64_t> *>(VT_FINGERPRINTS_PER_NODE);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_GPU_MODEL) &&
           verifier.VerifyTable(gpu_model()) &&
           VerifyOffset(verifier, VT_DRIVER_VERSION) &&
           verifier.VerifyString(driver_version()) &&
           VerifyOffset(verifier, VT_BINARY_PROGRAMS) &&
           verifier.VerifyVector(binary_programs()) &&
           verifier.VerifyVectorOfTables(binary_programs()) &&
           VerifyOffset(verifier, VT_TUNED_WORK_GROUP_SIZES_PER_NODE) &&
           verifier.VerifyVector(tuned_work_group_sizes_per_node()) &&
           verifier.VerifyVectorOfTables(tuned_work_group_sizes_per_node()) &&
           VerifyOffset(verifier, VT_FINGERPRINTS_PER_NODE) &&
           verifier.VerifyVector(fingerprints_per_node()) &&
           verifier.EndTable();
  }
};

struct InferenceContextBuilder {
  typedef InferenceContext Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_gpu_model(flatbuffers::Offset<tflite::gpu::data::GpuModel> gpu_model) {
    fbb_.AddOffset(InferenceContext::VT_GPU_MODEL, gpu_model);
  }
  void add_driver_version(flatbuffers::Offset<flatbuffers::String> driver_version) {
    fbb_.AddOffset(InferenceContext::VT_DRIVER_VERSION, driver_version);
  }
  void add_binary_programs(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<tflite::gpu::cl::data::BinaryProgram>>> binary_programs) {
    fbb_.AddOffset(InferenceContext::VT_BINARY_PROGRAMS, binary_programs);
  }
  void add_tuned_work_group_sizes_per_node(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<tflite::gpu::data::Int3>>> tuned_work_group_sizes_per_node) {
    fbb_.AddOffset(InferenceContext::VT_TUNED_WORK_GROUP_SIZES_PER_NODE, tuned_work_group_sizes_per_node);
  }
  void add_fingerprints_per_node(flatbuffers::Offset<flatbuffers::Vector<uint64_t>> fingerprints_per_node) {
    fbb_.AddOffset(InferenceContext::VT_FINGERPRINTS_PER_NODE, fingerprints_per_node);
  }
  explicit InferenceContextBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<InferenceContext> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<InferenceContext>(end);
    return o;
  }
};

inline flatbuffers::Offset<InferenceContext> CreateInferenceContext(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<tflite::gpu::data::GpuModel> gpu_model = 0,
    flatbuffers::Offset<flatbuffers::String> driver_version = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<tflite::gpu::cl::data::BinaryProgram>>> binary_programs = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<tflite::gpu::data::Int3>>> tuned_work_group_sizes_per_node = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint64_t>> fingerprints_per_node = 0) {
  InferenceContextBuilder builder_(_fbb);
  builder_.add_fingerprints_per_node(fingerprints_per_node);
  builder_.add_tuned_work_group_sizes_per_node(tuned_work_group_sizes_per_node);
  builder_.add_binary_programs(binary_programs);
  builder_.add_driver_version(driver_version);
  builder_.add_gpu_model(gpu_model);
  return builder_.Finish();
}

inline flatbuffers::Offset<InferenceContext> CreateInferenceContextDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<tflite::gpu::data::GpuModel> gpu_model = 0,
    const char *driver_version = nullptr,
    const std::vector<flatbuffers::Offset<tflite::gpu::cl::data::BinaryProgram>> *binary_programs = nullptr,
    const std::vector<flatbuffers::Offset<tflite::gpu::data::Int3>> *tuned_work_group_sizes_per_node = nullptr,
    const std::vector<uint64_t> *fingerprints_per_node = nullptr) {
  auto driver_version__ = driver_version ? _fbb.CreateString(driver_version) : 0;
  auto binary_programs__ = binary_programs ? _fbb.CreateVector<flatbuffers::Offset<tflite::gpu::cl::data::BinaryProgram>>(*binary_programs) : 0;
  auto tuned_work_group_sizes_per_node__ = tuned_work_group_sizes_per_node ? _fbb.CreateVector<flatbuffers::Offset<tflite::gpu::data::Int3>>(*tuned_work_group_sizes_per_node) : 0;
  auto fingerprints_per_node__ = fingerprints_per_node ? _fbb.CreateVector<uint64_t>(*fingerprints_per_node) : 0;
  return tflite::gpu::cl::data::CreateInferenceContext(
      _fbb,
      gpu_model,
      driver_version__,
      binary_programs__,
      tuned_work_group_sizes_per_node__,
      fingerprints_per_node__);
}

inline const tflite::gpu::cl::data::InferenceContext *GetInferenceContext(const void *buf) {
  return flatbuffers::GetRoot<tflite::gpu::cl::data::InferenceContext>(buf);
}

inline const tflite::gpu::cl::data::InferenceContext *GetSizePrefixedInferenceContext(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<tflite::gpu::cl::data::InferenceContext>(buf);
}

inline bool VerifyInferenceContextBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<tflite::gpu::cl::data::InferenceContext>(nullptr);
}

inline bool VerifySizePrefixedInferenceContextBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<tflite::gpu::cl::data::InferenceContext>(nullptr);
}

inline void FinishInferenceContextBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<tflite::gpu::cl::data::InferenceContext> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedInferenceContextBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<tflite::gpu::cl::data::InferenceContext> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace data
}  // namespace cl
}  // namespace gpu
}  // namespace tflite

#endif  // FLATBUFFERS_GENERATED_SERIALIZATION_TFLITE_GPU_CL_DATA_H_
