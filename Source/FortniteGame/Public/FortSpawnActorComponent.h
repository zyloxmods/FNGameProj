#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameFrameworkComponent.h"
#include "Templates/SubclassOf.h"
#include "FortSpawnActorComponent.generated.h"

class AActor;
class AFortGameStateAthena;
class UFortPlaylist;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortSpawnActorComponent : public UGameFrameworkComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ActorToSpawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAttachSpawnedActorToOwner: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ComponentTag;
    
public:
    UFortSpawnActorComponent();
private:
    UFUNCTION(BlueprintCallable)
    void OnPlaylistDataLoaded(AFortGameStateAthena* GameState, const UFortPlaylist* Playlist, const FGameplayTagContainer& PlaylistContextTags);
    
};

