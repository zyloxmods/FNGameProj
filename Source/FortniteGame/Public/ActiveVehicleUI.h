#pragma once
#include "CoreMinimal.h"
#include "ActiveVehicleUI.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct FActiveVehicleUI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* ActiveWidget;
    
    FORTNITEGAME_API FActiveVehicleUI();
};

