#pragma once
#include "CoreMinimal.h"
#include "EFortDBNOCarryEvent.h"
#include "FortDBNOCarryHoisterData.generated.h"

class AFortPlayerPawn;

USTRUCT(BlueprintType)
struct FFortDBNOCarryHoisterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerPawn* DBNOHoister;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortDBNOCarryEvent DBNOCarryEvent;
    
    FORTNITEGAME_API FFortDBNOCarryHoisterData();
};

