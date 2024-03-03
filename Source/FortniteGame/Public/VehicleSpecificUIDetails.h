#pragma once
#include "CoreMinimal.h"
#include "EUIExtensionSlot.h"
#include "EVehicleSeats.h"
#include "Templates/SubclassOf.h"
#include "VehicleSpecificUIDetails.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct FVehicleSpecificUIDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> WidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIExtensionSlot Slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EVehicleSeats> ValidSeats;
    
    FORTNITEGAME_API FVehicleSpecificUIDetails();
};

