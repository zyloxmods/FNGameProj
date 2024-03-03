#pragma once
#include "CoreMinimal.h"
#include "BuildingProp.h"
#include "LocalPawnInventoryChangedDelegate.h"
#include "FortCreativeLockDevice.generated.h"

class AFortPlayerController;
class APawn;

UCLASS(Blueprintable)
class AFortCreativeLockDevice : public ABuildingProp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocalPawnInventoryChanged OnLocalPawnInventoryChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerController* CachedLocalController;
    
public:
    AFortCreativeLockDevice();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void HandleLocalPawnExitPreviewArea();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void HandleLocalPawnEnterToPreviewArea(APawn* Pawn);
    
};

