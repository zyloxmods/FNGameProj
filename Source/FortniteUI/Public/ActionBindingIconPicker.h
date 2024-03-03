#pragma once
#include "CoreMinimal.h"
#include "ActionBindingIconPicker.generated.h"

class UPaperSprite;

USTRUCT(BlueprintType)
struct FActionBindingIconPicker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ActionNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* Sprite;
    
    FORTNITEUI_API FActionBindingIconPicker();
};

