#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateBrush.h"
#include "BuildingGameplayActor.h"
#include "ETraversePointState.h"
#include "AthenaTraversePoint.generated.h"

class AActor;

UCLASS(Blueprintable)
class FORTNITEGAME_API AAthenaTraversePoint : public ABuildingGameplayActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MiniMapSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CompassSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush MiniMapBrush_Active;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush CompassBrush_Active;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldTeleportToGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentState, meta=(AllowPrivateAccess=true))
    ETraversePointState CurrentState;
    
public:
    AAthenaTraversePoint();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentState();
    
    UFUNCTION(BlueprintCallable)
    void OnNewState_TouchedByPlayer_Server();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewState_TouchedByPlayer_Client();
    
    UFUNCTION(BlueprintCallable)
    void OnNewState_Hidden_Server();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewState_Hidden_Client();
    
    UFUNCTION(BlueprintCallable)
    void OnNewState_Finished_Server();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewState_Finished_Client();
    
    UFUNCTION(BlueprintCallable)
    void OnNewState_Active_Server();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewState_Active_Client();
    
    UFUNCTION(BlueprintCallable)
    void OnImpactedByPlayer(AActor* PlayerActor);
    
};

