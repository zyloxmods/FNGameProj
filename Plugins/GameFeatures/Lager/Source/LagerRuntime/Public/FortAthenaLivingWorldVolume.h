#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "FortAthenaLivingWorldPointProviderInterface.h"
#include "FortAthenaLivingWorldVolume.generated.h"

class AActor;
class AFortGameStateAthena;
class UEnvQuery;

UCLASS(Blueprintable)
class AFortAthenaLivingWorldVolume : public AVolume, public IFortAthenaLivingWorldPointProviderInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer FiltersTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery DeactivationTagsQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeactivationTagsRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* EnvironmentQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat WaterLevelIndexMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat WaterLevelIndexMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortGameStateAthena* CachedGameState;
    
public:
    AFortAthenaLivingWorldVolume();
private:
    UFUNCTION(BlueprintCallable)
    void OnPointProviderRegistered(AActor* PointProvider);
    
    UFUNCTION(BlueprintCallable)
    void OnCurrentPlaylistLoaded(FName PlaylistName, const FGameplayTagContainer& PlaylistContextTags);
    
    
    // Fix for true pure virtual functions not being implemented
};

