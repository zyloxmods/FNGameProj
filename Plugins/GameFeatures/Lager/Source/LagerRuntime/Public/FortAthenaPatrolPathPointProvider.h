#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "FortAthenaLivingWorldPointProviderInterface.h"
#include "FortAthenaPatrolPathPointProvider.generated.h"

class AFortAthenaPatrolPath;
class AFortGameStateAthena;

UCLASS(Blueprintable)
class AFortAthenaPatrolPathPointProvider : public AActor, public IFortAthenaLivingWorldPointProviderInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer FiltersTags;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortAthenaPatrolPath> PatrolPathWeakPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortGameStateAthena* CachedGameState;
    
public:
    AFortAthenaPatrolPathPointProvider();
private:
    UFUNCTION(BlueprintCallable)
    void OnSpawnedActorDestroyed(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintCallable)
    void OnCurrentPlaylistLoaded(FName PlaylistName, const FGameplayTagContainer& PlaylistContextTags);
    
    
    // Fix for true pure virtual functions not being implemented
};

