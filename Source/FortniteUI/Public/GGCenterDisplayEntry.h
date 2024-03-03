#pragma once
#include "CoreMinimal.h"
#include "FortChangeMonitoringStruct.h"
#include "GGCenterDisplayEntry.generated.h"

class UFortWeaponItemDefinition;

USTRUCT(BlueprintType)
struct FGGCenterDisplayEntry : public FFortChangeMonitoringStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortWeaponItemDefinition* WeaponAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayersAtWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFinal;
    
    FORTNITEUI_API FGGCenterDisplayEntry();
};

