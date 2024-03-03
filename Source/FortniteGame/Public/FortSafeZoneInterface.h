#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "FortSafeZoneInterface.generated.h"

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class FORTNITEGAME_API UFortSafeZoneInterface : public UInterface {
    GENERATED_BODY()
};

class FORTNITEGAME_API IFortSafeZoneInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual FVector GetSafeZoneNextNextCenter() const PURE_VIRTUAL(GetSafeZoneNextNextCenter, return FVector{};);
    
    UFUNCTION(BlueprintCallable)
    virtual FVector GetSafeZoneNextCenter() const PURE_VIRTUAL(GetSafeZoneNextCenter, return FVector{};);
    
};

