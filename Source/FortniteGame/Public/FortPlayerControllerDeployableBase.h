#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EFortCompletionResult.h"
#include "FortPlayerControllerPvE.h"
#include "ItemAndCount.h"
#include "FortPlayerControllerDeployableBase.generated.h"

class ADeployableBasePlot;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortPlayerControllerDeployableBase : public AFortPlayerControllerPvE {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ADeployableBasePlot* CurrentPlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ADeployableBasePlot* PreviousPlot;
    
public:
    AFortPlayerControllerDeployableBase();
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerMoveItemToDeployableBase(const FGuid& ItemOnPlayer, const int32 Count, const ADeployableBasePlot* ExpectedPlot);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerMoveItemFromDeployableBase(const FGuid& ItemOnPlot, const int32 Count, const ADeployableBasePlot* ExpectedPlot);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerMoveAllItemsToDeployableBase(const ADeployableBasePlot* ExpectedPlot);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerMoveAllItemsFromDeployableBase(const ADeployableBasePlot* ExpectedPlot);
    
public:
    UFUNCTION(BlueprintCallable)
    void MoveItemToDeployableBase(const FGuid& ItemOnPlayer, const int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void MoveItemFromDeployableBase(const FGuid& ItemOnPlot, const int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void MoveAllItemsToDeployableBase();
    
    UFUNCTION(BlueprintCallable)
    void MoveAllItemsFromDeployableBase();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnHordeWaveComplete(const int32 Wave, const TArray<FItemAndCount>& Rewards);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnHordeTierInitialized(const TArray<FItemAndCount>& Items);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnHordeTierComplete(EFortCompletionResult Result);
    
};

