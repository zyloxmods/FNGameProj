#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LevelSaveSpawnable.h"
#include "OnLinkedVolumeSetDelegate.h"
#include "PropertyOverrideData.h"
#include "FortCreativeVolumeLinkComponent.generated.h"

class AFortVolume;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortCreativeVolumeLinkComponent : public UActorComponent, public ILevelSaveSpawnable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLinkedVolumeSet OnLinkedVolumeSet;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_LinkedVolume, meta=(AllowPrivateAccess=true))
    AFortVolume* LinkedVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldFindVolumeAtStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FPropertyOverrideData LinkedVolumeProperties;
    
public:
    UFortCreativeVolumeLinkComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_LinkedVolume();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnLinkedVolumeSettingsChanged(const FPropertyOverrideData& OverrideData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortVolume* GetLinkedVolume();
    
    
    // Fix for true pure virtual functions not being implemented
};

