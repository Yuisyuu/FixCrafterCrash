#include "plugin/FixCrafterCrash.h"

#include <memory>

#include "ll/api/plugin/NativePlugin.h"
#include "ll/api/plugin/RegisterHelper.h"

namespace fix_crafter_crash {

static std::unique_ptr<FixCrafterCrash> instance;

FixCrafterCrash& FixCrafterCrash::getInstance() { return *instance; }

bool FixCrafterCrash::load() {
    // Code for loading the plugin goes here.
    return true;
}

bool FixCrafterCrash::enable() {
    // Code for enabling the plugin goes here.
    return true;
}

bool FixCrafterCrash::disable() {
    // Code for disabling the plugin goes here.
    return true;
}

} // namespace fix_crafter_crash

LL_REGISTER_PLUGIN(fix_crafter_crash::FixCrafterCrash, fix_crafter_crash::instance);
