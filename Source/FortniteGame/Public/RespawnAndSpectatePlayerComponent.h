#pragma once
#include "CoreMinimal.h"
#include "ERespawnAndSpectatePlayerRespawningState.h"
#include "FortControllerComponent.h"
#include "RespawnAndSpectatePlayerComponent.generated.h"

class AFortAthenaMutator_RespawnAndSpectateSelect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API URespawnAndSpectatePlayerComponent : public UFortControllerComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float RespawnFailSafeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_RespawnAndSpectateSelect* ManagingMutator;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ERespawnAndSpectatePlayerRespawningState RespawningState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicateClientScreenFade_FadeIn, meta=(AllowPrivateAccess=true))
    int32 ReplicateClientScreenFade_FadeIn;
    
public:
    URespawnAndSpectatePlayerComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerFadeOutComplete();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicateClientScreenFade_FadeIn();
    
};

