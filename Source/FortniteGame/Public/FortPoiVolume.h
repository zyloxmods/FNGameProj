#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "FortPoiVolume.generated.h"

class UFortPOIAmbientAudioBank;
class UFortPoiCollisionComponent;
class UShapeComponent;

UCLASS(Blueprintable, Config=Game)
class AFortPoiVolume : public AVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LargeGameVolume;
    
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
    
    UFUNCTION(BlueprintCallable)
    bool ContainsLocationTag(const FGameplayTag& Tag);
    
};

