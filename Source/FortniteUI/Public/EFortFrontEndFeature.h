#pragma once
#include "CoreMinimal.h"
#include "EFortFrontEndFeature.generated.h"

UENUM(BlueprintType)
enum class EFortFrontEndFeature : uint8 {
    ShowHomeBase,
    ShowHeroList,
    ShowVault,
    ShowStore,
    PlayZone,
    ShowDailyRewards,
    ShowHeroSelect,
    RecruitHero,
    ShowHomeBaseOverview,
    STWArmory_Transform,
    STWArmory_CollectionBook,
    MAX_None,
};

