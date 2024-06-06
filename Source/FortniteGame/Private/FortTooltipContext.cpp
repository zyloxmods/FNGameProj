#include "FortTooltipContext.h"
#include "Templates/SubclassOf.h"

UFortTooltipContext* UFortTooltipContext::SpawnTooltipContextWithSource_Advanced(const TSubclassOf<UFortTooltipContext>& TooltipContextClass, APlayerController* SourcePlayerController) {
    return NULL;
}

UFortTooltipContext* UFortTooltipContext::SpawnTooltipContextWithSource(APlayerController* SourcePlayerController) {
    return NULL;
}

UFortTooltipContext* UFortTooltipContext::SpawnTooltipContextWithNetID_Advanced(const TSubclassOf<UFortTooltipContext>& TooltipContextClass, UObject* WorldContextObject, const FUniqueNetIdRepl& UniqueId) {
    return NULL;
}

UFortTooltipContext* UFortTooltipContext::SpawnTooltipContextWithNetID(UObject* WorldContextObject, const FUniqueNetIdRepl& UniqueId) {
    return NULL;
}

UFortTooltipContext* UFortTooltipContext::SpawnTooltipContext_Advanced(const TSubclassOf<UFortTooltipContext>& TooltipContextClass) {
    return NULL;
}

UFortTooltipContext* UFortTooltipContext::SpawnTooltipContext() {
    return NULL;
}

UFortTooltipContext::UFortTooltipContext() {
    SourceAbilitySystem = NULL;
    DestAbilitySystem = NULL;
    TreatAsLevel = 0;
    ComparisonObject = NULL;
    PlayerInfo = NULL;
}

