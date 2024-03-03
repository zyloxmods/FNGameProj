#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "AmbientAudioEntryChangeSignatureDelegate.h"
#include "AmbientAudioTagChangeSignatureDelegate.h"
#include "AmbientAudioSubsystem.generated.h"

class AAmbientVolume;
class UAmbientAudioDataAsset;

UCLASS(Blueprintable)
class AMBIENTAUDIO_API UAmbientAudioSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAmbientAudioTagChangeSignature OnTagChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAmbientAudioEntryChangeSignature OnEntryChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AAmbientVolume*> GlobalVolumes;
    
public:
    UAmbientAudioSubsystem();
    UFUNCTION(BlueprintCallable)
    void RemoveGameplayTag(FGameplayTag GameplayTag);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAmbientEntry(FName AmbientName);
    
    UFUNCTION(BlueprintCallable)
    void AddGameplayTag(FGameplayTag GameplayTag);
    
    UFUNCTION(BlueprintCallable)
    void AddAmbientEntry(FName AmbientName, UAmbientAudioDataAsset* Asset, int32 Priority, float CrossfadeTime);
    
};

