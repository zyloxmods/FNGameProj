#pragma once
#include "CoreMinimal.h"
#include "QuickbarProxySlotIconContainer.generated.h"

class UPaperSprite;

USTRUCT(BlueprintType)
struct FQuickbarProxySlotIconContainer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPaperSprite*> SlotIcons;
    
public:
    FORTNITEUI_API FQuickbarProxySlotIconContainer();
};

