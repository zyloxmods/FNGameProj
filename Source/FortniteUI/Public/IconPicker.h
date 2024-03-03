#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IconPicker.generated.h"

class UPaperSprite;

USTRUCT(BlueprintType)
struct FIconPicker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* Sprite;
    
    FORTNITEUI_API FIconPicker();
};

