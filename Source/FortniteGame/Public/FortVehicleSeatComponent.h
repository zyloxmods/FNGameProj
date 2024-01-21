#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AthenaCarPlayerSlot.h"
#include "AthenaCarPlayerSlotUnreplicated.h"
#include "FortVehicleSeatComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortVehicleSeatComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerSlots, meta=(AllowPrivateAccess=true))
    TArray<FAthenaCarPlayerSlot> PlayerSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FAthenaCarPlayerSlotUnreplicated> PlayerSlotsUnreplicated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> PlayerSlotPriorityList;
    
public:
    UFortVehicleSeatComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerSlots();
    
};

