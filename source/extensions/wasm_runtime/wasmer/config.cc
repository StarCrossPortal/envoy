#include "envoy/registry/registry.h"

#include "source/extensions/common/wasm/wasm_runtime_factory.h"

#include "include/proxy-wasm/wasmer.h"

namespace Envoy {
namespace Extensions {
namespace Common {
namespace Wasm {

class WasmerRuntimeFactory : public WasmRuntimeFactory {
public:
  WasmVmPtr createWasmVm() override { return proxy_wasm::createWasmerVm(); }

  absl::string_view name() override { return "envoy.wasm.runtime.wasmer"; }
};

#if defined(PROXY_WASM_HAS_RUNTIME_WASMER)
REGISTER_FACTORY(WasmerRuntimeFactory, WasmRuntimeFactory);
#endif

} // namespace Wasm
} // namespace Common
} // namespace Extensions
} // namespace Envoy
