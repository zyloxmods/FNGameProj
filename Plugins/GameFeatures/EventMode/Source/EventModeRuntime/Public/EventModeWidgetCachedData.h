#pragma once
#include "CoreMinimal.h"
#include "EUIExtensionSlot.h"
#include "EventModeWidgetCachedData.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct FEventModeWidgetCachedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIExtensionSlot Slot;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UUserWidget> Widget;
    
    EVENTMODERUNTIME_API FEventModeWidgetCachedData();
};

