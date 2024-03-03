#pragma once
#include "CoreMinimal.h"
#include "FortWeaponBoardDisplaySlot.h"
#include "FortWeaponBoardDisplaySlotItem.generated.h"

USTRUCT(BlueprintType)
struct FFortWeaponBoardDisplaySlotItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortWeaponBoardDisplaySlot DisplaySlot;
    
    FORTNITEUI_API FFortWeaponBoardDisplaySlotItem();
};

