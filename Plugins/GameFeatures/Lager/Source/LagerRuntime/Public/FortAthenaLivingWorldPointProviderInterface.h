#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "FortAthenaLivingWorldPointProviderFilterRules.h"
#include "FortAthenaLivingWorldPointProviderInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class UFortAthenaLivingWorldPointProviderInterface : public UInterface {
    GENERATED_BODY()
};

class IFortAthenaLivingWorldPointProviderInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSpawnedActorFailed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSpawnedActor(AActor* SpawnedActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEventRequested();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsEnabled(const FFortAthenaLivingWorldPointProviderFilterRules& PointFilter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetValidLocation(const FFortAthenaLivingWorldPointProviderFilterRules& PointFilter, FVector& OutPosition, FRotator& OutRotation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetFiltersTags(FGameplayTagContainer& FilterTags) const;
    
};

