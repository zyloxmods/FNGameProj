#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FortPlayerControllerContext.generated.h"

class AFortPlayerController;

UINTERFACE(Blueprintable)
class UFortPlayerControllerContext : public UInterface {
    GENERATED_BODY()
};

class IFortPlayerControllerContext : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AFortPlayerController* GetControllerFromContext() const;
    
};

