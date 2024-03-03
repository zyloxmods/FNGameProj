#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "FortWorldMarkerData.h"
#include "FortWorldMarker.generated.h"

class AActor;
class AFortPawn;
class AFortPickup;
class AFortPlayerMarkerBase;
class UAthenaMarkerComponent;
class UFortWorldItemDefinition;
class UUserWidget;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortWorldMarker : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaMarkerComponent* MarkerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortWorldMarkerData MarkerDataCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerMarkerBase* MarkerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* MarkerWidget;
    
public:
    UFortWorldMarker();
private:
    UFUNCTION(BlueprintCallable)
    void PlayerStateDestroyed(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintCallable)
    void PickedUp(AFortPickup* SelfActor, AFortPawn* InteractingPawn, const UFortWorldItemDefinition* WorldItemDefinition, FVector PickupLocation);
    
    UFUNCTION(BlueprintCallable)
    void ActorDestroyed(AActor* DestroyedActor);
    
};

