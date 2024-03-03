#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortAthenaAILODSetting.h"
#include "FortAILODSetting_FortWeaponRanged.generated.h"

USTRUCT(BlueprintType)
struct FFortAILODSetting_FortWeaponRanged : public FFortAthenaAILODSetting {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat Interval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat RandomDeviation;
    
public:
    FORTNITEGAME_API FFortAILODSetting_FortWeaponRanged();
};

