#pragma once
#include "CoreMinimal.h"
#include "AthenaLTMTraversePoint.h"
#include "ENitrogenTraversePointMode.h"
#include "NitrogenTraversePoint.generated.h"

class AActor;
class UCapsuleComponent;
class UParticleSystemComponent;
class USceneComponent;

UCLASS(Blueprintable)
class ANitrogenTraversePoint : public AAthenaLTMTraversePoint {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENitrogenTraversePointMode CurrentNitrogenTraversePointMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* FareRadiusParticleSystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* TriggerCapsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HideActorDelay;
    
public:
    ANitrogenTraversePoint();
private:
    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClientVisibiltyUpdated(bool bNewHidden);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClientInteracted(bool bOwnedByClient);
    
};

