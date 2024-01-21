#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Styling/SlateBrush.h"
#include "CalloutEntry.generated.h"

USTRUCT(BlueprintType)
struct FCalloutEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CalloutTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush CalloutIcon;
    
    FORTNITEGAME_API FCalloutEntry();
};

