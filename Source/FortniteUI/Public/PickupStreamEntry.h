#pragma once
#include "CoreMinimal.h"
#include "PickupStreamEntry.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct FPickupStreamEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* PickupWidget;
    
    FORTNITEUI_API FPickupStreamEntry();
};

