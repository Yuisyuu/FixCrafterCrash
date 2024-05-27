#include <ll/api/memory/Hook.h>
#include <mc/world/level/BlockSource.h>
#include <mc/world/level/BlockPos.h>
#include <mc/world/level/block/CrafterBlock.h>

LL_AUTO_TYPE_INSTANCE_HOOK(
    CrafterDispenseHook,
    ll::memory::HookPriority::Normal,
    CrafterBlock,
    CrafterBlock::dispenseFrom,
    void,
    BlockSource&    blockSource,
    BlockPos const& blockPos
) {
    auto& blockEntity = blockSource.getBlockEntity(blockPos);
    if (!blockEntity) {
        return;
    }
    origin(blockSource, blockPos);
}