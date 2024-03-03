#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "AmbientAudioStatics.generated.h"

class UAmbientAudioDataAsset;
class UAudioComponent;
class UObject;
class USoundBase;

UCLASS(Blueprintable)
class AMBIENTAUDIO_API UAmbientAudioStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAmbientAudioStatics();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveAmbientGameplayTag(UObject* WorldContextObject, FGameplayTag GameplayTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveAmbientEntry(UObject* WorldContextObject, FName AmbientName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PlaySoundAtLocation(UObject* WorldContextObject, USoundBase* Sound, FVector Location);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAudioComponent* CreateAudioComponent(UObject* WorldContextObject, USoundBase* Sound);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddAmbientGameplayTag(UObject* WorldContextObject, FGameplayTag GameplayTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddAmbientEntry(UObject* WorldContextObject, FName AmbientName, UAmbientAudioDataAsset* Asset, int32 Priority, float CrossfadeTime);
    
};

