#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AthenaEmojiItemDefinition.h"
#include "AthenaShoutItemDefinition.generated.h"

class UAudioComponent;
class UObject;
class USceneComponent;
class USoundBase;

UCLASS(Blueprintable, MinimalAPI)
class UAthenaShoutItemDefinition : public UAthenaEmojiItemDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> ShoutSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSet<UAudioComponent*> TemporarilyHeldAudioComponents;
    
public:
    UAthenaShoutItemDefinition(const FObjectInitializer& ObjectInitializer);
protected:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    void SpawnSoundComponent(TSoftObjectPtr<USoundBase> OverrideSound, USceneComponent* Component, FVector LocationAt, UAudioComponent*& SpawnedComponent, UObject* WorldContext);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ConfigureSoundComponent(TSoftObjectPtr<USoundBase> OverrideSound, UAudioComponent* ComponentToConfigure) const;
    
};

