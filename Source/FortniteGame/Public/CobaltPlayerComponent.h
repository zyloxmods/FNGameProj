#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "FortControllerComponent.h"
#include "CobaltPlayerComponent.generated.h"

class AFortAthenaMutator_Cobalt;
class AFortPlayerController;
class AFortPlayerPawn;
class AFortPlayerStateAthena;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCobaltPlayerComponent : public UFortControllerComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_CachedMutator, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortAthenaMutator_Cobalt> CachedMutator;
    
public:
    UCobaltPlayerComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CachedMutator();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPlayerPawnLoaded(AFortPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void OnPawnLanded(const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnPawnEnterWater(AFortPlayerPawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void ClientOnPawnKilled(AFortPlayerStateAthena* Victim);
    
};

