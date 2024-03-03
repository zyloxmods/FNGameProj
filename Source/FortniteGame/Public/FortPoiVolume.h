#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "FortPoiVolume.generated.h"

class UFortPOIAmbientAudioBank;
class UFortPoiCollisionComponent;
class UShapeComponent;

UCLASS(Blueprintable, MinimalAPI, Config=Game)
class AFortPoiVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLargeGameVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentFortPoiVolumeSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VolumeThresholdForLargeGameVolume;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LargeGameVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> EventsEnabledDuring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer LocationTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPOIAmbientAudioBank* AudioBank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortPoiCollisionComponent* PoiCollisionComp;
    
public:
    AFortPoiVolume();
    UFUNCTION(BlueprintCallable)
    bool DoesShapeComponentOverlap(UShapeComponent* Shape);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ContainsLocationTag(const FGameplayTag& Tag) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void CalendarEventsShouldBeReady(const TArray<FString>& NewEvents);
    
};

