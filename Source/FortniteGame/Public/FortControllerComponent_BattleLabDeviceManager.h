#pragma once
#include "CoreMinimal.h"
#include "FortControllerComponent.h"
#include "OnBattleLabDeviceUpdatedDelegate.h"
#include "FortControllerComponent_BattleLabDeviceManager.generated.h"

class UFortBattleLabDeviceItemDefinition;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortControllerComponent_BattleLabDeviceManager : public UFortControllerComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBattleLabDeviceUpdated ForwardOnBattleLabDevicesUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortBattleLabDeviceItemDefinition*> CachedDeviceDefinitions;
    
public:
    UFortControllerComponent_BattleLabDeviceManager();
    UFUNCTION(BlueprintCallable)
    bool HasAnyAvailableBattleLabDevice();
    
};

