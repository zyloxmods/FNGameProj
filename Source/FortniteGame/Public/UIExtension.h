#pragma once
#include "CoreMinimal.h"
#include "EUIExtensionSlot.h"
#include "UIExtension.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FUIExtension {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIExtensionSlot Slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> WidgetClass;
    
    FUIExtension();
};

