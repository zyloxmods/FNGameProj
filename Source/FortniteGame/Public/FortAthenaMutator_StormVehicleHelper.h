#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_StormVehicleHelper.generated.h"

class AActor;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortAthenaMutator_StormVehicleHelper : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> VehiclesToDestroy;
    
public:
    AFortAthenaMutator_StormVehicleHelper();
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlaylistDataLoaded(FName PlaylistName, const FGameplayTagContainer& PlaylistContextTags);
    
};

