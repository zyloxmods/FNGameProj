#pragma once
#include "CoreMinimal.h"
#include "ESafeZoneStartUp.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_SafeZoneStartupHelper.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortAthenaMutator_SafeZoneStartupHelper : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESafeZoneStartUp OverrideSafeZoneType;
    
public:
    AFortAthenaMutator_SafeZoneStartupHelper();
};

