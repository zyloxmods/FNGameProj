#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ValetRaisinComponent.generated.h"

class AFortPlayerController;
class UAudioComponent;
class UFortItemDefinition;
class USoundAttenuation;
class USoundEffectSourcePresetChain;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UValetRaisinComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAttenuation* AttenuationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundEffectSourcePresetChain* PresetChain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldManageOwnAudio;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* DynamicAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Source, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* ReplicatedSource;
    
public:
    UValetRaisinComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSelectOption(AFortPlayerController* PlayerChoosing, const UFortItemDefinition* MusicSource);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Source();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortItemDefinition* GetSource() const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void ClientPickOption();
    
};

