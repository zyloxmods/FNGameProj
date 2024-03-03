#pragma once
#include "CoreMinimal.h"
#include "EUIExtensionSlot.h"
#include "Templates/SubclassOf.h"
#include "ComponentWidgetPairings.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct FComponentWidgetPairings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIExtensionSlot Slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> Class;
    
    FORTNITEGAME_API FComponentWidgetPairings();
};

