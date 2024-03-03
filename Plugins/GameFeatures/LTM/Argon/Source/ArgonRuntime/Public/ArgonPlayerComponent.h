#pragma once
#include "CoreMinimal.h"
#include "FortControllerComponent.h"
#include "EArgonRacePhase.h"
#include "ArgonPlayerComponent.generated.h"

class AFortAthenaMutator_Argon;
class UFortMontageItemDefinitionBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ARGONRUNTIME_API UArgonPlayerComponent : public UFortControllerComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_EntireSquadDiedServerTimeForRespawn, meta=(AllowPrivateAccess=true))
    float EntireSquadDiedServerTimeForRespawn;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RotatePawnToCamera, meta=(AllowPrivateAccess=true))
    bool bRotatePawnToCamera;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortMontageItemDefinitionBase* CachedFinishedRaceEmote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ArgonMutator, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_Argon* ArgonMutator;
    
public:
    UArgonPlayerComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void PlayFinishedRaceEmote();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_RotatePawnToCamera();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_EntireSquadDiedServerTimeForRespawn();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ArgonMutator();
    
    UFUNCTION(BlueprintCallable)
    void OnRacePhaseChanged(EArgonRacePhase NewRacePhase);
    
};

