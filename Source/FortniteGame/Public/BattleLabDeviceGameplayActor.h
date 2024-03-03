#pragma once
#include "CoreMinimal.h"
#include "BuildingGameplayActor.h"
#include "BattleLabDeviceGameplayActor.generated.h"

class UFortBattleLabDeviceItemDefinition;

UCLASS(Blueprintable)
class ABattleLabDeviceGameplayActor : public ABuildingGameplayActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BattleLabDeviceItemData, meta=(AllowPrivateAccess=true))
    UFortBattleLabDeviceItemDefinition* BattleLabDeviceItemData;
    
public:
    ABattleLabDeviceGameplayActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_BattleLabDeviceItemData();
    
};

