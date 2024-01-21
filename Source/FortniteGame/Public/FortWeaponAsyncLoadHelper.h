#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FortWeaponAsyncLoadHelper.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortWeaponAsyncLoadHelper : public AActor {
    GENERATED_BODY()
public:
    AFortWeaponAsyncLoadHelper();
    UFUNCTION(BlueprintCallable)
    void ResetWeaponMeshOverrideCount();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAsyncLoadComplete();
    
};

