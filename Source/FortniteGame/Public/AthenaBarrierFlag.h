#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BarrierFlagDisplayData.h"
#include "BuildingGameplayActor.h"
#include "EBarrierFlagState.h"
#include "EBarrierFoodTeam.h"
#include "AthenaBarrierFlag.generated.h"

class AAthenaBarrierObjective;
class UStaticMesh;

UCLASS(Blueprintable, MinimalAPI)
class AAthenaBarrierFlag : public ABuildingGameplayActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentState, meta=(AllowPrivateAccess=true))
    EBarrierFlagState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FoodTeam, meta=(AllowPrivateAccess=true))
    EBarrierFoodTeam FoodTeam;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBarrierFlagDisplayData FoodDisplayData[2];
    
public:
    AAthenaBarrierFlag();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStateChange(EBarrierFlagState NewState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FoodTeam();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewFoodTeam(EBarrierFoodTeam NewFoodTeam);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AAthenaBarrierObjective* GetObjectiveActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetMeshScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStaticMesh* GetHeadMesh() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClientSetLlamaRotation(FRotator NewDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClientSetIsFriendly(bool bIsFriendlyLlama);
    
};

