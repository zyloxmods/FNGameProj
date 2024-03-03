#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AthenaVariantFilterTabInfo.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FAthenaVariantFilterTabInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer IncludedVariantChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableScrollBox;
    
    FORTNITEUI_API FAthenaVariantFilterTabInfo();
};

