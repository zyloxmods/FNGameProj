#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HUDElementToHighlight.generated.h"

USTRUCT(BlueprintType)
struct FHUDElementToHighlight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer HUDElementToHighlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer HUDSubElementToHighlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer UniqueHUDElementToHighlight;
    
    FORTNITEGAME_API FHUDElementToHighlight();
};

