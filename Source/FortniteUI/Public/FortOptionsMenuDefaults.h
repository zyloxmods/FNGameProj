#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ESettingType.h"
#include "FortOptionsMenuDefaults.generated.h"

UCLASS(Blueprintable)
class UFortOptionsMenuDefaults : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESettingType, int32> SettingRotatorDefaults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESettingType, float> SettingSliderDefaults;
    
    UFortOptionsMenuDefaults();
};

