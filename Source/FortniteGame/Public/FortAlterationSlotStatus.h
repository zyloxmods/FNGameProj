#pragma once
#include "CoreMinimal.h"
#include "EFortRarity.h"
#include "FortAlterationSlotStatus.generated.h"

class UFortAlterationItemDefinition;

USTRUCT(BlueprintType)
struct FFortAlterationSlotStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    UFortAlterationItemDefinition* Alteration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 MinRequiredLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EFortRarity MinHostItemRarity;
    
    FORTNITEGAME_API FFortAlterationSlotStatus();
};

