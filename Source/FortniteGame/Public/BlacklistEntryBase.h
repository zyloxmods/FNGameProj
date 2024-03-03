#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AttributeSet.h"
#include "BlacklistEntryBase.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, DefaultToInstanced, EditInlineNew, Within=FortAthenaMutator_SafezoneBlacklist)
class UBlacklistEntryBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat IsEntryDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ConsiderSafeZoneRadius;
    
    UBlacklistEntryBase();
};

