#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "BlacklistEntryBase.h"
#include "BlacklistEntry_PoiVolume.generated.h"

class AFortPoiVolume;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UBlacklistEntry_PoiVolume : public UBlacklistEntryBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag POITag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat CheckRadius;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPoiVolume* RelevantVolume;
    
public:
    UBlacklistEntry_PoiVolume();
};

