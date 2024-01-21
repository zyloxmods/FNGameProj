#pragma once
#include "CoreMinimal.h"
#include "FortPlayerControllerPvE.h"
#include "FortPlayerControllerKeep.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortPlayerControllerKeep : public AFortPlayerControllerPvE {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 WorkshopPickedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 ArmoryPickedItems;
    
public:
    AFortPlayerControllerKeep();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Exec)
    void StreamOutStuff();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StreamInStuff();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPermaniteAvailability(bool bAvailable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RestoreContainers();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetContainers();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpItemData();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientUnloadFoundations();
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetPermaniteAvailability(bool bAvailable);
    
};

