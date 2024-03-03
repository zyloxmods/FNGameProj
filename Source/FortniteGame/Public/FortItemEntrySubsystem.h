#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "FortItemEntryAbilityData.h"
#include "FortItemEntrySubsystem.generated.h"

UCLASS(Blueprintable)
class UFortItemEntrySubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FFortItemEntryAbilityData> ItemAbilityCooldownMap;
    
public:
    UFortItemEntrySubsystem();
};

